/****************************************************************************
 * libs/libnx/nxfonts/nxfonts_serif20x27b.h
 *
 *   Copyright (C) 2011-2012 NX Engineering, S.A., All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT}
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING}
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef __LIBNX_NXFONTS_NXFONTS_SANS20X27B_H
#define __LIBNX_NXFONTS_NXFONTS_SANS20X27B_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

/****************************************************************************
 * Pre-Processor Definitions
 ****************************************************************************/

/* Font ID */

#define NXFONT_ID         FONTID_SANS20X27B

/* Ranges of 7-bit and 8-bit fonts */

#define NXFONT_MIN7BIT    33
#define NXFONT_MAX7BIT    126

#define NXFONT_MIN8BIT    161
#define NXFONT_MAX8BIT    255

/* Maximum height and width of any glyph in the set */

#define NXFONT_MAXHEIGHT  27
#define NXFONT_MAXWIDTH   20

/* The width of a space */

#define NXFONT_SPACEWIDTH 5

/* exclam (33) */
#define NXFONT_METRICS_33 {1, 2, 12, 2, 8, 0}
#define NXFONT_BITMAP_33 {0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x0, 0xc0, 0xc0}

/* quotedbl (34) */
#define NXFONT_METRICS_34 {1, 5, 4, 1, 8, 0}
#define NXFONT_BITMAP_34 {0xd8, 0xd8, 0xd8, 0x48}

/* numbersign (35) */
#define NXFONT_METRICS_35 {2, 9, 12, 0, 8, 0}
#define NXFONT_BITMAP_35 {0x1b, 0x0, 0x1b, 0x0, 0x1b, 0x0, 0x7f, 0x80, 0x7f, 0x80, 0x36, 0x0, 0x36, 0x0, 0xff, 0x0, 0xff, 0x0, 0x6c, 0x0, 0x6c, 0x0, 0x6c, 0x0}

/* dollar (36) */
#define NXFONT_METRICS_36 {1, 7, 14, 1, 7, 0}
#define NXFONT_BITMAP_36 {0x10, 0x7c, 0xfe, 0xd6, 0xd0, 0xf0, 0x78, 0x3c, 0x1e, 0x16, 0xd6, 0xfe, 0x7c, 0x10}

/* percent (37) */
#define NXFONT_METRICS_37 {2, 13, 12, 0, 8, 0}
#define NXFONT_BITMAP_37 {0x30, 0x40, 0x78, 0x80, 0xcc, 0x80, 0xcd, 0x0, 0x79, 0x0, 0x32, 0x0, 0x2, 0x60, 0x4, 0xf0, 0x5, 0x98, 0x9, 0x98, 0x8, 0xf0, 0x10, 0x60}

/* ampersand (38) */
#define NXFONT_METRICS_38 {2, 10, 12, 1, 8, 0}
#define NXFONT_BITMAP_38 {0x3c, 0x0, 0x7e, 0x0, 0x66, 0x0, 0x66, 0x0, 0x3c, 0x0, 0x38, 0xc0, 0x7d, 0xc0, 0xcf, 0x80, 0xc7, 0x0, 0xc7, 0x0, 0x7f, 0x80, 0x39, 0xc0}

/* quotesingle (39) */
#define NXFONT_METRICS_39 {1, 2, 4, 1, 8, 0}
#define NXFONT_BITMAP_39 {0xc0, 0xc0, 0xc0, 0x40}

/* parenleft (40) */
#define NXFONT_METRICS_40 {1, 4, 15, 1, 8, 0}
#define NXFONT_BITMAP_40 {0x30, 0x70, 0x60, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x60, 0x70, 0x30}

/* parenright (41) */
#define NXFONT_METRICS_41 {1, 4, 15, 0, 8, 0}
#define NXFONT_BITMAP_41 {0xc0, 0xe0, 0x60, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x60, 0xe0, 0xc0}

/* asterisk (42) */
#define NXFONT_METRICS_42 {1, 5, 5, 0, 8, 0}
#define NXFONT_BITMAP_42 {0x20, 0xa8, 0x70, 0x70, 0x88}

/* plus (43) */
#define NXFONT_METRICS_43 {1, 8, 8, 1, 12, 0}
#define NXFONT_BITMAP_43 {0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18}

/* comma (44) */
#define NXFONT_METRICS_44 {1, 2, 5, 1, 18, 0}
#define NXFONT_BITMAP_44 {0xc0, 0xc0, 0x40, 0x40, 0x80}

/* hyphen (45) */
#define NXFONT_METRICS_45 {1, 4, 2, 0, 15, 0}
#define NXFONT_BITMAP_45 {0xf0, 0xf0}

/* period (46) */
#define NXFONT_METRICS_46 {1, 2, 2, 1, 18, 0}
#define NXFONT_BITMAP_46 {0xc0, 0xc0}

/* slash (47) */
#define NXFONT_METRICS_47 {1, 4, 12, 0, 8, 0}
#define NXFONT_BITMAP_47 {0x10, 0x10, 0x30, 0x20, 0x20, 0x60, 0x40, 0x40, 0xc0, 0x80, 0x80, 0x80}

/* zero (48) */
#define NXFONT_METRICS_48 {1, 8, 12, 0, 8, 0}
#define NXFONT_BITMAP_48 {0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c}

/* one (49) */
#define NXFONT_METRICS_49 {1, 5, 12, 1, 8, 0}
#define NXFONT_BITMAP_49 {0x8, 0x18, 0xf8, 0xf8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18}

/* two (50) */
#define NXFONT_METRICS_50 {1, 8, 12, 0, 8, 0}
#define NXFONT_BITMAP_50 {0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0x7, 0xe, 0x1c, 0x38, 0x70, 0xff, 0xff}

/* three (51) */
#define NXFONT_METRICS_51 {1, 8, 12, 0, 8, 0}
#define NXFONT_BITMAP_51 {0x3c, 0x7e, 0xe7, 0xc3, 0x7, 0x1e, 0x1e, 0x7, 0xc3, 0xe7, 0x7e, 0x3c}

/* four (52) */
#define NXFONT_METRICS_52 {1, 8, 12, 0, 8, 0}
#define NXFONT_BITMAP_52 {0xe, 0x1e, 0x36, 0x36, 0x66, 0x66, 0xc6, 0xff, 0xff, 0x6, 0x6, 0x6}

/* five (53) */
#define NXFONT_METRICS_53 {1, 8, 12, 0, 8, 0}
#define NXFONT_BITMAP_53 {0x3f, 0x3f, 0x30, 0x30, 0x7c, 0x7e, 0x47, 0x3, 0x3, 0xe7, 0x7e, 0x3c}

/* six (54) */
#define NXFONT_METRICS_54 {1, 8, 12, 0, 8, 0}
#define NXFONT_BITMAP_54 {0x3c, 0x7e, 0xe7, 0xc0, 0xdc, 0xfe, 0xe7, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c}

