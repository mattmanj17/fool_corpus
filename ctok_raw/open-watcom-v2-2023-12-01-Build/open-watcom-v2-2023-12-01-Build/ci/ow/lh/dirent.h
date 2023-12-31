/*
 *  dirent.h    Portable directory entry definitions
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 *    Copyright (c) 2002-2010 Open Watcom Contributors. All Rights Reserved.
 *    Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */
#ifndef _DIRENT_H_INCLUDED
#define _DIRENT_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifndef __TYPES_H_INCLUDED
 #include <sys/types.h>
#endif

#define _DIRBUF  8  /*  Max number of dir entries buffered  */

#undef  _DIRENT_HAVE_D_NAMLEN
#define _DIRENT_HAVE_D_RECLEN
#define _DIRENT_HAVE_D_OFF
#undef  _DIRENT_HAVE_D_TYPE

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack( __push, 8 )

struct dirent {
    ino_t           d_ino;
    off_t           d_off;
    unsigned short  d_reclen;
    char            d_name[256];                /* We must not include limits.h! */
};

#define d_fileno        d_ino   /* Backwards compatibility.  */

/* This is the data type of directory stream objects.
 * The actual structure is opaque to users.
 */
typedef struct __dirstream DIR;

#pragma pack( __pop )

/*
 *  POSIX 1003.1 Prototypes.
 */

_WCRTLINK extern DIR              *opendir( const char *__dirname );
_WCRTLINK extern struct dirent    *readdir( DIR *__dirp );
_WCRTLINK extern void             rewinddir( DIR *__dirp );
_WCRTLINK extern int              closedir( DIR *__dirp );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif