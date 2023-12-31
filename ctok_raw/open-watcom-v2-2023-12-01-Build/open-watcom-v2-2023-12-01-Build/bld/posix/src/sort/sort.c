/****************************************************************************
*
*                            Open Watcom Project
*
* Copyright (c) 2002-2022 The Open Watcom Contributors. All Rights Reserved.
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
* Description:  POSIX sort utility
*               Sorts the lines in a file
*
****************************************************************************/


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bool.h"
#include "misc.h"
#include "getopt.h"
#include "argvrx.h"
#include "argvenv.h"


static const char *usageMsg[] = {
    "Usage: sort [-?fr] [-o outfile] [infile]",
    "\tinfile              : file to be sorted",
    "\tOptions: -?         : display this message",
    "\t\t -f         : perform a case-insensitive sort",
    "\t\t -r         : sort in descending order",
    "\t\t -o outfile : redirect output to outfile",
    NULL
};

#define MAXLINES    10000
#define MAXLEN      1023

static int compare( const void *p1, const void *p2 )
{
    const char  **cp1 = (const char **)p1;
    const char  **cp2 = (const char **)p2;
    return( strcmp( *cp1, *cp2 ) );
}

static int compareI( const void *p1, const void *p2 )
{
    const char  **cp1 = (const char **)p1;
    const char  **cp2 = (const char **)p2;
    return( stricmp( *cp1, *cp2 ) );
}

static int compareRev( const void *p1, const void *p2 )
{
    const char  **cp1 = (const char **)p1;
    const char  **cp2 = (const char **)p2;
    return( strcmp( *cp2, *cp1 ) );
}

static int compareRevI( const void *p1, const void *p2 )
{
    const char  **cp1 = (const char **)p1;
    const char  **cp2 = (const char **)p2;
    return( stricmp( *cp2, *cp1 ) );
}

static char *my_fgets( char *buffer, int size, FILE *fp )
{
    size_t  len;

    if( fgets( buffer, size, fp ) == NULL ) {
        return( NULL );
    }
    len = strlen( buffer );
    while( len-- > 0 ) {
        if( buffer[len] == '\n' ) {
            buffer[len] = '\0';
        } else if( buffer[len] == '\r' ) {
            buffer[len] = '\0';
        } else {
            break;
        }
    }
    return( buffer );
}

// main is allways int on windows
int main( int argc, char **argv )
{
    int     rflag = 0, fflag = 0, ch;
    int     line_count = 0;
    char    *lines[MAXLINES];
    char    buffer[MAXLEN];
    int     i;
    FILE    *infile, *outfile;
    int     own_infile = 0, own_outfile = 0;
    int     ret;

    infile = NULL;
    outfile = NULL;
    argv = ExpandEnv( &argc, argv, "SORT" );

    ret = EXIT_SUCCESS;

    for( ;; ) {
        ch = GetOpt( &argc, argv, "o:fr", usageMsg );
        if( ch == -1 ) {
            break;
        } else if( ch == 'f' ) {
            fflag = 1;
        } else if( ch == 'r' ) {
            rflag = 1;
        } else if( ch == 'o' ) {
            // allways open output file in text mode
            outfile = fopen( OptArg, "wt" );
            if( outfile == NULL ) {
                fprintf( stderr, "sort: cannot open output file \"%s\"\n", OptArg );
                ret = EXIT_FAILURE;
                goto done;
            }
            own_outfile = 1;
        }
    }

    if( argc < 2 ) {
        infile = stdin;
    } else {
        // allways open input file in binary mode
        infile = fopen( argv[1], "rb" );
        if( infile == NULL ) {
            fprintf( stderr, "sort: cannot open input file \"%s\"\n", argv[1] );
            if( own_outfile ) {
                fclose( outfile );
            }
            MemFree( argv );
            ret = EXIT_FAILURE;
            goto done;
        }
        own_infile = 1;
    }
    if( !own_outfile ) {
        outfile = stdout;
    }
    MemFree( argv );

    while( my_fgets( buffer, sizeof( buffer ), infile ) != NULL ) {
        lines[line_count] = (char *)MemAlloc( sizeof( char ) * strlen( buffer ) + 1 );
        strcpy( lines[line_count], buffer );
        line_count++;
    }

    if( rflag ) {
        if( fflag ) {
            qsort( lines, line_count, sizeof( char * ), compareRevI );
        } else {
            qsort( lines, line_count, sizeof( char * ), compareRev );
        }
    } else {
        if( fflag ) {
            qsort( lines, line_count, sizeof( char * ), compareI );
        } else {
            qsort( lines, line_count, sizeof( char * ), compare );
        }
    }

    for( i = 0; i < line_count; i++ ) {
        fprintf( outfile, "%s\n", lines[i] );
        MemFree( lines[i] );
    }

    if( own_infile ) {
        fclose( infile );
    }
    if( own_outfile ) {
        fclose( outfile );
    }
done:; // a goto! flee in terror...
    return( ret );
}