/* seven (55) */
#define NXFONT_METRICS_55 {1, 8, 12, 0, 8, 0}
#define NXFONT_BITMAP_55 {0xff, 0xff, 0x6, 0x6, 0xc, 0xc, 0x18, 0x18, 0x18, 0x30, 0x30, 0x30}

/* eight (56) */
#define NXFONT_METRICS_56 {1, 8, 12, 0, 8, 0}
#define NXFONT_BITMAP_56 {0x3c, 0x7e, 0xe7, 0xc3, 0x66, 0x3c, 0x7e, 0xe7, 0xc3, 0xe7, 0x7e, 0x3c}

/* nine (57) */
#define NXFONT_METRICS_57 {1, 8, 12, 0, 8, 0}
#define NXFONT_BITMAP_57 {0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xe7, 0x7f, 0x3b, 0x3, 0xe7, 0x7e, 0x3c}

/* colon (58) */
#define NXFONT_METRICS_58 {1, 2, 8, 2, 12, 0}
#define NXFONT_BITMAP_58 {0xc0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0xc0, 0xc0}

/* semicolon (59) */
#define NXFONT_METRICS_59 {1, 2, 11, 2, 12, 0}
#define NXFONT_BITMAP_59 {0xc0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0xc0, 0xc0, 0x40, 0x40, 0x80}

/* less (60) */
#define NXFONT_METRICS_60 {1, 8, 8, 1, 12, 0}
#define NXFONT_BITMAP_60 {0x3, 0xf, 0x3c, 0xe0, 0xe0, 0x3c, 0xf, 0x3}

/* equal (61) */
#define NXFONT_METRICS_61 {1, 8, 6, 1, 13, 0}
#define NXFONT_BITMAP_61 {0xff, 0xff, 0x0, 0x0, 0xff, 0xff}

/* greater (62) */
#define NXFONT_METRICS_62 {1, 8, 8, 1, 12, 0}
#define NXFONT_BITMAP_62 {0xc0, 0xf0, 0x3c, 0x7, 0x7, 0x3c, 0xf0, 0xc0}

/* question (63) */
#define NXFONT_METRICS_63 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_63 {0x7c, 0xfe, 0xc6, 0xc6, 0x6, 0xe, 0xc, 0x18, 0x18, 0x0, 0x18, 0x18}

/* at (64) */
#define NXFONT_METRICS_64 {2, 13, 14, 1, 8, 0}
#define NXFONT_BITMAP_64 {0xf, 0xc0, 0x38, 0x60, 0x60, 0x10, 0x47, 0xd8, 0xcc, 0x48, 0x88, 0xc8, 0x98, 0xc8, 0x98, 0x88, 0x99, 0x98, 0xc9, 0x90, 0x46, 0x60, 0x60, 0x0, 0x38, 0xc0, 0xf, 0x80}

/* A (65) */
#define NXFONT_METRICS_65 {2, 11, 12, 0, 8, 0}
#define NXFONT_BITMAP_65 {0xe, 0x0, 0xe, 0x0, 0x1f, 0x0, 0x1b, 0x0, 0x3b, 0x80, 0x31, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0x7f, 0xc0, 0xff, 0xe0, 0xc0, 0x60, 0xc0, 0x60}

/* B (66) */
#define NXFONT_METRICS_66 {2, 9, 12, 1, 8, 0}
#define NXFONT_BITMAP_66 {0xfe, 0x0, 0xff, 0x0, 0xc3, 0x80, 0xc1, 0x80, 0xc3, 0x80, 0xff, 0x0, 0xff, 0x0, 0xc3, 0x80, 0xc1, 0x80, 0xc3, 0x80, 0xff, 0x0, 0xfe, 0x0}

/* C (67) */
#define NXFONT_METRICS_67 {2, 10, 12, 1, 8, 0}
#define NXFONT_BITMAP_67 {0x1f, 0x0, 0x3f, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0xe0, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0xe0, 0x0, 0x60, 0xc0, 0x71, 0xc0, 0x3f, 0x80, 0x1f, 0x0}

/* D (68) */
#define NXFONT_METRICS_68 {2, 10, 12, 1, 8, 0}
#define NXFONT_BITMAP_68 {0xfc, 0x0, 0xff, 0x0, 0xc3, 0x80, 0xc1, 0x80, 0xc1, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc1, 0xc0, 0xc1, 0x80, 0xc3, 0x80, 0xff, 0x0, 0xfc, 0x0}

/* E (69) */
#define NXFONT_METRICS_69 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_69 {0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0, 0xc0, 0xc0, 0xff, 0xff}

/* F (70) */
#define NXFONT_METRICS_70 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_70 {0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* G (71) */
#define NXFONT_METRICS_71 {2, 10, 12, 1, 8, 0}
#define NXFONT_BITMAP_71 {0x1f, 0x0, 0x3f, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0xe0, 0x0, 0xc0, 0x0, 0xc3, 0xc0, 0xe3, 0xc0, 0x60, 0xc0, 0x71, 0xc0, 0x3f, 0xc0, 0x1e, 0xc0}

/* H (72) */
#define NXFONT_METRICS_72 {2, 10, 12, 1, 8, 0}
#define NXFONT_BITMAP_72 {0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* I (73) */
#define NXFONT_METRICS_73 {1, 2, 12, 1, 8, 0}
#define NXFONT_BITMAP_73 {0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* J (74) */
#define NXFONT_METRICS_74 {1, 7, 12, 1, 8, 0}
#define NXFONT_BITMAP_74 {0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0xc6, 0xc6, 0xfe, 0x7c}

/* K (75) */
#define NXFONT_METRICS_75 {2, 11, 12, 1, 8, 0}
#define NXFONT_BITMAP_75 {0xc1, 0xc0, 0xc3, 0x80, 0xc7, 0x0, 0xce, 0x0, 0xdc, 0x0, 0xf8, 0x0, 0xfc, 0x0, 0xce, 0x0, 0xc7, 0x0, 0xc3, 0x80, 0xc1, 0xc0, 0xc0, 0xe0}

/* L (76) */
#define NXFONT_METRICS_76 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_76 {0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xff}

/* M (77) */
#define NXFONT_METRICS_77 {2, 11, 12, 1, 8, 0}
#define NXFONT_BITMAP_77 {0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xf1, 0xe0, 0xf1, 0xe0, 0xd1, 0x60, 0xdb, 0x60, 0xdb, 0x60, 0xca, 0x60, 0xce, 0x60, 0xce, 0x60, 0xc4, 0x60}

/* N (78) */
#define NXFONT_METRICS_78 {2, 10, 12, 1, 8, 0}
#define NXFONT_BITMAP_78 {0xe0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xd8, 0xc0, 0xd8, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xc6, 0xc0, 0xc6, 0xc0, 0xc3, 0xc0, 0xc3, 0xc0, 0xc1, 0xc0}

/* O (79) */
#define NXFONT_METRICS_79 {2, 11, 12, 1, 8, 0}
#define NXFONT_BITMAP_79 {0x1f, 0x0, 0x3f, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0xe0, 0xe0, 0xc0, 0x60, 0xc0, 0x60, 0xe0, 0xe0, 0x60, 0xc0, 0x71, 0xc0, 0x3f, 0x80, 0x1f, 0x0}

