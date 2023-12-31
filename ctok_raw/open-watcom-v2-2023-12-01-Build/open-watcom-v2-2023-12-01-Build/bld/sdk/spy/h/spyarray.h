/****************************************************************************
*
*                            Open Watcom Project
*
* Copyright (c) 2017-2018 The Open Watcom Contributors. All Rights Reserved.
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
* Description:  Message table for the spy.
*
****************************************************************************/



/* message with hard coded constants are undocumented messages
   taken from       "Undocumented Windows" */

/*         ID [, text ID]                  type class */
msgpick1(  WM_ACTIVATE,                    MC_WINDOW )
msgpick1(  WM_ACTIVATEAPP,                 MC_WINDOW )
msgpick1(  WM_ACTIVATESHELLWINDOW,         MC_WINDOW )
msgpick1(  WM_ATTABACTIVE,                 MC_INPUT )
msgpick1(  WM_APP,                         MC_APPL )
msgpick2(  WM_APPCOMMAND,                  MC_INPUT )
msgpick1(  WM_ASKCBFORMATNAME,             MC_CLIPBRD )
msgpick1(  WM_BEGINDRAG,                   MC_INPUT )
msgpick2(  WM_CANCELJOURNAL,               MC_SYSTEM )
msgpick1(  WM_CANCELMODE,                  MC_WINDOW )
msgpick2(  WM_CAPTURECHANGED,              MC_MOUSE )
msgpick1(  WM_CHANGECBCHAIN,               MC_CLIPBRD )
msgpick2(  WM_CHANGEUISTATE,               MC_OTHER )
msgpick1(  WM_CHAR,                        MC_INPUT )
msgpick1(  WM_CHARTOITEM,                  MC_INPUT )
msgpick1(  WM_CHILDACTIVATE,               MC_WINDOW )
msgpick1(  WM_CLEAR,                       MC_CLIPBRD )
msgpick2(  WM_CLIPBOARDUPDATE,             MC_CLIPBRD )
msgpick1(  WM_CLOSE,                       MC_WINDOW )
msgpick1(  WM_COALESCE_FIRST,              MC_OTHER )
msgpick1(  WM_COALESCE_LAST,               MC_OTHER )
msgpick1(  WM_COMMAND,                     MC_INPUT )
msgpick1(  WM_COMMNOTIFY,                  MC_OTHER )
msgpick1(  WM_COMPACTING,                  MC_SYSTEM )
msgpick1(  WM_COMPAREITEM,                 MC_WINDOW )
msgpick2(  WM_CONTEXTMENU,                 MC_INPUT )
msgpick1(  WM_CONVERTREQUEST,              MC_OTHER )
msgpick1(  WM_CONVERTRESULT,               MC_OTHER )
msgpick1(  WM_COPY,                        MC_CLIPBRD )
msgpick2(  WM_COPYDATA,                    MC_INPUT )
msgpick1(  WM_CREATE,                      MC_WINDOW )
msgpick1(  WM_CTLCOLOR,                    MC_WINDOW )
msgpick2(  WM_CTLCOLORBTN,                 MC_WINDOW )
msgpick2(  WM_CTLCOLORDLG,                 MC_WINDOW )
msgpick2(  WM_CTLCOLOREDIT,                MC_WINDOW )
msgpick2(  WM_CTLCOLORLISTBOX,             MC_WINDOW )
msgpick2(  WM_CTLCOLORMSGBOX,              MC_WINDOW )
msgpick2(  WM_CTLCOLORSCROLLBAR,           MC_WINDOW )
msgpick2(  WM_CTLCOLORSTATIC,              MC_WINDOW )
msgpick1(  WM_CUT,                         MC_CLIPBRD )
msgpick1(  WM_DDE_ACK,                     MC_DDE )
msgpick1(  WM_DDE_ADVISE,                  MC_DDE )
msgpick1(  WM_DDE_DATA,                    MC_DDE )
msgpick1(  WM_DDE_EXECUTE,                 MC_DDE )
msgpick1(  WM_DDE_INITIATE,                MC_DDE )
msgpick1(  WM_DDE_POKE,                    MC_DDE )
msgpick1(  WM_DDE_REQUEST,                 MC_DDE )
msgpick1(  WM_DDE_TERMINATE,               MC_DDE )
msgpick1(  WM_DDE_UNADVISE,                MC_DDE )
msgpick1(  WM_DEADCHAR,                    MC_INPUT )
msgpick1(  WM_DELETEITEM,                  MC_WINDOW )
msgpick1(  WM_DESTROY,                     MC_WINDOW )
msgpick1(  WM_DESTROYCLIPBOARD,            MC_CLIPBRD )
msgpick2(  WM_DEVICECHANGE,                MC_SYSTEM )
msgpick1(  WM_DEVMODECHANGE,               MC_SYSTEM )
msgpick2(  WM_DISPLAYCHANGE,               MC_SYSTEM )
msgpick1(  WM_DRAGLOOP,                    MC_INPUT )
msgpick1(  WM_DRAGMOVE,                    MC_INPUT )
msgpick1(  WM_DRAGSELECT,                  MC_INPUT )
msgpick1(  WM_DRAWCLIPBOARD,               MC_CLIPBRD )
msgpick1(  WM_DRAWITEM,                    MC_WINDOW )
msgpick1(  WM_DROPFILES,                   MC_OTHER )
msgpick1(  WM_DROPOBJECT,                  MC_INPUT )
msgpick2(  WM_DWMCOMPOSITIONCHANGED,       MC_WINDOW )
msgpick2(  WM_DWMNCRENDERINGCHANGED,       MC_WINDOW )
msgpick2(  WM_DWMCOLORIZATIONCOLORCHANGED, MC_WINDOW )
msgpick2(  WM_DWMWINDOWMAXIMIZEDCHANGE,    MC_WINDOW )
msgpick1(  WM_ENABLE,                      MC_WINDOW )
msgpick1(  WM_ENDSESSION,                  MC_SYSTEM )
msgpick1(  WM_ENTERIDLE,                   MC_SYSTEM )
msgpick1(  WM_ENTERMENULOOP,               MC_SYSTEM )
msgpick1(  WM_ENTERSIZEMOVE,               MC_WINDOW )
msgpick1(  WM_ERASEBKGND,                  MC_WINDOW )
msgpick1(  WM_EXITMENULOOP,                MC_SYSTEM )
msgpick1(  WM_EXITSIZEMOVE,                MC_INPUT )
msgpick1(  WM_FILESYSCHANGE,               MC_SYSTEM )
msgpick1(  WM_FONTCHANGE,                  MC_WINDOW )
msgpick1(  WM_GETDLGCODE,                  MC_WINDOW )
msgpick1(  WM_GETFONT,                     MC_WINDOW )
msgpick1(  WM_GETHOTKEY,                   MC_WINDOW )
msgpick2(  WM_GETICON,                     MC_WINDOW )
msgpick1(  WM_GETMINMAXINFO,               MC_WINDOW )
msgpick1(  WM_GETTEXT,                     MC_WINDOW )
msgpick1(  WM_GETTEXTLENGTH,               MC_WINDOW )
msgpick2(  WM_GETTITLEBARINFOEX,           MC_WINDOW )
msgpick2(  WM_HELP,                        MC_INPUT )
msgpick1(  WM_HSCROLL,                     MC_INPUT )
msgpick1(  WM_HSCROLLCLIPBOARD,            MC_CLIPBRD )
msgpick1(  WM_ICONERASEBKGND,              MC_WINDOW )
msgpick2(  WM_IME_STARTCOMPOSITION,        MC_IME )
msgpick2(  WM_IME_ENDCOMPOSITION,          MC_IME )
msgpick2(  WM_IME_COMPOSITION,             MC_IME )
msgpick2(  WM_IME_KEYLAST,                 MC_IME )
msgpick2(  WM_IME_SETCONTEXT,              MC_IME )
msgpick2(  WM_IME_NOTIFY,                  MC_IME )
msgpick2(  WM_IME_CONTROL,                 MC_IME )
msgpick2(  WM_IME_COMPOSITIONFULL,         MC_IME )
msgpick2(  WM_IME_SELECT,                  MC_IME )
msgpick2(  WM_IME_CHAR,                    MC_IME )
msgpick2(  WM_IME_KEYDOWN,                 MC_IME )
msgpick2(  WM_IME_KEYUP,                   MC_IME )
msgpick2(  WM_IME_SYSTEM,                  MC_IME )
msgpick2(  WM_IME_REQUEST,                 MC_IME )
msgpick1(  WM_INITDIALOG,                  MC_INIT )
msgpick1(  WM_INITMENU,                    MC_INIT )
msgpick1(  WM_INITMENUPOPUP,               MC_INIT )
msgpick2(  WM_INPUT,                       MC_INPUT )
msgpick2(  WM_INPUT_DEVICE_CHANGE,         MC_INPUT )
msgpick2(  WM_INPUTLANGCHANGE,             MC_INPUT )
msgpick2(  WM_INPUTLANGCHANGEREQUEST,      MC_INPUT )
msgpick1(  WM_INTERIM,                     MC_OTHER )
msgpick1(  WM_ISACTIVEICON,                MC_MDI )
msgpick1(  WM_KEYDOWN,                     MC_INPUT )
msgpick1(  WM_KEYUP,                       MC_INPUT )
msgpick1(  WM_KILLFOCUS,                   MC_WINDOW )
msgpick2(  WM_KLUDGEMINRECT,               MC_OTHER )
msgpick1(  WM_LBUTTONDBLCLK,               MC_MOUSE )
msgpick1(  WM_LBUTTONDOWN,                 MC_MOUSE )
msgpick1(  WM_LBUTTONUP,                   MC_MOUSE )
msgpick1(  WM_LBTRACKPOINT,                MC_INPUT )
msgpick1(  WM_MBUTTONDBLCLK,               MC_MOUSE )
msgpick1(  WM_MBUTTONDOWN,                 MC_MOUSE )
msgpick1(  WM_MBUTTONUP,                   MC_MOUSE )
msgpick1(  WM_MDIACTIVATE,                 MC_MDI )
msgpick1(  WM_MDICASCADE,                  MC_MDI )
msgpick1(  WM_MDICREATE,                   MC_MDI )
msgpick1(  WM_MDIDESTROY,                  MC_MDI )
msgpick1(  WM_MDIGETACTIVE,                MC_MDI )
msgpick1(  WM_MDIICONARRANGE,              MC_MDI )
msgpick1(  WM_MDIMAXIMIZE,                 MC_MDI )
msgpick1(  WM_MDINEXT,                     MC_MDI )
msgpick1(  WM_MDIRESTORE,                  MC_MDI )
msgpick1(  WM_MDISETMENU,                  MC_MDI )
msgpick1(  WM_MDITILE,                     MC_MDI )
msgpick1(  WM_MEASUREITEM,                 MC_WINDOW )
msgpick1(  WM_MENUCHAR,                    MC_INPUT )
msgpick2(  WM_MENUCOMMAND,                 MC_INPUT )
msgpick2(  WM_MENUDRAG,                    MC_INPUT )
msgpick2(  WM_MENUGETOBJECT,               MC_INPUT )
msgpick2(  WM_MENURBUTTONUP,               MC_INPUT )
msgpick1(  WM_MENUSELECT,                  MC_INPUT )
msgpick1(  WM_MOUSEACTIVATE,               MC_MOUSE )
msgpick2(  WM_MOUSEHOVER,                  MC_MOUSE )
msgpick2(  WM_MOUSEHWHEEL,                 MC_MOUSE )
msgpick2(  WM_MOUSELEAVE,                  MC_MOUSE )
msgpick1(  WM_MOUSEMOVE,                   MC_MOUSE )
msgpick2(  WM_MOUSEWHEEL,                  MC_MOUSE )
msgpick1(  WM_MOVE,                        MC_WINDOW )
msgpick2(  WM_MOVING,                      MC_WINDOW )
msgpick1(  WM_NCACTIVATE,                  MC_NC_MISC )
msgpick1(  WM_NCCALCSIZE,                  MC_NC_MISC )
msgpick1(  WM_NCCREATE,                    MC_NC_MISC )
msgpick1(  WM_NCDESTROY,                   MC_NC_MISC )
msgpick1(  WM_NCHITTEST,                   MC_NC_MOUSE )
msgpick1(  WM_NCLBUTTONDBLCLK,             MC_NC_MOUSE )
msgpick1(  WM_NCLBUTTONDOWN,               MC_NC_MOUSE )
msgpick1(  WM_NCLBUTTONUP,                 MC_NC_MOUSE )
msgpick1(  WM_NCMBUTTONDBLCLK,             MC_NC_MOUSE )
msgpick1(  WM_NCMBUTTONDOWN,               MC_NC_MOUSE )
msgpick1(  WM_NCMBUTTONUP,                 MC_NC_MOUSE )
msgpick2(  WM_NCMOUSEHOVER,                MC_NC_MOUSE )
msgpick2(  WM_NCMOUSELEAVE,                MC_NC_MOUSE )
msgpick1(  WM_NCMOUSEMOVE,                 MC_NC_MOUSE )
msgpick1(  WM_NCPAINT,                     MC_NC_MISC )
msgpick1(  WM_NCRBUTTONDBLCLK,             MC_NC_MOUSE )
msgpick1(  WM_NCRBUTTONDOWN,               MC_NC_MOUSE )
msgpick1(  WM_NCRBUTTONUP,                 MC_NC_MOUSE )
msgpick2(  WM_NCUAHDRAWCAPTION,            MC_NC_MISC )
msgpick2(  WM_NCUAHDRAWFRAME,              MC_NC_MISC )
msgpick2(  WM_NCXBUTTONDBLCLK,             MC_NC_MOUSE )
msgpick2(  WM_NCXBUTTONDOWN,               MC_NC_MOUSE )
msgpick2(  WM_NCXBUTTONUP,                 MC_NC_MOUSE )
msgpick1(  WM_NEXTDLGCTL,                  MC_WINDOW )
msgpick1(  WM_NEXTMENU,                    MC_INPUT )
msgpick2(  WM_NOTIFY,                      MC_INPUT )
msgpick2(  WM_NOTIFYFORMAT,                MC_INPUT )
msgpick1(  WM_NULL,                        MC_SYSTEM )
msgpick1(  WM_OTHERWINDOWCREATED,          MC_WINDOW )
msgpick1(  WM_OTHERWINDOWDESTROYED,        MC_WINDOW )
msgpick1(  WM_PAINT,                       MC_WINDOW )
msgpick1(  WM_PAINTCLIPBOARD,              MC_CLIPBRD )
msgpick1(  WM_PAINTICON,                   MC_WINDOW )
msgpick1(  WM_PALETTECHANGED,              MC_WINDOW )
msgpick1(  WM_PALETTEISCHANGING,           MC_WINDOW )
msgpick1(  WM_PARENTNOTIFY,                MC_WINDOW )
msgpick1(  WM_PASTE,                       MC_CLIPBRD )
msgpick1(  WM_PENWINFIRST,                 MC_OTHER )
msgpick1(  WM_PENWINLAST,                  MC_OTHER )
msgpick1(  WM_POWER,                       MC_SYSTEM )
msgpick2(  WM_POWERBROADCAST,              MC_SYSTEM )
msgpick2(  WM_PRINT,                       MC_OTHER )
msgpick2(  WM_PRINTCLIENT,                 MC_OTHER )
msgpick1(  WM_QUERYDRAGICON,               MC_WINDOW )
msgpick1(  WM_QUERYDROPOBJECT,             MC_INPUT )
msgpick1(  WM_QUERYENDSESSION,             MC_WINDOW )
msgpick1(  WM_QUERYNEWPALETTE,             MC_WINDOW )
msgpick1(  WM_QUERYOPEN,                   MC_WINDOW )
msgpick1(  WM_QUERYPARKICON,               MC_WINDOW )
msgpick1(  WM_QUERYSAVESTATE,              MC_OTHER )
msgpick2(  WM_QUERYUISTATE,                MC_OTHER )
msgpick1(  WM_QUEUESYNC,                   MC_OTHER )
msgpick1(  WM_QUIT,                        MC_WINDOW )
msgpick1(  WM_RBUTTONDBLCLK,               MC_MOUSE )
msgpick1(  WM_RBUTTONDOWN,                 MC_MOUSE )
msgpick1(  WM_RBUTTONUP,                   MC_MOUSE )
msgpick1(  WM_RENDERALLFORMATS,            MC_CLIPBRD )
msgpick1(  WM_RENDERFORMAT,                MC_CLIPBRD )
msgpick1(  WM_SETCURSOR,                   MC_MOUSE )
msgpick1(  WM_SETFOCUS,                    MC_WINDOW )
msgpick1(  WM_SETFONT,                     MC_WINDOW )
msgpick1(  WM_SETHOTKEY,                   MC_WINDOW )
msgpick2(  WM_SETICON,                     MC_WINDOW )
msgpick1(  WM_SETREDRAW,                   MC_WINDOW )
msgpick1(  WM_SETTEXT,                     MC_WINDOW )
msgpick1(  WM_SETVISIBLE,                  MC_WINDOW )
msgpick1(  WM_SHOWWINDOW,                  MC_WINDOW )
msgpick1(  WM_SIZE,                        MC_WINDOW )
msgpick1(  WM_SIZECLIPBOARD,               MC_CLIPBRD )
msgpick1(  WM_SIZEWAIT,                    MC_OTHER )
msgpick2(  WM_SIZING,                      MC_WINDOW )
msgpick1(  WM_SPOOLERSTATUS,               MC_SYSTEM )
msgpick2(  WM_STYLECHANGED,                MC_WINDOW )
msgpick2(  WM_STYLECHANGING,               MC_WINDOW )
msgpick1(  WM_SYNCPAINT,                   MC_WINDOW )
msgpick1(  WM_SYNCTASK,                    MC_OTHER )
msgpick1(  WM_SYSCHAR,                     MC_SYSTEM )
msgpick1(  WM_SYSCOLORCHANGE,              MC_SYSTEM )
msgpick1(  WM_SYSCOMMAND,                  MC_SYSTEM )
msgpick1(  WM_SYSDEADCHAR,                 MC_SYSTEM )
msgpick1(  WM_SYSKEYDOWN,                  MC_SYSTEM )
msgpick1(  WM_SYSKEYUP,                    MC_SYSTEM )
msgpick1(  WM_SYSTEMERROR,                 MC_SYSTEM )
msgpick1(  WM_SYSTIMER,                    MC_SYSTEM )
msgpick2(  WM_TCARD,                       MC_INPUT )
msgpick1x( 0x0040, "WM_TESTING(0x0040)",   MC_OTHER )
msgpick2(  WM_THEMECHANGED,                MC_SYSTEM )
msgpick1(  WM_TIMECHANGE,                  MC_SYSTEM )
msgpick1(  WM_TIMER,                       MC_SYSTEM )
msgpick2(  WM_UAHDESTROYWINDOW,            MC_WINDOW )
msgpick2(  WM_UAHDRAWMENU,                 MC_WINDOW )
msgpick2(  WM_UAHDRAWMENUITEM,             MC_WINDOW )
msgpick2(  WM_UAHINITMENU,                 MC_INIT )
msgpick2(  WM_UAHMEASUREMENUITEM,          MC_WINDOW )
msgpick2(  WM_UAHNCPAINTMENUPOPUP,         MC_WINDOW )
msgpick1(  WM_UNDO,                        MC_CLIPBRD )
msgpick2(  WM_UNICHAR,                     MC_INPUT )
msgpick2(  WM_UNINITMENUPOPUP,             MC_INIT )
msgpick2(  WM_UPDATEUISTATE,               MC_OTHER )
msgpick1(  WM_USER,                        MC_USER )
msgpick2(  WM_USERCHANGED,                 MC_SYSTEM )
msgpick1(  WM_VKEYTOITEM,                  MC_WINDOW )
msgpick1(  WM_VSCROLL,                     MC_INPUT )
msgpick1(  WM_VSCROLLCLIPBOARD,            MC_CLIPBRD )
msgpick1(  WM_WINDOWPOSCHANGED,            MC_WINDOW )
msgpick1(  WM_WINDOWPOSCHANGING,           MC_WINDOW )
msgpick1(  WM_WININICHANGE,                MC_SYSTEM )
msgpick2(  WM_WTSSESSION_CHANGE,           MC_SYSTEM )
msgpick2(  WM_XBUTTONDBLCLK,               MC_MOUSE )
msgpick2(  WM_XBUTTONDOWN,                 MC_MOUSE )
msgpick2(  WM_XBUTTONUP,                   MC_MOUSE )
msgpick1(  WM_YOMICHAR,                    MC_OTHER )