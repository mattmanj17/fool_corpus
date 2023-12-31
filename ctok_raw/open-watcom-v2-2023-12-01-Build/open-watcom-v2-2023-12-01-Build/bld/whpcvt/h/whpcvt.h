/****************************************************************************
*
*                            Open Watcom Project
*
* Copyright (c) 2002-2021 The Open Watcom Contributors. All Rights Reserved.
*    Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
*
*  ========================================================================
*
*    This file contains Original Code and/or Modifications of Original
*    Code as defined in and that are subject to the Sybase Open Watcom
*    Public License version 1.0 (the 'License'). You may not use this file
*    except in compliance with the License. BY USING THIS FILE YOU AGREE TO
*    ALL TERMS AND CONDITIONS OF THE LICENSE. A copy of the License is
*    provided with the Original Code and Modifications, and is also
*    available at www.sybase.com/developer/opensource.
*
*    The Original Code and all software distributed under the License are
*    distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
*    EXPRESS OR IMPLIED, AND SYBASE AND ALL CONTRIBUTORS HEREBY DISCLAIM
*    ALL SUCH WARRANTIES, INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF
*    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR
*    NON-INFRINGEMENT. Please see the License for the specific language
*    governing rights and limitations under the License.
*
*  ========================================================================
*
* Description:  Global WHPCVT include file. Contains system independent
*               structures required across all help platforms.
*
****************************************************************************/


#ifndef WHPCVT_H_INCLUDED
#define WHPCVT_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <setjmp.h>
#include <string.h>
#include <ctype.h>
#include "bool.h"

/* for testing */
//#define static

#define MAX_LISTS               20

#define MAX_TABS                100     // up to 100 tab stops

#define TAB_UNDEF               ((tab_size)-1)

#define _min( a, b )            ( a > b ) b ? a
#define _max( a, b )            ( a > b ) a ? b
#define _new( ptr, size )       ( ptr = check_alloc( sizeof( *(ptr) ) * (size) ) )
#define _renew( ptr, size )     ( ptr = check_realloc( ptr, sizeof( *(ptr) ) * (size) ) )
#define _free( x )              free( x )
#define _alloc( size )          check_alloc( size )
#define _realloc( ptr, size )   check_realloc( ptr, size )

#define _is_nonblank( c )       ((c) != '\0' && (c) != ' ' && (c) != '\t')

/**** special characters generated by WGML *****/
#define WHP_EXCLUDE_ON          (char)'\xC3'  // 195
#define WHP_EXCLUDE_OFF         (char)'\xB4'  // 180
#define WHP_CTX_DEF             (char)'\xF7'  // 247
#define WHP_HLINK               (char)'\x7F'  // 127
#define WHP_DFN                 (char)'\xEA'  // 234
#define WHP_TOPIC               (char)'\xEE'  // 238
#define WHP_LIST_START          (char)'\xD2'  // 210
#define WHP_LIST_ITEM           (char)'\xD3'  // 211
#define WHP_DLIST_DESC          (char)'\xB9'  // 185
#define WHP_LIST_END            (char)'\xD4'  // 212
#define WHP_OLIST_START         (char)'\xC8'  // 200
#define WHP_OLIST_END           (char)'\xC9'  // 201
#define WHP_DLIST_START         (char)'\xCA'  // 202
#define WHP_DLIST_END           (char)'\xCB'  // 203
#define WHP_DLIST_TERM          (char)'\xCC'  // 204
#define WHP_CTX_KW              (char)'\xEC'  // 236
#define WHP_SLIST_START         (char)'\xD5'  // 213
#define WHP_SLIST_END           (char)'\xD6'  // 214
#define WHP_TOPIC_LN            (char)'\xA7'  // 167
#define WHP_TOPIC_NOLN          (char)'\xF8'  // 248
#define WHP_PAR_RESET           (char)'\x9E'  // 158
#define WHP_EXCLUDE_OFF_BLANK   (char)'\x9F'  // 159
#define WHP_UP_TOPIC            (char)'\xA0'  // 160
#define WHP_BMP                 (char)'\xB0'  // 176
#define WHP_BOX_ON              (char)'\xDB'  // 219
#define WHP_BOX_OFF             (char)'\xFE'  // 254
#define WHP_TABXMP              (char)'\xAA'  // 170
#define WHP_FLINK               (char)'\xE8'  // 232
#define WHP_SPACE_NOBREAK       (char)'\xFF'  // 255
/*** list type character (second byte) generated by WGML ***/
#define WHP_LIST_COMPACT        'c'
/*** special characters generated by WGML WHELPDRV driver ***/
#define WHP_FONTSTYLE_START     (char)'\xEF'  // 239
#define WHP_FONTSTYLE_END       (char)'\xF0'  // 240
#define WHP_FONTTYPE            (char)'\x9D'  // 157