/* P (80) */
#define NXFONT_METRICS_80 {2, 9, 12, 1, 8, 0}
#define NXFONT_BITMAP_80 {0xfe, 0x0, 0xff, 0x0, 0xc3, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc3, 0x80, 0xff, 0x0, 0xfe, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0xc0, 0x0}

/* Q (81) */
#define NXFONT_METRICS_81 {2, 11, 13, 1, 8, 0}
#define NXFONT_BITMAP_81 {0x1f, 0x0, 0x3f, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0xe0, 0xe0, 0xc0, 0x60, 0xc0, 0x60, 0xe2, 0x60, 0x67, 0xc0, 0x73, 0xc0, 0x3f, 0x80, 0x1f, 0xc0, 0x0, 0x80}

/* R (82) */
#define NXFONT_METRICS_82 {2, 10, 12, 1, 8, 0}
#define NXFONT_BITMAP_82 {0xff, 0x0, 0xff, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc3, 0x80, 0xff, 0x0, 0xff, 0x0, 0xc3, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc1, 0xc0, 0xc1, 0xc0}

/* S (83) */
#define NXFONT_METRICS_83 {2, 9, 12, 1, 8, 0}
#define NXFONT_BITMAP_83 {0x3e, 0x0, 0x7f, 0x0, 0xe3, 0x80, 0xc1, 0x80, 0xf0, 0x0, 0x7e, 0x0, 0x1f, 0x0, 0x3, 0x80, 0xc1, 0x80, 0xe3, 0x80, 0x7f, 0x0, 0x3e, 0x0}

/* T (84) */
#define NXFONT_METRICS_84 {2, 10, 12, 0, 8, 0}
#define NXFONT_BITMAP_84 {0xff, 0xc0, 0xff, 0xc0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0}

/* U (85) */
#define NXFONT_METRICS_85 {2, 10, 12, 1, 8, 0}
#define NXFONT_BITMAP_85 {0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe1, 0xc0, 0x7f, 0x80, 0x3f, 0x0}

/* V (86) */
#define NXFONT_METRICS_86 {2, 10, 12, 0, 8, 0}
#define NXFONT_BITMAP_86 {0xc0, 0xc0, 0xc0, 0xc0, 0x61, 0x80, 0x61, 0x80, 0x61, 0x80, 0x33, 0x0, 0x33, 0x0, 0x33, 0x0, 0x1e, 0x0, 0x1e, 0x0, 0xc, 0x0, 0xc, 0x0}

/* W (87) */
#define NXFONT_METRICS_87 {2, 14, 12, 0, 8, 0}
#define NXFONT_BITMAP_87 {0xc3, 0xc, 0xc3, 0xc, 0xc3, 0xc, 0x63, 0x18, 0x67, 0x98, 0x67, 0x98, 0x34, 0xb0, 0x3c, 0xf0, 0x3c, 0xf0, 0x18, 0x60, 0x18, 0x60, 0x18, 0x60}

/* X (88) */
#define NXFONT_METRICS_88 {2, 9, 12, 1, 8, 0}
#define NXFONT_BITMAP_88 {0xc1, 0x80, 0xe3, 0x80, 0x63, 0x0, 0x36, 0x0, 0x3e, 0x0, 0x1c, 0x0, 0x1c, 0x0, 0x3e, 0x0, 0x36, 0x0, 0x63, 0x0, 0xe3, 0x80, 0xc1, 0x80}

/* Y (89) */
#define NXFONT_METRICS_89 {2, 10, 12, 0, 8, 0}
#define NXFONT_BITMAP_89 {0xc0, 0xc0, 0xe1, 0xc0, 0x61, 0x80, 0x33, 0x0, 0x33, 0x0, 0x1e, 0x0, 0x1e, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0}

/* Z (90) */
#define NXFONT_METRICS_90 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_90 {0xff, 0xff, 0x7, 0x6, 0xc, 0x1c, 0x38, 0x30, 0x60, 0xe0, 0xff, 0xff}

/* bracketleft (91) */
#define NXFONT_METRICS_91 {1, 4, 15, 1, 8, 0}
#define NXFONT_BITMAP_91 {0xf0, 0xf0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xf0, 0xf0}

/* backslash (92) */
#define NXFONT_METRICS_92 {1, 4, 12, 0, 8, 0}
#define NXFONT_BITMAP_92 {0x80, 0x80, 0xc0, 0x40, 0x40, 0x60, 0x20, 0x20, 0x30, 0x10, 0x10, 0x10}

/* bracketright (93) */
#define NXFONT_METRICS_93 {1, 4, 15, 0, 8, 0}
#define NXFONT_BITMAP_93 {0xf0, 0xf0, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0xf0, 0xf0}

/* asciicircum (94) */
#define NXFONT_METRICS_94 {1, 8, 7, 1, 8, 0}
#define NXFONT_BITMAP_94 {0x18, 0x18, 0x3c, 0x66, 0x66, 0xc3, 0xc3}

/* underscore (95) */
#define NXFONT_METRICS_95 {2, 9, 1, 0, 22, 0}
#define NXFONT_BITMAP_95 {0xff, 0x80}

/* grave (96) */
#define NXFONT_METRICS_96 {1, 3, 3, 2, 7, 0}
#define NXFONT_BITMAP_96 {0x80, 0xc0, 0x20}

/* a (97) */
#define NXFONT_METRICS_97 {1, 8, 9, 1, 11, 0}
#define NXFONT_BITMAP_97 {0x7c, 0xfe, 0xc6, 0xe, 0x7e, 0xe6, 0xc6, 0xfe, 0x77}

/* b (98) */
#define NXFONT_METRICS_98 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_98 {0xc0, 0xc0, 0xc0, 0xdc, 0xfe, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0xfe, 0xdc}

/* c (99) */
#define NXFONT_METRICS_99 {1, 8, 9, 1, 11, 0}
#define NXFONT_BITMAP_99 {0x3c, 0x7e, 0xe7, 0xc0, 0xc0, 0xc0, 0xe7, 0x7e, 0x3c}

/* d (100) */
#define NXFONT_METRICS_100 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_100 {0x3, 0x3, 0x3, 0x3f, 0x7f, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7f, 0x3b}

/* e (101) */
#define NXFONT_METRICS_101 {1, 8, 9, 1, 11, 0}
#define NXFONT_BITMAP_101 {0x3c, 0x7e, 0xc3, 0xff, 0xff, 0xc0, 0xe7, 0x7e, 0x3c}

/* f (102) */
#define NXFONT_METRICS_102 {1, 4, 12, 1, 8, 0}
#define NXFONT_BITMAP_102 {0x30, 0x70, 0x60, 0xf0, 0xf0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60}

/* g (103) */
#define NXFONT_METRICS_103 {1, 8, 13, 1, 11, 0}
#define NXFONT_BITMAP_103 {0x3b, 0x7f, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7f, 0x3b, 0x3, 0xe7, 0x7e, 0x3c}

