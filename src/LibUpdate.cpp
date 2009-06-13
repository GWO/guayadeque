// -------------------------------------------------------------------------------- //
//	Copyright (C) 2008-2009 J.Rios
//	anonbeat@gmail.com
//
//    This Program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2, or (at your option)
//    any later version.
//
//    This Program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; see the file LICENSE.  If not, write to
//    the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
//    http://www.gnu.org/copyleft/gpl.html
//
// -------------------------------------------------------------------------------- //
#include "LibUpdate.h"

#include "Commands.h"
#include "Config.h"
#include "MainApp.h"
#include "Utils.h"

// -------------------------------------------------------------------------------- //
wxDateTime GetFileLastChange( const wxString &FileName )
{
    wxDateTime RetVal;
    wxStructStat St;
    wxStat( FileName, &St );
    RetVal.Set( St.st_ctime );
    return RetVal;
}

// -------------------------------------------------------------------------------- //
guLibUpdateThread::guLibUpdateThread( DbLibrary * db )
{
    m_Db = db;
    m_MainFrame = ( guMainFrame * ) wxTheApp->GetTopWindow();
    m_GaugeId = ( ( guStatusBar * ) m_MainFrame->GetStatusBar() )->AddGauge();

    guConfig * Config = ( guConfig * ) guConfig::Get();
    if( Config )
    {
         m_LibPaths = Config->ReadAStr( wxT( "LibPath" ), wxEmptyString, wxT( "LibPaths" ) );
         m_LastUpdate.ParseDateTime( Config->ReadStr( wxT( "LastUpdate" ), wxEmptyString, wxT( "General" ) ) );
         //guLogMessage( wxT( "LastUpdate: %s" ), m_LastUpdate.Format().c_str() );
    }

    if( Create() == wxTHREAD_NO_ERROR )
    {
        SetPriority( WXTHREAD_DEFAULT_PRIORITY );
        Run();
    }
}

// -------------------------------------------------------------------------------- //
guLibUpdateThread::~guLibUpdateThread()
{
    guConfig * Config = ( guConfig * ) guConfig::Get();
    if( Config )
    {
        wxDateTime Now = wxDateTime::Now();
        Config->WriteStr( wxT( "LastUpdate" ), Now.Format(), wxT( "General" ) );
    }

    wxCommandEvent event( wxEVT_COMMAND_MENU_SELECTED, ID_LIBRARY_UPDATED );
    event.SetEventObject( ( wxObject * ) this );
    wxPostEvent( wxTheApp->GetTopWindow(), event );
    //
    event.SetId( ID_GAUGE_REMOVE );
    event.SetInt( m_GaugeId );
    wxPostEvent( wxTheApp->GetTopWindow(), event );
}

// -------------------------------------------------------------------------------- //
int guLibUpdateThread::ScanDirectory( wxString dirname )
{
  wxDir Dir;
  wxString FileName;
  wxString SavedDir( wxGetCwd() );

  Dir.Open( dirname );
  wxSetWorkingDirectory( dirname );
  //guLogMessage( wxT( "Scanning dir '%s'" ), dirname.c_str() );

  if( !TestDestroy() && Dir.IsOpened() )
  {
    if( Dir.GetFirst( &FileName, wxEmptyString, wxDIR_FILES | wxDIR_DIRS ) )
    {
      do {
        if( ( FileName[ 0 ] != '.' ) )
        {
          if( Dir.Exists( FileName ) )
          {
            //guLogMessage( wxT( "Scanning dir '%s'" ), FileName.c_str() );
            ScanDirectory( FileName );

            wxCommandEvent event( wxEVT_COMMAND_MENU_SELECTED, ID_GAUGE_SETMAX );
            event.SetInt( m_GaugeId );
            event.SetExtraLong( m_Files.Count() );
            wxPostEvent( m_MainFrame, event );
          }
          else
          {
            // TODO: add other file formats ?
            if( FileName.EndsWith( wxT( ".mp3" ) ) )
            {
//                wxFileName FN( FileName );
//                if( FN.GetModificationTime() > m_LastUpdate )
                wxDateTime FileDate = GetFileLastChange( FileName );
                if( FileDate > m_LastUpdate )
                {
                    guLogMessage( wxT( "File date: %s" ), FileDate.Format().c_str() );
                    m_Files.Add( SavedDir + wxT( '/' ) + dirname + wxT( '/' ) + FileName );
                }
            }
          }
        }
      } while( !TestDestroy() && Dir.GetNext( &FileName ) );
    }
  }
  wxSetWorkingDirectory( SavedDir );
  return 1;
}

// -------------------------------------------------------------------------------- //
guLibUpdateThread::ExitCode guLibUpdateThread::Entry()
{
    wxCommandEvent evtup( wxEVT_COMMAND_MENU_SELECTED, ID_GAUGE_UPDATE );
    evtup.SetInt( m_GaugeId );

    wxCommandEvent evtmax( wxEVT_COMMAND_MENU_SELECTED, ID_GAUGE_SETMAX );
    evtmax.SetInt( m_GaugeId );

    int index;
    int count = m_LibPaths.Count();
    if( !count )
    {
        return 0;
    }

    // For every directory in the library scan for new files and add them to m_Files
    index = 0;
    while( !TestDestroy() && ( index < count ) )
    {
        ScanDirectory( m_LibPaths[ index ] );
        index++;
    }

    // For every new file update it in the database
    count = m_Files.Count();
    if( count )
    {
        index = 0;
        evtmax.SetExtraLong( count );
        wxPostEvent( m_MainFrame, evtmax );
        while( !TestDestroy() )
        {
            //guLogMessage( wxT( "%i - %i" ), index, count );
            if( ( index >= count ) )
                break;

             m_Db->ReadFileTags( m_Files[ index ].char_str() );
                //Sleep( 1 );
            index++;
            evtup.SetExtraLong( index );
            wxPostEvent( m_MainFrame, evtup );
        }
    }

    m_Db->DoCleanUp();
    return 0;
}

// -------------------------------------------------------------------------------- //