/**** various file extensions ****/
#define EXT_INPUT_FILE          ".whp"
#define EXT_OUTRTF_FILE         ".rtf"
#define EXT_OUTIPF_FILE         ".ipf"
#define EXT_OUTHTML_FILE        ".htm"
#ifdef __DOS__
 #define EXT_OUTWIKI_FILE       ".wik"
#else
 #define EXT_OUTWIKI_FILE       ".wiki"
#endif
#define EXT_OUTIB_FILE          ".ib"
#define EXT_IDX_FILE            ".idx"
#define EXT_KW_FILE             ".kw"
#define EXT_BLIST_FILE          ".blt"
#define EXT_DEF_FILE            ".h"
#define EXT_HDEF_FILE           ".hh"
#define EXT_HLP_FILE            ".hlp"
#define EXT_TBL_FILE            ".tbl"

/**** misc. stuff ****/
#define INDENT_INC              360 // for RTF only
#define NUM_TAB_STOPS           15  // for RTF only

/**** Error constants ****/
#define ERROR_DEFS() \
    ERROR_DEF( ERR_NO_TOPIC,    "Expecting topic definition, or topic section" ) \
    ERROR_DEF( ERR_CTX_EXISTS,  "Context topic already exists" ) \
    ERROR_DEF( ERR_NO_TITLE,    "A defined context topic must have a title" ) \
    ERROR_DEF( ERR_NO_MEMORY,   "Out of memory" ) \
    ERROR_DEF( ERR_BAD_LINK_DFN, "Bad cross-reference (hyperlink) or definition" ) \
    ERROR_DEF( ERR_MAX_LISTS,   "Maximum of 20 nested numbered lists allowed" ) \
    ERROR_DEF( ERR_UNBAL_LIST,  "Unbalanced list start/end" ) \
    ERROR_DEF( ERR_UNDEF_LINK,  "Cross-reference (hyperlink) to undefined topic" ) \
    ERROR_DEF( ERR_EMPTY_LINK,  "Cross-reference (hyperlink) to an empty topic (use -lk option)" ) \
    ERROR_DEF( ERR_BAD_ARGS,    "Invalid number of parameters." )

enum {
    #define ERROR_DEF(a,b)  a,
    ERROR_DEFS()
    #undef ERROR_DEF
};


enum {
    TITLE_FMT_DEFAULT,
    TITLE_FMT_LINE,
    TITLE_FMT_NOLINE
};

typedef enum {
    LIST_TYPE_NONE,
    LIST_TYPE_UNORDERED,
    LIST_TYPE_ORDERED,
    LIST_TYPE_SIMPLE,
    LIST_TYPE_DEFN
} list_type;

/**** Typedefs for converter ****/

typedef struct browse_ctx {
    struct browse_ctx   *next;
    struct ctx_def      *ctx;
} browse_ctx;

typedef struct browse_def {
    struct browse_def   *next;
    char                *browse_name;
    browse_ctx          *ctx_list;
} browse_def;

typedef struct section_def {
    struct section_def  *next;
    bool                blank_order;
    int                 order_num;
    char                *section_text;
    size_t              section_size;
    size_t              allocated_size;
} section_def;

typedef struct keyword_def {
    struct keyword_def  *next;
    char                *keyword;
    struct ctx_def      *defined_ctx;
    bool                duplicate;
    int                 id;
    int                 ctx_list_size;
    int                 ctx_list_alloc;
    struct ctx_def      **ctx_list;
} keyword_def;

typedef struct keylist_def {
    struct keylist_def  *next;
    keyword_def         *key;
} keylist_def;

typedef struct ctx_def {
    struct ctx_def      *next;
    char                *ctx_name;
    char                *title;
    browse_def          *browse;
    int                 browse_num;
    section_def         *section_list;
    int                 ctx_id;
    int                 title_fmt;
    struct ctx_def      *up_ctx;
    int                 head_level;
    bool                empty;
    bool                req_by_link;
    keylist_def         *keylist;
} ctx_def;

typedef struct link_def {
    struct link_def     *next;
    char                *link_name;
    int                 line_num;
} link_def;

typedef struct {
    list_type           type;
    int                 number;
    int                 prev_indent;
    bool                list_indent;
    bool                compact;
} list_def;

typedef unsigned        tab_size;

/**** Globals ****/
#ifndef WHPCVT_GBL
#define WHPCVT_GBL  extern
#endif