/* h (104) */
#define NXFONT_METRICS_104 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_104 {0xc0, 0xc0, 0xc0, 0xde, 0xff, 0xe3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3}

/* i (105) */
#define NXFONT_METRICS_105 {1, 2, 12, 1, 8, 0}
#define NXFONT_BITMAP_105 {0xc0, 0xc0, 0x0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* j (106) */
#define NXFONT_METRICS_106 {1, 3, 16, 1, 8, 0}
#define NXFONT_BITMAP_106 {0x60, 0x60, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0xe0, 0xc0}

/* k (107) */
#define NXFONT_METRICS_107 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_107 {0xc0, 0xc0, 0xc0, 0xc7, 0xce, 0xdc, 0xf8, 0xfc, 0xec, 0xce, 0xc6, 0xc7}

/* l (108) */
#define NXFONT_METRICS_108 {1, 2, 12, 1, 8, 0}
#define NXFONT_BITMAP_108 {0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* m (109) */
#define NXFONT_METRICS_109 {2, 12, 9, 1, 11, 0}
#define NXFONT_BITMAP_109 {0xde, 0xe0, 0xff, 0xf0, 0xe7, 0x30, 0xc6, 0x30, 0xc6, 0x30, 0xc6, 0x30, 0xc6, 0x30, 0xc6, 0x30, 0xc6, 0x30}

/* n (110) */
#define NXFONT_METRICS_110 {1, 8, 9, 1, 11, 0}
#define NXFONT_BITMAP_110 {0xde, 0xff, 0xe3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3}

/* o (111) */
#define NXFONT_METRICS_111 {1, 8, 9, 1, 11, 0}
#define NXFONT_BITMAP_111 {0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c}

/* p (112) */
#define NXFONT_METRICS_112 {1, 8, 13, 1, 11, 0}
#define NXFONT_BITMAP_112 {0xdc, 0xfe, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0xfe, 0xdc, 0xc0, 0xc0, 0xc0, 0xc0}

/* q (113) */
#define NXFONT_METRICS_113 {1, 8, 13, 1, 11, 0}
#define NXFONT_BITMAP_113 {0x3b, 0x7f, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7f, 0x3b, 0x3, 0x3, 0x3, 0x3}

/* r (114) */
#define NXFONT_METRICS_114 {1, 5, 9, 1, 11, 0}
#define NXFONT_BITMAP_114 {0xd8, 0xf8, 0xe0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* s (115) */
#define NXFONT_METRICS_115 {1, 7, 9, 1, 11, 0}
#define NXFONT_BITMAP_115 {0x7c, 0xfe, 0xc6, 0xf0, 0x7c, 0xe, 0xc6, 0xfe, 0x7c}

/* t (116) */
#define NXFONT_METRICS_116 {1, 4, 11, 1, 9, 0}
#define NXFONT_BITMAP_116 {0x60, 0x60, 0xf0, 0xf0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x70, 0x30}

/* u (117) */
#define NXFONT_METRICS_117 {1, 8, 9, 1, 11, 0}
#define NXFONT_BITMAP_117 {0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc7, 0xff, 0x7b}

/* v (118) */
#define NXFONT_METRICS_118 {1, 8, 9, 0, 11, 0}
#define NXFONT_BITMAP_118 {0xc3, 0xc3, 0x66, 0x66, 0x66, 0x3c, 0x3c, 0x18, 0x18}

/* w (119) */
#define NXFONT_METRICS_119 {2, 12, 9, 0, 11, 0}
#define NXFONT_BITMAP_119 {0xc6, 0x30, 0xc6, 0x30, 0x66, 0x60, 0x66, 0x60, 0x6f, 0x60, 0x3f, 0xc0, 0x39, 0xc0, 0x19, 0x80, 0x19, 0x80}

/* x (120) */
#define NXFONT_METRICS_120 {1, 7, 9, 1, 11, 0}
#define NXFONT_BITMAP_120 {0xc6, 0xc6, 0x6c, 0x7c, 0x38, 0x7c, 0x6c, 0xc6, 0xc6}

/* y (121) */
#define NXFONT_METRICS_121 {1, 8, 13, 0, 11, 0}
#define NXFONT_BITMAP_121 {0xc3, 0xc3, 0x63, 0x66, 0x36, 0x36, 0x3c, 0x1c, 0x18, 0x18, 0x18, 0x70, 0x60}

/* z (122) */
#define NXFONT_METRICS_122 {1, 7, 9, 0, 11, 0}
#define NXFONT_BITMAP_122 {0xfe, 0xfe, 0xe, 0x1c, 0x18, 0x38, 0x70, 0xfe, 0xfe}

/* braceleft (123) */
#define NXFONT_METRICS_123 {1, 4, 15, 1, 8, 0}
#define NXFONT_BITMAP_123 {0x30, 0x70, 0x60, 0x60, 0x60, 0x60, 0x60, 0xc0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x70, 0x30}

/* bar (124) */
#define NXFONT_METRICS_124 {1, 1, 16, 1, 8, 0}
#define NXFONT_BITMAP_124 {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* braceright (125) */
#define NXFONT_METRICS_125 {1, 4, 15, 1, 8, 0}
#define NXFONT_BITMAP_125 {0xc0, 0xe0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x30, 0x60, 0x60, 0x60, 0x60, 0x60, 0xe0, 0xc0}

/* asciitilde (126) */
#define NXFONT_METRICS_126 {1, 8, 3, 1, 14, 0}
#define NXFONT_BITMAP_126 {0x71, 0x99, 0x8e}

/* exclamdown (161) */
#define NXFONT_METRICS_161 {1, 2, 12, 1, 11, 0}
#define NXFONT_BITMAP_161 {0xc0, 0xc0, 0x0, 0x40, 0x40, 0x40, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* cent (162) */
#define NXFONT_METRICS_162 {1, 8, 11, 0, 10, 0}
#define NXFONT_BITMAP_162 {0x4, 0x3c, 0x7e, 0xef, 0xc8, 0xd8, 0xd0, 0xf7, 0x7e, 0x3c, 0x20}

/* sterling (163) */
#define NXFONT_METRICS_163 {1, 8, 12, 0, 8, 0}
#define NXFONT_BITMAP_163 {0x1c, 0x3e, 0x63, 0x63, 0x60, 0x30, 0x7c, 0x30, 0x30, 0x20, 0x7f, 0xff}

/* currency (164) */
#define NXFONT_METRICS_164 {1, 7, 7, 1, 11, 0}
#define NXFONT_BITMAP_164 {0xba, 0x7c, 0xc6, 0xc6, 0xc6, 0x7c, 0xba}

/* yen (165) */
#define NXFONT_METRICS_165 {1, 8, 12, 0, 8, 0}
#define NXFONT_BITMAP_165 {0xc3, 0xc3, 0x66, 0x66, 0x3c, 0x18, 0x7e, 0x18, 0x7e, 0x18, 0x18, 0x18}

