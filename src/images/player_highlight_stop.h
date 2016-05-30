// -------------------------------------------------------------------------------- //
//	Copyright (C) 2008-2016 J.Rios anonbeat@gmail.com
//
//    This Program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 3, or (at your option)
//    any later version.
//
//    This Program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; see the file LICENSE.  If not, write to
//    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//    http://www.gnu.org/copyleft/gpl.html
//
// -------------------------------------------------------------------------------- //
const unsigned char guImage_player_highlight_stop[] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
  0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1e,
  0x08, 0x06, 0x00, 0x00, 0x00, 0x3b, 0x30, 0xae, 0xa2, 0x00, 0x00, 0x00,
  0x04, 0x73, 0x42, 0x49, 0x54, 0x08, 0x08, 0x08, 0x08, 0x7c, 0x08, 0x64,
  0x88, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x15,
  0x4f, 0x00, 0x00, 0x15, 0x4f, 0x01, 0x4c, 0x81, 0x2f, 0x25, 0x00, 0x00,
  0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61,
  0x72, 0x65, 0x00, 0x77, 0x77, 0x77, 0x2e, 0x69, 0x6e, 0x6b, 0x73, 0x63,
  0x61, 0x70, 0x65, 0x2e, 0x6f, 0x72, 0x67, 0x9b, 0xee, 0x3c, 0x1a, 0x00,
  0x00, 0x03, 0x09, 0x49, 0x44, 0x41, 0x54, 0x48, 0x89, 0xbd, 0xd7, 0x5f,
  0x88, 0x55, 0x55, 0x14, 0xc7, 0xf1, 0xcf, 0xbd, 0x93, 0x35, 0x05, 0x11,
  0x11, 0xa2, 0x53, 0x5a, 0xbe, 0x44, 0x10, 0x4d, 0x60, 0x45, 0x51, 0x3d,
  0x74, 0xa1, 0x1e, 0x84, 0xfe, 0xd1, 0x5f, 0xad, 0x88, 0x18, 0x89, 0x20,
  0x22, 0xc8, 0x22, 0xb3, 0x28, 0xd6, 0xac, 0xc1, 0x11, 0x7c, 0xb0, 0x02,
  0x89, 0xe8, 0x29, 0x09, 0x0b, 0x86, 0x8a, 0x9a, 0xac, 0x97, 0x20, 0xf0,
  0x06, 0x12, 0x62, 0xf6, 0x30, 0xbe, 0x58, 0x14, 0x54, 0x6a, 0x53, 0x48,
  0x0c, 0xbd, 0x54, 0x22, 0x39, 0x3d, 0xec, 0x73, 0xf5, 0xce, 0x65, 0xfe,
  0x8f, 0x33, 0x0b, 0xce, 0xcb, 0x39, 0x6b, 0xed, 0xef, 0x5a, 0x7b, 0x9f,
  0xbd, 0xf7, 0x6f, 0xd5, 0xfa, 0xfb, 0xfb, 0xcd, 0x64, 0x11, 0xb1, 0x0c,
  0x0d, 0xdc, 0x87, 0x1b, 0x70, 0x29, 0x56, 0x54, 0x9f, 0xff, 0xc0, 0x28,
  0x0e, 0xe0, 0x13, 0xec, 0xcd, 0xcc, 0x93, 0x33, 0x8d, 0x59, 0x9b, 0x0e,
  0x1c, 0x11, 0x17, 0xe0, 0x05, 0x6c, 0xc2, 0xc5, 0x38, 0x89, 0x83, 0xf8,
  0x05, 0x47, 0x31, 0x8e, 0xd5, 0xb8, 0x02, 0xd7, 0xe1, 0x5c, 0x8c, 0xe1,
  0x0d, 0xec, 0xc8, 0xcc, 0xbf, 0xe7, 0x0c, 0x8e, 0x88, 0xf5, 0xd5, 0x00,
  0x3d, 0xf8, 0x12, 0xef, 0xe1, 0xf3, 0xcc, 0xfc, 0x6b, 0x0a, 0xff, 0x0b,
  0xb1, 0x0e, 0x4f, 0xe0, 0x4e, 0x65, 0x16, 0x36, 0x65, 0xe6, 0xd0, 0xac,
  0xc0, 0x11, 0x51, 0xc7, 0x36, 0xbc, 0x84, 0x43, 0x55, 0xf0, 0x57, 0x53,
  0x65, 0x3e, 0x45, 0x12, 0xb7, 0x55, 0x49, 0xaf, 0xc5, 0x76, 0xbc, 0x92,
  0x99, 0xa7, 0xda, 0x7d, 0xea, 0x1d, 0x01, 0x35, 0x7c, 0x50, 0x41, 0xdf,
  0xc7, 0x8d, 0x73, 0x85, 0x42, 0x66, 0x36, 0x71, 0x33, 0xde, 0xad, 0xc6,
  0x1a, 0xaa, 0x0a, 0x3a, 0x6d, 0xe7, 0x74, 0xc4, 0x0c, 0x60, 0x3d, 0xb6,
  0x66, 0xe6, 0x6b, 0x73, 0x05, 0x76, 0xc0, 0x4f, 0x60, 0x63, 0x44, 0xfc,
  0x84, 0xad, 0x18, 0xc4, 0xcb, 0xad, 0xef, 0xa7, 0xb3, 0x88, 0x88, 0x07,
  0xf1, 0x2a, 0x76, 0x2f, 0x14, 0xda, 0x91, 0xc0, 0xa0, 0x52, 0xf9, 0x96,
  0x8a, 0x81, 0xaa, 0xe2, 0x88, 0xe8, 0xc6, 0xeb, 0xca, 0x9a, 0x3e, 0xd9,
  0x19, 0x1c, 0x11, 0x57, 0x29, 0x7f, 0xf5, 0x6c, 0x6c, 0x2c, 0x33, 0xbf,
  0xef, 0x78, 0xf7, 0xb4, 0xb2, 0x0d, 0xdf, 0x8c, 0x88, 0x2f, 0x32, 0xf3,
  0x9f, 0x56, 0xc5, 0xcf, 0x28, 0xdb, 0x62, 0x73, 0x35, 0x45, 0xed, 0xd0,
  0xcf, 0x70, 0x18, 0xdf, 0xcc, 0xf2, 0x39, 0x5c, 0xc5, 0xb4, 0x57, 0x7d,
  0x02, 0x9b, 0x71, 0x19, 0x9e, 0x83, 0xda, 0xf8, 0xf8, 0x78, 0x0d, 0x47,
  0xf0, 0x63, 0x66, 0x36, 0x3a, 0xa0, 0xbd, 0x18, 0x99, 0x65, 0xa5, 0x9d,
  0x76, 0x6d, 0x66, 0x1e, 0xea, 0x18, 0x6f, 0x2f, 0xae, 0xc6, 0xca, 0x3a,
  0x6e, 0xaa, 0x32, 0xd9, 0x35, 0x49, 0xf0, 0x25, 0xf3, 0x84, 0x4e, 0x15,
  0xbb, 0x0b, 0xcb, 0x71, 0x4b, 0x5d, 0x39, 0x06, 0xff, 0xc3, 0x9e, 0x05,
  0x40, 0x66, 0x6b, 0x7b, 0x2a, 0xd6, 0x3d, 0x75, 0xe5, 0xa8, 0x1b, 0xc9,
  0xcc, 0x3f, 0x17, 0x9b, 0x5a, 0x31, 0x46, 0xb0, 0xb6, 0xae, 0x1c, 0x89,
  0xc7, 0x16, 0x1b, 0xda, 0x66, 0xc7, 0xd0, 0xd3, 0x02, 0x8f, 0x2e, 0x21,
  0x78, 0xb4, 0x05, 0x1e, 0x5f, 0x42, 0x68, 0xcb, 0xc6, 0xeb, 0xf8, 0x5d,
  0xa9, 0x7a, 0xa9, 0xac, 0x07, 0xa3, 0x75, 0xfc, 0x86, 0x55, 0x4b, 0x08,
  0x5e, 0xd5, 0x02, 0x7f, 0x8b, 0xde, 0x88, 0x58, 0xbe, 0xd8, 0xc4, 0x8a,
  0xd1, 0x8b, 0xef, 0xea, 0x8a, 0x5c, 0xe9, 0xc2, 0xdd, 0x8b, 0x0d, 0xae,
  0x18, 0x5d, 0x18, 0x6e, 0x55, 0x7c, 0x04, 0x7d, 0x93, 0x38, 0x1e, 0x5f,
  0x00, 0x64, 0xb2, 0xd8, 0x3e, 0x45, 0xa3, 0xed, 0xef, 0xaa, 0xd5, 0x6a,
  0x1a, 0x8d, 0xc6, 0x29, 0x3c, 0xd5, 0x68, 0x34, 0x0e, 0x36, 0x9b, 0xcd,
  0x1f, 0x5a, 0x5e, 0xcd, 0x66, 0xf3, 0x78, 0xa3, 0xd1, 0xb8, 0x46, 0x39,
  0x5f, 0xe7, 0x62, 0x1f, 0x65, 0xe6, 0x5b, 0xed, 0x2f, 0x22, 0xe2, 0x2e,
  0x6c, 0xc1, 0x40, 0x66, 0xee, 0x6b, 0xdd, 0x4e, 0x6f, 0xe3, 0x67, 0x6c,
  0x8f, 0x88, 0xf3, 0xdb, 0x03, 0x32, 0xf3, 0x21, 0xac, 0x51, 0x64, 0xcc,
  0x6c, 0x9e, 0x35, 0x55, 0x4c, 0x3b, 0xb4, 0x5b, 0x91, 0x40, 0xbf, 0x62,
  0x27, 0x6d, 0x9a, 0x2b, 0x22, 0xee, 0x55, 0xd6, 0xfb, 0x43, 0x6c, 0xc8,
  0xcc, 0xb3, 0xb6, 0xbf, 0x23, 0x62, 0x37, 0x1e, 0xc5, 0xfd, 0x99, 0xf9,
  0x29, 0x6d, 0x0a, 0x24, 0x33, 0x87, 0x91, 0x78, 0xb8, 0xca, 0xee, 0x6c,
  0x41, 0x07, 0xf0, 0x18, 0xb6, 0xb5, 0xa0, 0x4c, 0xae, 0xb9, 0xae, 0xc4,
  0x8b, 0x11, 0xb1, 0x1a, 0x7d, 0x99, 0xf9, 0xef, 0x3c, 0x81, 0xe7, 0xe1,
  0x1d, 0x45, 0xee, 0x0e, 0x61, 0x82, 0x9c, 0x9a, 0xa0, 0xfc, 0xaa, 0xe9,
  0x7d, 0x5c, 0x11, 0x66, 0x1b, 0x70, 0x20, 0x22, 0xd6, 0xcd, 0x03, 0x7a,
  0x07, 0xf6, 0x57, 0xd0, 0x41, 0x3c, 0xd2, 0xb9, 0x74, 0xd3, 0x09, 0xfa,
  0x07, 0x14, 0x1d, 0x76, 0x39, 0xbe, 0x56, 0x04, 0xdb, 0x70, 0x66, 0x8e,
  0x4d, 0xe1, 0x7f, 0x91, 0x22, 0xe4, 0x37, 0xe2, 0x76, 0xe5, 0x47, 0x7a,
  0x3e, 0x33, 0x3f, 0x9e, 0xcc, 0x7f, 0xa6, 0x16, 0xa6, 0x1b, 0xcf, 0x2a,
  0x6d, 0xcc, 0x0a, 0x67, 0x5a, 0x98, 0xa3, 0xce, 0xdc, 0x68, 0x3d, 0xca,
  0x31, 0x78, 0x3d, 0x96, 0x29, 0xfb, 0x74, 0x07, 0x76, 0x4e, 0xb7, 0x4c,
  0xd3, 0x82, 0xdb, 0x12, 0xa8, 0xe3, 0x56, 0x13, 0x9b, 0xb6, 0x95, 0xa8,
  0x55, 0x09, 0xb4, 0x37, 0x6d, 0xfb, 0x3a, 0xbb, 0x86, 0xc9, 0xec, 0x7f,
  0x6b, 0x77, 0x18, 0xd5, 0x6e, 0xc6, 0x08, 0xaa, 0x00, 0x00, 0x00, 0x00,
  0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};