WHPCVT_GBL FILE         *In_file;
WHPCVT_GBL FILE         *Out_file;
WHPCVT_GBL FILE         *Idx_file;
WHPCVT_GBL FILE         *KW_file;
WHPCVT_GBL FILE         *Blist_file;
WHPCVT_GBL FILE         *Def_file;
WHPCVT_GBL FILE         *Hdef_file;
WHPCVT_GBL FILE         *Contents_file;

WHPCVT_GBL int          Line_num;

WHPCVT_GBL ctx_def      *Ctx_list;
WHPCVT_GBL ctx_def      *Curr_ctx;
WHPCVT_GBL browse_def   *Browse_list;
WHPCVT_GBL link_def     *Link_list;

WHPCVT_GBL int          Start_inc_ul;
WHPCVT_GBL int          Start_inc_ol;
WHPCVT_GBL int          Start_inc_sl;
WHPCVT_GBL int          Start_inc_dl;

WHPCVT_GBL bool         Do_up;
WHPCVT_GBL bool         Do_kw_button;
WHPCVT_GBL bool         Keep_titles;
WHPCVT_GBL bool         Break_link;
WHPCVT_GBL bool         Remove_empty;
WHPCVT_GBL bool         Keep_link_topics;
WHPCVT_GBL bool         Exclude_special_topics;

WHPCVT_GBL int          Right_Margin;
WHPCVT_GBL int          Text_Indent;
WHPCVT_GBL bool         Do_browse;
WHPCVT_GBL bool         Do_tc_button;
WHPCVT_GBL bool         Do_idx_button;
WHPCVT_GBL bool         Tab_xmp;
WHPCVT_GBL char         Tab_xmp_char;

extern char             *Header_File;
extern char             *Footer_File;
extern char             *Help_File;

extern const char       Fonttype_roman[];
extern const char       Fonttype_symbol[];
extern const char       Fonttype_helv[];
extern const char       Fonttype_courier[];

extern list_def         *Curr_list;

WHPCVT_GBL bool         Ipf_or_Html_Real_font;
WHPCVT_GBL char         *Ipf_or_Html_title;

WHPCVT_GBL bool         Hyperlink_Braces;
WHPCVT_GBL char         *IB_def_topic;
WHPCVT_GBL char         *IB_help_desc;

/**** externed functions ****/
extern void         error( int err );
extern void         warning_msg( const char *msg, int line_num );
extern void         *check_alloc( size_t size );
extern void         *check_realloc( void *ptr, size_t size );
extern void         Tabs_read( char *tab_line );
extern tab_size     Tabs_align( tab_size ch_len );
extern tab_size     Tabs_get( int pos );
extern void         whp_fprintf( FILE *fp, const char *fmt, ... );
extern void         whp_fwrite( FILE *fp, const char *buf, size_t el_size, size_t num_el );
extern bool         read_line( void );
extern size_t       trans_add_char( char ch, section_def *section );
extern size_t       trans_add_str( const char *str, section_def *section );
extern size_t       trans_add_str_nl( const char *str, section_def *section );
extern bool         find_keyword( ctx_def *ctx, const char *keyword );
extern keyword_def  *find_keyword_all( const char *keyword );
extern void         add_ctx_keyword( ctx_def *ctx, const char *keyword );
extern char         *skip_blanks( char *ptr );
extern void         add_link( const char *link_name );
extern ctx_def      *find_ctx( const char *ctx_name );
extern char         *whole_keyword_line( char *ptr );
extern bool         is_special_topic( ctx_def *ctx, bool dump_popup );
extern void         NewList( const char *ptr, int indent, bool list_indent );
extern void         PopList( void );

extern void         rtf_init_whp( void );
extern void         rtf_trans_line( char *line_buf, section_def *section );
extern void         rtf_output_file( void );
extern void         rtf_topic_init( void );
extern void         ipf_init_whp( void );
extern void         ipf_trans_line( char *line_buf, section_def *section );
extern void         ipf_output_file( void );
extern void         ipf_topic_init( void );
extern void         ib_init_whp( void );
extern void         ib_trans_line( char *line_buf, section_def *section );
extern void         ib_output_file( void );
extern void         ib_topic_init( void );
extern void         html_init_whp( void );
extern void         html_trans_line( char *line_buf, section_def *section );
extern void         html_output_file( void );
extern void         html_topic_init( void );
extern void         wiki_init_whp( void );
extern void         wiki_trans_line( char *line_buf, section_def *section );
extern void         wiki_output_file( void );
extern void         wiki_topic_init( void );

#endif