/* brokenbar (166) */
#define NXFONT_METRICS_166 {1, 1, 16, 2, 8, 0}
#define NXFONT_BITMAP_166 {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x0, 0x0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80}

/* section (167) */
#define NXFONT_METRICS_167 {1, 8, 15, 0, 8, 0}
#define NXFONT_BITMAP_167 {0x3c, 0x7e, 0x66, 0x60, 0x78, 0x7e, 0xc7, 0xc3, 0xf3, 0x7e, 0x1e, 0x6, 0x66, 0x7e, 0x3c}

/* dieresis (168) */
#define NXFONT_METRICS_168 {1, 5, 2, 0, 8, 0}
#define NXFONT_BITMAP_168 {0xd8, 0xd8}

/* copyright (169) */
#define NXFONT_METRICS_169 {2, 12, 12, 0, 8, 0}
#define NXFONT_BITMAP_169 {0xf, 0x0, 0x39, 0xc0, 0x60, 0x60, 0x4f, 0x20, 0xd9, 0xb0, 0x90, 0x10, 0x90, 0x10, 0xd9, 0xb0, 0x4f, 0x20, 0x60, 0x20, 0x39, 0xc0, 0xf, 0x0}

/* ordfeminine (170) */
#define NXFONT_METRICS_170 {1, 5, 7, 1, 8, 0}
#define NXFONT_BITMAP_170 {0x60, 0x90, 0x70, 0x90, 0x78, 0x0, 0xf8}

/* guillemotleft (171) */
#define NXFONT_METRICS_171 {1, 8, 6, 0, 12, 0}
#define NXFONT_BITMAP_171 {0x33, 0x66, 0xcc, 0xcc, 0x66, 0x33}

/* logicalnot (172) */
#define NXFONT_METRICS_172 {1, 8, 5, 0, 13, 0}
#define NXFONT_BITMAP_172 {0xff, 0xff, 0x3, 0x3, 0x3}

/* hyphen (173) */
#define NXFONT_METRICS_173 {1, 4, 2, 0, 15, 0}
#define NXFONT_BITMAP_173 {0xf0, 0xf0}

/* registered (174) */
#define NXFONT_METRICS_174 {2, 12, 12, 0, 8, 0}
#define NXFONT_BITMAP_174 {0xf, 0x0, 0x39, 0xc0, 0x60, 0x60, 0x5f, 0x20, 0xd9, 0xb0, 0x99, 0x90, 0x9e, 0x10, 0xdb, 0x30, 0x5b, 0x20, 0x60, 0x60, 0x39, 0xc0, 0xf, 0x0}

/* macron (175) */
#define NXFONT_METRICS_175 {1, 5, 1, 0, 9, 0}
#define NXFONT_BITMAP_175 {0xf8}

/* degree (176) */
#define NXFONT_METRICS_176 {1, 4, 5, 1, 8, 0}
#define NXFONT_BITMAP_176 {0x60, 0x90, 0x90, 0x90, 0x60}

/* plusminus (177) */
#define NXFONT_METRICS_177 {1, 8, 11, 1, 9, 0}
#define NXFONT_BITMAP_177 {0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18, 0x0, 0xff, 0xff}

/* twosuperior (178) */
#define NXFONT_METRICS_178 {1, 5, 7, 0, 8, 0}
#define NXFONT_BITMAP_178 {0x70, 0xd8, 0xd8, 0x30, 0x60, 0xf8, 0xf8}

/* threesuperior (179) */
#define NXFONT_METRICS_179 {1, 5, 7, 0, 8, 0}
#define NXFONT_BITMAP_179 {0x70, 0xd8, 0x18, 0x30, 0x18, 0xd8, 0x70}

/* acute (180) */
#define NXFONT_METRICS_180 {1, 3, 3, 1, 7, 0}
#define NXFONT_BITMAP_180 {0x20, 0x60, 0x80}

/* mu (181) */
#define NXFONT_METRICS_181 {1, 8, 12, 1, 11, 0}
#define NXFONT_BITMAP_181 {0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc7, 0xff, 0xfb, 0xc0, 0xc0, 0xc0}

/* paragraph (182) */
#define NXFONT_METRICS_182 {1, 8, 15, 0, 8, 0}
#define NXFONT_BITMAP_182 {0x7f, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0x72, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12}

/* periodcentered (183) */
#define NXFONT_METRICS_183 {1, 2, 2, 1, 14, 0}
#define NXFONT_BITMAP_183 {0xc0, 0xc0}

/* cedilla (184) */
#define NXFONT_METRICS_184 {1, 5, 4, 0, 20, 0}
#define NXFONT_BITMAP_184 {0x20, 0x30, 0x98, 0x70}

/* onesuperior (185) */
#define NXFONT_METRICS_185 {1, 4, 7, 1, 8, 0}
#define NXFONT_BITMAP_185 {0x30, 0xf0, 0xf0, 0x30, 0x30, 0x30, 0x30}

/* ordmasculine (186) */
#define NXFONT_METRICS_186 {1, 5, 7, 0, 8, 0}
#define NXFONT_BITMAP_186 {0x70, 0xd8, 0x88, 0xd8, 0x70, 0x0, 0xf8}

/* guillemotright (187) */
#define NXFONT_METRICS_187 {1, 8, 6, 1, 12, 0}
#define NXFONT_BITMAP_187 {0xcc, 0x66, 0x33, 0x33, 0x66, 0xcc}

/* onequarter (188) */
#define NXFONT_METRICS_188 {2, 13, 12, 1, 8, 0}
#define NXFONT_BITMAP_188 {0x30, 0xc0, 0xf0, 0x80, 0xf1, 0x80, 0x31, 0x0, 0x33, 0x30, 0x32, 0x70, 0x36, 0xf0, 0x4, 0xb0, 0xd, 0xb0, 0x9, 0xf8, 0x18, 0x30, 0x10, 0x30}

/* onehalf (189) */
#define NXFONT_METRICS_189 {2, 12, 12, 0, 8, 0}
#define NXFONT_BITMAP_189 {0x30, 0x80, 0xf1, 0x80, 0xf1, 0x0, 0x33, 0x0, 0x32, 0x0, 0x36, 0xe0, 0x35, 0xb0, 0xd, 0xb0, 0x8, 0x60, 0x18, 0xc0, 0x11, 0xf0, 0x31, 0xf0}

/* threequarters (190) */
#define NXFONT_METRICS_190 {2, 13, 12, 0, 8, 0}
#define NXFONT_BITMAP_190 {0x70, 0x40, 0xd8, 0xc0, 0x18, 0x80, 0x31, 0x80, 0x19, 0x30, 0xdb, 0x70, 0x72, 0xf0, 0x6, 0xb0, 0x5, 0xb0, 0xd, 0xf8, 0x8, 0x30, 0x18, 0x30}

/* questiondown (191) */
#define NXFONT_METRICS_191 {1, 7, 12, 1, 11, 0}
#define NXFONT_BITMAP_191 {0x30, 0x30, 0x0, 0x30, 0x30, 0x60, 0xe0, 0xc0, 0xc6, 0xc6, 0xfe, 0x7c}

