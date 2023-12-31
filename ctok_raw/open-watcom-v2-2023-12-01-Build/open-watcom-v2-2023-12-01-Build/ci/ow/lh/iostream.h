///////////////////////////////////////////////////////////////////////////
// FILE: iostream/iostream.h (iostreams "top level" file)
//
// =========================================================================
//
//                          Open Watcom Project
//
//    Copyright (c) 2002-2010 Open Watcom Contributors. All Rights Reserved.
//    Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
//
//    This file is automatically generated. Do not edit directly.
//
// =========================================================================
//
// Description: This header is part of the C++ standard library. It
//              declares the global stream objects and includes other
//              iostream headers as necessary.
///////////////////////////////////////////////////////////////////////////
#ifndef _IOSTREAM_H_INCLUDED
#define _IOSTREAM_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifndef _IOSTREAM_INCLUDED
 #include <iostream>
#endif
using std::cin;
using std::cout;
using std::cerr;
using std::clog;

// All included names should also be in the global namespace.
#ifndef _IOS_H_INCLUDED
 #include <ios.h>
#endif

#ifndef _STREAMBUF_H_INCLUDED
 #include <streambu.h>
#endif

#ifndef _ISTREAM_H_INCLUDED
 #include <istream.h>
#endif

#ifndef _OSTREAM_H_INCLUDED
 #include <ostream.h>
#endif

#endif