/* Agrave (192) */
#define NXFONT_METRICS_192 {2, 11, 16, 0, 4, 0}
#define NXFONT_BITMAP_192 {0x10, 0x0, 0x18, 0x0, 0x4, 0x0, 0x0, 0x0, 0xe, 0x0, 0xe, 0x0, 0x1f, 0x0, 0x1b, 0x0, 0x3b, 0x80, 0x31, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0x7f, 0xc0, 0xff, 0xe0, 0xc0, 0x60, 0xc0, 0x60}

/* Aacute (193) */
#define NXFONT_METRICS_193 {2, 11, 16, 0, 4, 0}
#define NXFONT_BITMAP_193 {0x2, 0x0, 0x6, 0x0, 0x8, 0x0, 0x0, 0x0, 0xe, 0x0, 0xe, 0x0, 0x1f, 0x0, 0x1b, 0x0, 0x3b, 0x80, 0x31, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0x7f, 0xc0, 0xff, 0xe0, 0xc0, 0x60, 0xc0, 0x60}

/* Acircumflex (194) */
#define NXFONT_METRICS_194 {2, 11, 16, 0, 4, 0}
#define NXFONT_BITMAP_194 {0x4, 0x0, 0xe, 0x0, 0x11, 0x0, 0x0, 0x0, 0xe, 0x0, 0xe, 0x0, 0x1f, 0x0, 0x1b, 0x0, 0x3b, 0x80, 0x31, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0x7f, 0xc0, 0xff, 0xe0, 0xc0, 0x60, 0xc0, 0x60}

/* Atilde (195) */
#define NXFONT_METRICS_195 {2, 11, 15, 0, 5, 0}
#define NXFONT_BITMAP_195 {0xe, 0x80, 0x17, 0x0, 0x0, 0x0, 0xe, 0x0, 0xe, 0x0, 0x1f, 0x0, 0x1b, 0x0, 0x3b, 0x80, 0x31, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0x7f, 0xc0, 0xff, 0xe0, 0xc0, 0x60, 0xc0, 0x60}

/* Adieresis (196) */
#define NXFONT_METRICS_196 {2, 11, 15, 0, 5, 0}
#define NXFONT_BITMAP_196 {0x31, 0x80, 0x31, 0x80, 0x0, 0x0, 0xe, 0x0, 0xe, 0x0, 0x1f, 0x0, 0x1b, 0x0, 0x3b, 0x80, 0x31, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0x7f, 0xc0, 0xff, 0xe0, 0xc0, 0x60, 0xc0, 0x60}

/* Aring (197) */
#define NXFONT_METRICS_197 {2, 11, 16, 0, 4, 0}
#define NXFONT_BITMAP_197 {0xc, 0x0, 0x12, 0x0, 0x12, 0x0, 0xc, 0x0, 0xe, 0x0, 0xe, 0x0, 0x1f, 0x0, 0x1b, 0x0, 0x3b, 0x80, 0x31, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0x7f, 0xc0, 0xff, 0xe0, 0xc0, 0x60, 0xc0, 0x60}

/* AE (198) */
#define NXFONT_METRICS_198 {2, 14, 12, 0, 8, 0}
#define NXFONT_BITMAP_198 {0x1f, 0xfc, 0x1f, 0xfc, 0x1b, 0x0, 0x33, 0x0, 0x33, 0x0, 0x33, 0xf8, 0x63, 0xf8, 0x7f, 0x0, 0x7f, 0x0, 0xc3, 0x0, 0xc3, 0xfc, 0xc3, 0xfc}

/* Ccedilla (199) */
#define NXFONT_METRICS_199 {2, 10, 16, 1, 8, 0}
#define NXFONT_BITMAP_199 {0x1f, 0x0, 0x3f, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0xe0, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0xe0, 0x0, 0x60, 0xc0, 0x71, 0xc0, 0x3f, 0x80, 0x1f, 0x0, 0x4, 0x0, 0x6, 0x0, 0x13, 0x0, 0xe, 0x0}

/* Egrave (200) */
#define NXFONT_METRICS_200 {1, 8, 16, 1, 4, 0}
#define NXFONT_BITMAP_200 {0x20, 0x30, 0x8, 0x0, 0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0, 0xc0, 0xc0, 0xff, 0xff}

/* Eacute (201) */
#define NXFONT_METRICS_201 {1, 8, 16, 1, 4, 0}
#define NXFONT_BITMAP_201 {0x4, 0xc, 0x10, 0x0, 0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0, 0xc0, 0xc0, 0xff, 0xff}

/* Ecircumflex (202) */
#define NXFONT_METRICS_202 {1, 8, 16, 1, 4, 0}
#define NXFONT_BITMAP_202 {0x8, 0x1c, 0x22, 0x0, 0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0, 0xc0, 0xc0, 0xff, 0xff}

/* Edieresis (203) */
#define NXFONT_METRICS_203 {1, 8, 15, 1, 5, 0}
#define NXFONT_BITMAP_203 {0x66, 0x66, 0x0, 0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0, 0xc0, 0xc0, 0xff, 0xff}

/* Igrave (204) */
#define NXFONT_METRICS_204 {1, 3, 16, 0, 4, 0}
#define NXFONT_BITMAP_204 {0x80, 0xc0, 0x20, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60}

/* Iacute (205) */
#define NXFONT_METRICS_205 {1, 3, 16, 1, 4, 0}
#define NXFONT_BITMAP_205 {0x20, 0x60, 0x80, 0x0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* Icircumflex (206) */
#define NXFONT_METRICS_206 {1, 5, 16, 0, 4, 0}
#define NXFONT_BITMAP_206 {0x20, 0x70, 0x88, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60}

/* Idieresis (207) -- NOTE: Xoffset should be -1, not 0. */
#define NXFONT_METRICS_207 {1, 6, 15, 0, 5, 0}
#define NXFONT_BITMAP_207 {0xcc, 0xcc, 0x0, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30}

/* Eth (208) */
#define NXFONT_METRICS_208 {2, 12, 12, 0, 8, 0}
#define NXFONT_BITMAP_208 {0x3f, 0x0, 0x3f, 0xc0, 0x30, 0xe0, 0x30, 0x60, 0x30, 0x70, 0xfc, 0x30, 0xfc, 0x30, 0x30, 0x70, 0x30, 0x60, 0x30, 0xe0, 0x3f, 0xc0, 0x3f, 0x0}

/* Ntilde (209) */
#define NXFONT_METRICS_209 {2, 10, 15, 1, 5, 0}
#define NXFONT_BITMAP_209 {0x1d, 0x0, 0x2e, 0x0, 0x0, 0x0, 0xe0, 0xc0, 0xf0, 0xc0, 0xf0, 0xc0, 0xd8, 0xc0, 0xd8, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xc6, 0xc0, 0xc6, 0xc0, 0xc3, 0xc0, 0xc3, 0xc0, 0xc1, 0xc0}

/* Ograve (210) */
#define NXFONT_METRICS_210 {2, 11, 16, 1, 4, 0}
#define NXFONT_BITMAP_210 {0x8, 0x0, 0xc, 0x0, 0x2, 0x0, 0x0, 0x0, 0x1f, 0x0, 0x3f, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0xe0, 0xe0, 0xc0, 0x60, 0xc0, 0x60, 0xe0, 0xe0, 0x60, 0xc0, 0x71, 0xc0, 0x3f, 0x80, 0x1f, 0x0}

/* Oacute (211) */
#define NXFONT_METRICS_211 {2, 11, 16, 1, 4, 0}
#define NXFONT_BITMAP_211 {0x1, 0x0, 0x3, 0x0, 0x4, 0x0, 0x0, 0x0, 0x1f, 0x0, 0x3f, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0xe0, 0xe0, 0xc0, 0x60, 0xc0, 0x60, 0xe0, 0xe0, 0x60, 0xc0, 0x71, 0xc0, 0x3f, 0x80, 0x1f, 0x0}

/* Ocircumflex (212) */
#define NXFONT_METRICS_212 {2, 11, 16, 1, 4, 0}
#define NXFONT_BITMAP_212 {0x4, 0x0, 0xe, 0x0, 0x11, 0x0, 0x0, 0x0, 0x1f, 0x0, 0x3f, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0xe0, 0xe0, 0xc0, 0x60, 0xc0, 0x60, 0xe0, 0xe0, 0x60, 0xc0, 0x71, 0xc0, 0x3f, 0x80, 0x1f, 0x0}

/* Otilde (213) */
#define NXFONT_METRICS_213 {2, 11, 15, 1, 5, 0}
#define NXFONT_BITMAP_213 {0xe, 0x80, 0x17, 0x0, 0x0, 0x0, 0x1f, 0x0, 0x3f, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0xe0, 0xe0, 0xc0, 0x60, 0xc0, 0x60, 0xe0, 0xe0, 0x60, 0xc0, 0x71, 0xc0, 0x3f, 0x80, 0x1f, 0x0}

/* Odieresis (214) */
#define NXFONT_METRICS_214 {2, 11, 15, 1, 5, 0}
#define NXFONT_BITMAP_214 {0x19, 0x80, 0x19, 0x80, 0x0, 0x0, 0x1f, 0x0, 0x3f, 0x80, 0x71, 0xc0, 0x60, 0xc0, 0xe0, 0xe0, 0xc0, 0x60, 0xc0, 0x60, 0xe0, 0xe0, 0x60, 0xc0, 0x71, 0xc0, 0x3f, 0x80, 0x1f, 0x0}

/* multiply (215) */
#define NXFONT_METRICS_215 {2, 9, 9, 0, 11, 0}
#define NXFONT_BITMAP_215 {0x41, 0x0, 0xe3, 0x80, 0x77, 0x0, 0x3e, 0x0, 0x1c, 0x0, 0x3e, 0x0, 0x77, 0x0, 0xe3, 0x80, 0x41, 0x0}

/* Oslash (216) */
#define NXFONT_METRICS_216 {2, 11, 12, 1, 8, 0}
#define NXFONT_BITMAP_216 {0x1f, 0x20, 0x3f, 0xc0, 0x70, 0xc0, 0x61, 0xc0, 0xe3, 0x60, 0xc6, 0x60, 0xcc, 0x60, 0xd8, 0xe0, 0x70, 0xc0, 0x61, 0xc0, 0x7f, 0x80, 0x9f, 0x0}

/* Ugrave (217) */
#define NXFONT_METRICS_217 {2, 10, 16, 1, 4, 0}
#define NXFONT_BITMAP_217 {0x10, 0x0, 0x18, 0x0, 0x4, 0x0, 0x0, 0x0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe1, 0xc0, 0x7f, 0x80, 0x3f, 0x0}

/* Uacute (218) */
#define NXFONT_METRICS_218 {2, 10, 16, 1, 4, 0}
#define NXFONT_BITMAP_218 {0x2, 0x0, 0x6, 0x0, 0x8, 0x0, 0x0, 0x0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe1, 0xc0, 0x7f, 0x80, 0x3f, 0x0}

/* Ucircumflex (219) */
#define NXFONT_METRICS_219 {2, 10, 16, 1, 4, 0}
#define NXFONT_BITMAP_219 {0x4, 0x0, 0xe, 0x0, 0x11, 0x0, 0x0, 0x0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe1, 0xc0, 0x7f, 0x80, 0x3f, 0x0}

/* Udieresis (220) */
#define NXFONT_METRICS_220 {2, 10, 15, 1, 5, 0}
#define NXFONT_BITMAP_220 {0x33, 0x0, 0x33, 0x0, 0x0, 0x0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe1, 0xc0, 0x7f, 0x80, 0x3f, 0x0}

/* Yacute (221) */
#define NXFONT_METRICS_221 {2, 10, 16, 0, 4, 0}
#define NXFONT_BITMAP_221 {0x2, 0x0, 0x6, 0x0, 0x8, 0x0, 0x0, 0x0, 0xc0, 0xc0, 0xe1, 0xc0, 0x61, 0x80, 0x33, 0x0, 0x33, 0x0, 0x1e, 0x0, 0x1e, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0, 0xc, 0x0}

/* Thorn (222) */
#define NXFONT_METRICS_222 {2, 9, 12, 1, 8, 0}
#define NXFONT_BITMAP_222 {0xc0, 0x0, 0xfe, 0x0, 0xff, 0x0, 0xc3, 0x80, 0xc1, 0x80, 0xc1, 0x80, 0xc3, 0x80, 0xff, 0x0, 0xfe, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0xc0, 0x0}

/* germandbls (223) */
#define NXFONT_METRICS_223 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_223 {0x7c, 0xfe, 0xc6, 0xc6, 0xdc, 0xde, 0xc3, 0xc3, 0xc3, 0xc3, 0xde, 0xdc}

/* agrave (224) */
#define NXFONT_METRICS_224 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_224 {0x20, 0x30, 0x8, 0x0, 0x7c, 0xfe, 0xc6, 0xe, 0x7e, 0xe6, 0xc6, 0xfe, 0x77}

/* aacute (225) */
#define NXFONT_METRICS_225 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_225 {0x4, 0xc, 0x10, 0x0, 0x7c, 0xfe, 0xc6, 0xe, 0x7e, 0xe6, 0xc6, 0xfe, 0x77}

/* acircumflex (226) */
#define NXFONT_METRICS_226 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_226 {0x10, 0x38, 0x44, 0x0, 0x7c, 0xfe, 0xc6, 0xe, 0x7e, 0xe6, 0xc6, 0xfe, 0x77}

/* atilde (227) */
#define NXFONT_METRICS_227 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_227 {0x3a, 0x5c, 0x0, 0x7c, 0xfe, 0xc6, 0xe, 0x7e, 0xe6, 0xc6, 0xfe, 0x77}

/* adieresis (228) */
#define NXFONT_METRICS_228 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_228 {0x6c, 0x6c, 0x0, 0x7c, 0xfe, 0xc6, 0xe, 0x7e, 0xe6, 0xc6, 0xfe, 0x77}

/* aring (229) */
#define NXFONT_METRICS_229 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_229 {0x18, 0x24, 0x24, 0x18, 0x7c, 0xfe, 0xc6, 0xe, 0x7e, 0xe6, 0xc6, 0xfe, 0x77}

/* ae (230) */
#define NXFONT_METRICS_230 {2, 13, 9, 1, 11, 0}
#define NXFONT_BITMAP_230 {0x7d, 0xe0, 0xff, 0xf0, 0xc6, 0x18, 0xf, 0xf8, 0x7f, 0xf8, 0xe6, 0x0, 0xcf, 0x38, 0xff, 0xf0, 0x79, 0xe0}

/* ccedilla (231) */
#define NXFONT_METRICS_231 {1, 8, 13, 1, 11, 0}
#define NXFONT_BITMAP_231 {0x3c, 0x7e, 0xe7, 0xc0, 0xc0, 0xc0, 0xe7, 0x7e, 0x3c, 0x10, 0x18, 0x4c, 0x38}

/* egrave (232) */
#define NXFONT_METRICS_232 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_232 {0x20, 0x30, 0x8, 0x0, 0x3c, 0x7e, 0xc3, 0xff, 0xff, 0xc0, 0xe7, 0x7e, 0x3c}

/* eacute (233) */
#define NXFONT_METRICS_233 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_233 {0x4, 0xc, 0x10, 0x0, 0x3c, 0x7e, 0xc3, 0xff, 0xff, 0xc0, 0xe7, 0x7e, 0x3c}

/* ecircumflex (234) */
#define NXFONT_METRICS_234 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_234 {0x8, 0x1c, 0x22, 0x0, 0x3c, 0x7e, 0xc3, 0xff, 0xff, 0xc0, 0xe7, 0x7e, 0x3c}

/* edieresis (235) */
#define NXFONT_METRICS_235 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_235 {0x36, 0x36, 0x0, 0x3c, 0x7e, 0xc3, 0xff, 0xff, 0xc0, 0xe7, 0x7e, 0x3c}

/* igrave (236) */
#define NXFONT_METRICS_236 {1, 3, 13, 0, 7, 0}
#define NXFONT_BITMAP_236 {0x80, 0xc0, 0x20, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60}

/* iacute (237) */
#define NXFONT_METRICS_237 {1, 3, 13, 1, 7, 0}
#define NXFONT_BITMAP_237 {0x20, 0x60, 0x80, 0x0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0}

/* icircumflex (238) */
#define NXFONT_METRICS_238 {1, 5, 13, 0, 7, 0}
#define NXFONT_BITMAP_238 {0x20, 0x70, 0x88, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60}

/* idieresis (239) */
#define NXFONT_METRICS_239 {1, 5, 12, 0, 8, 0}
#define NXFONT_BITMAP_239 {0xd8, 0xd8, 0x0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60}

/* eth (240) */
#define NXFONT_METRICS_240 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_240 {0x60, 0x7c, 0xf8, 0x1c, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c}

/* ntilde (241) */
#define NXFONT_METRICS_241 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_241 {0x3a, 0x5c, 0x0, 0xde, 0xff, 0xe3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3}

/* ograve (242) */
#define NXFONT_METRICS_242 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_242 {0x20, 0x30, 0x8, 0x0, 0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c}

/* oacute (243) */
#define NXFONT_METRICS_243 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_243 {0x8, 0x18, 0x20, 0x0, 0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c}

/* ocircumflex (244) */
#define NXFONT_METRICS_244 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_244 {0x10, 0x38, 0x44, 0x0, 0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c}

/* otilde (245) */
#define NXFONT_METRICS_245 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_245 {0x3a, 0x5c, 0x0, 0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c}

/* odieresis (246) */
#define NXFONT_METRICS_246 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_246 {0x6c, 0x6c, 0x0, 0x3c, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0x7e, 0x3c}

/* divide (247) */
#define NXFONT_METRICS_247 {1, 8, 8, 1, 12, 0}
#define NXFONT_BITMAP_247 {0x18, 0x18, 0x0, 0xff, 0xff, 0x0, 0x18, 0x18}

/* oslash (248) */
#define NXFONT_METRICS_248 {1, 8, 9, 1, 11, 0}
#define NXFONT_BITMAP_248 {0x3d, 0x7f, 0xe7, 0xcf, 0xdb, 0xf3, 0xe7, 0xfe, 0xbc}

/* ugrave (249) */
#define NXFONT_METRICS_249 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_249 {0x20, 0x30, 0x8, 0x0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc7, 0xff, 0x7b}

/* uacute (250) */
#define NXFONT_METRICS_250 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_250 {0x8, 0x18, 0x20, 0x0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc7, 0xff, 0x7b}

/* ucircumflex (251) */
#define NXFONT_METRICS_251 {1, 8, 13, 1, 7, 0}
#define NXFONT_BITMAP_251 {0x10, 0x38, 0x44, 0x0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc7, 0xff, 0x7b}

/* udieresis (252) */
#define NXFONT_METRICS_252 {1, 8, 12, 1, 8, 0}
#define NXFONT_BITMAP_252 {0x6c, 0x6c, 0x0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc7, 0xff, 0x7b}

/* yacute (253) */
#define NXFONT_METRICS_253 {1, 8, 17, 0, 7, 0}
#define NXFONT_BITMAP_253 {0x4, 0xc, 0x10, 0x0, 0xc3, 0xc3, 0x63, 0x66, 0x36, 0x36, 0x3c, 0x1c, 0x18, 0x18, 0x18, 0x70, 0x60}

/* thorn (254) */
#define NXFONT_METRICS_254 {1, 8, 16, 1, 8, 0}
#define NXFONT_BITMAP_254 {0xc0, 0xc0, 0xc0, 0xdc, 0xfe, 0xe7, 0xc3, 0xc3, 0xc3, 0xe7, 0xfe, 0xdc, 0xc0, 0xc0, 0xc0, 0xc0}

/* ydieresis (255) */
#define NXFONT_METRICS_255 {1, 8, 16, 0, 8, 0}
#define NXFONT_BITMAP_255 {0x36, 0x36, 0x0, 0xc3, 0xc3, 0x63, 0x66, 0x36, 0x36, 0x3c, 0x1c, 0x18, 0x18, 0x18, 0x70, 0x60}

/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Public Data
 ****************************************************************************/

#undef EXTERN
#if defined(__cplusplus)
#define EXTERN extern "C"
extern "C" {
#else
#define EXTERN extern
#endif

/****************************************************************************
 * Public Functions
 ****************************************************************************/

#undef EXTERN
#if defined(__cplusplus)
}
#endif

#endif /* __LIBNX_NXFONTS_NXFONTS_SANS20X27B_H */
