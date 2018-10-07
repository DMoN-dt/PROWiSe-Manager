/*
 * PROWiSe Manager
 * Window Styles Definition file 
 * * * * * * * * * * * * * * * * * * * * * * * * ******
 * This file is just a part of winuser.h and commctrl.h
 * You can define new styles in the appropriate manner.
 * Write OR'ed definitions before others.
 *
 * Don't modify, move or delete this comment block !
 *
*/

// Common Window Styles
//#define WS_OVERLAPPEDWINDOW	(0x00000000L | 0x00C00000L | 0x00080000L | 0x00040000L | 0x00020000L | 0x00010000L)
//#define WS_POPUPWINDOW	(0x80000000L | 0x00800000L | 0x00080000L)

#define WS_OVERLAPPED	0x00000000L
#define WS_POPUP	0x80000000L
#define WS_CHILD	0x40000000L //equal to WS_CHILDWINDOW
#define WS_MINIMIZE	0x20000000L
#define WS_VISIBLE	0x10000000L
#define WS_DISABLED	0x08000000L
#define WS_CLIPSIBLINGS	0x04000000L
#define WS_CLIPCHILDREN	0x02000000L
#define WS_MAXIMIZE	0x01000000L
#define WS_CAPTION	0x00C00000L// WS_BORDER | WS_DLGFRAME
#define WS_BORDER	0x00800000L
#define WS_DLGFRAME	0x00400000L
#define WS_VSCROLL	0x00200000L
#define WS_HSCROLL	0x00100000L
#define WS_SYSMENU	0x00080000L
#define WS_THICKFRAME	0x00040000L
#define WS_GROUP	0x00020000L
#define WS_TABSTOP	0x00010000L
#define WS_MINIMIZEBOX	0x00020000L
#define WS_MAXIMIZEBOX	0x00010000L

// Extended Window Styles
#define WS_EX_OVERLAPPEDWINDOW	(0x00000100L | 0x00000200L)
#define WS_EX_PALETTEWINDOW	(0x00000100L | 0x00000080L | 0x00000008L)
#define WS_EX_DLGMODALFRAME	0x00000001L
#define WS_EX_NOPARENTNOTIFY	0x00000004L
#define WS_EX_TOPMOST		0x00000008L
#define WS_EX_ACCEPTFILES	0x00000010L
#define WS_EX_TRANSPARENT	0x00000020L
#define WS_EX_MDICHILD		0x00000040L
#define WS_EX_TOOLWINDOW	0x00000080L
#define WS_EX_WINDOWEDGE	0x00000100L
#define WS_EX_CLIENTEDGE	0x00000200L
#define WS_EX_CONTEXTHELP	0x00000400L
#define WS_EX_RIGHT		0x00001000L
#define WS_EX_LEFT		0x00000000L
#define WS_EX_RTLREADING	0x00002000L
#define WS_EX_LTRREADING	0x00000000L
#define WS_EX_LEFTSCROLLBAR	0x00004000L
#define WS_EX_RIGHTSCROLLBAR	0x00000000L
#define WS_EX_CONTROLPARENT	0x00010000L
#define WS_EX_STATICEDGE	0x00020000L
#define WS_EX_APPWINDOW		0x00040000L
#define WS_EX_LAYERED		0x00080000
#define WS_EX_NOINHERITLAYOUT	0x00100000L // Disable inheritence of mirroring by children
#define WS_EX_LAYOUTRTL		0x00400000L // Right to left mirroring
#define WS_EX_COMPOSITED	0x02000000L
#define WS_EX_NOACTIVATE	0x08000000L

// Dialog
#define DS_SHELLFONT		(0x40L | 0x0008L)
#define DS_ABSALIGN		0x01L
#define DS_SYSMODAL		0x02L
#define DS_LOCALEDIT		0x20L
#define DS_SETFONT		0x40L
#define DS_MODALFRAME		0x80L
#define DS_NOIDLEMSG		0x100L
#define DS_SETFOREGROUND	0x200L
#define DS_3DLOOK		0x0004L
#define DS_FIXEDSYS		0x0008L
#define DS_NOFAILCREATE		0x0010L
#define DS_CONTROL		0x0400L
#define DS_CENTER		0x0800L
#define DS_CENTERMOUSE		0x1000L
#define DS_CONTEXTHELP		0x2000L

// Edit
#define ES_LEFT		0x0000L
#define ES_CENTER	0x0001L
#define ES_RIGHT	0x0002L
#define ES_MULTILINE	0x0004L
#define ES_UPPERCASE	0x0008L
#define ES_LOWERCASE	0x0010L
#define ES_PASSWORD	0x0020L
#define ES_AUTOVSCROLL	0x0040L
#define ES_AUTOHSCROLL	0x0080L
#define ES_NOHIDESEL	0x0100L
#define ES_OEMCONVERT	0x0400L
#define ES_READONLY	0x0800L
#define ES_WANTRETURN	0x1000L
#define ES_NUMBER	0x2000L

// Button
#define BS_AUTORADIOBUTTON	0x00000009L
#define BS_AUTO3STATE		0x00000006L
#define BS_AUTOCHECKBOX		0x00000003L

#define BS_PUSHBUTTON		0x00000000L
#define BS_DEFPUSHBUTTON	0x00000001L
#define BS_CHECKBOX		0x00000002L
#define BS_RADIOBUTTON		0x00000004L
#define BS_3STATE		0x00000005L
#define BS_GROUPBOX		0x00000007L
#define BS_USERBUTTON		0x00000008L
#define BS_OWNERDRAW		0x0000000BL
#define BS_LEFTTEXT		0x00000020L
#define BS_TEXT			0x00000000L
#define BS_ICON			0x00000040L
#define BS_BITMAP		0x00000080L
#define BS_LEFT			0x00000100L
#define BS_RIGHT		0x00000200L
#define BS_CENTER		0x00000300L
#define BS_TOP			0x00000400L
#define BS_BOTTOM		0x00000800L
#define BS_VCENTER		0x00000C00L
#define BS_PUSHLIKE		0x00001000L
#define BS_MULTILINE		0x00002000L
#define BS_NOTIFY		0x00004000L
#define BS_FLAT			0x00008000L

// Listbox
#define LBS_STANDARD		(0x0001L | 0x0002L | 0x00200000L | 0x00800000L)
#define LBS_NOTIFY		0x0001L
#define LBS_SORT		0x0002L
#define LBS_NOREDRAW		0x0004L
#define LBS_MULTIPLESEL		0x0008L
#define LBS_OWNERDRAWFIXED	0x0010L
#define LBS_OWNERDRAWVARIABLE	0x0020L
#define LBS_HASSTRINGS		0x0040L
#define LBS_USETABSTOPS		0x0080L
#define LBS_NOINTEGRALHEIGHT	0x0100L
#define LBS_MULTICOLUMN		0x0200L
#define LBS_WANTKEYBOARDINPUT	0x0400L
#define LBS_EXTENDEDSEL		0x0800L
#define LBS_DISABLENOSCROLL	0x1000L
#define LBS_NODATA		0x2000L
#define LBS_NOSEL		0x4000L

// Combo Box
#define CBS_DROPDOWNLIST	0x0003L

#define CBS_SIMPLE		0x0001L
#define CBS_DROPDOWN		0x0002L
#define CBS_OWNERDRAWFIXED	0x0010L
#define CBS_OWNERDRAWVARIABLE	0x0020L
#define CBS_AUTOHSCROLL		0x0040L
#define CBS_OEMCONVERT		0x0080L
#define CBS_SORT		0x0100L
#define CBS_HASSTRINGS		0x0200L
#define CBS_NOINTEGRALHEIGHT	0x0400L
#define CBS_DISABLENOSCROLL	0x0800L
#define CBS_UPPERCASE		0x2000L
#define CBS_LOWERCASE		0x4000L

// ComboBoxEx
#define CBES_EX_NOEDITIMAGE		0x00000001
#define CBES_EX_NOEDITIMAGEINDENT	0x00000002
#define CBES_EX_PATHWORDBREAKPROC	0x00000004
#define CBES_EX_NOSIZELIMIT		0x00000008
#define CBES_EX_CASESENSITIVE		0x00000010

// Scroll Bar
#define SBS_HORZ			0x0000L
#define SBS_VERT			0x0001L
#define SBS_TOPALIGN			0x0002L
#define SBS_LEFTALIGN			0x0002L
#define SBS_BOTTOMALIGN			0x0004L
#define SBS_RIGHTALIGN			0x0004L
#define SBS_SIZEBOXTOPLEFTALIGN		0x0002L
#define SBS_SIZEBOXBOTTOMRIGHTALIGN	0x0004L
#define SBS_SIZEBOX			0x0008L
#define SBS_SIZEGRIP			0x0010L

// Static
#define SS_LEFT			0x00000000L
#define SS_CENTER		0x00000001L
#define SS_RIGHT		0x00000002L
#define SS_ICON			0x00000003L
#define SS_BLACKRECT		0x00000004L
#define SS_GRAYRECT		0x00000005L
#define SS_WHITERECT		0x00000006L
#define SS_BLACKFRAME		0x00000007L
#define SS_GRAYFRAME		0x00000008L
#define SS_WHITEFRAME		0x00000009L
#define SS_USERITEM		0x0000000AL
#define SS_SIMPLE		0x0000000BL
#define SS_LEFTNOWORDWRAP	0x0000000CL
#define SS_OWNERDRAW		0x0000000DL
#define SS_BITMAP		0x0000000EL
#define SS_ENHMETAFILE		0x0000000FL
#define SS_ETCHEDHORZ		0x00000010L
#define SS_ETCHEDVERT		0x00000011L
#define SS_ETCHEDFRAME		0x00000012L
#define SS_TYPEMASK		0x0000001FL
#define SS_REALSIZECONTROL	0x00000040L
#define SS_NOPREFIX		0x00000080L
#define SS_NOTIFY		0x00000100L
#define SS_CENTERIMAGE		0x00000200L
#define SS_RIGHTJUST		0x00000400L
#define SS_REALSIZEIMAGE	0x00000800L
#define SS_SUNKEN		0x00001000L
#define SS_ENDELLIPSIS		0x00004000L
#define SS_PATHELLIPSIS		0x00008000L
#define SS_WORDELLIPSIS		0x0000C000L
#define SS_ELLIPSISMASK		0x0000C000L

// ListView
#define LVS_ICON		0x0000
#define LVS_REPORT		0x0001
#define LVS_SMALLICON		0x0002
#define LVS_LIST		0x0003
#define LVS_TYPEMASK		0x0003
#define LVS_SINGLESEL		0x0004
#define LVS_SHOWSELALWAYS	0x0008
#define LVS_SORTASCENDING	0x0010
#define LVS_SORTDESCENDING	0x0020
#define LVS_SHAREIMAGELISTS	0x0040
#define LVS_NOLABELWRAP		0x0080
#define LVS_AUTOARRANGE		0x0100
#define LVS_EDITLABELS		0x0200
#define LVS_OWNERDATA		0x1000
#define LVS_NOSCROLL		0x2000
#define LVS_TYPESTYLEMASK	0xfc00
#define LVS_ALIGNTOP		0x0000
#define LVS_ALIGNLEFT		0x0800
#define LVS_ALIGNMASK		0x0c00
#define LVS_OWNERDRAWFIXED	0x0400
#define LVS_NOCOLUMNHEADER	0x4000
#define LVS_NOSORTHEADER	0x8000

// Header
#define HDS_HORZ	0x0000
#define HDS_BUTTONS	0x0002
#define HDS_HOTTRACK	0x0004
#define HDS_HIDDEN	0x0008
#define HDS_DRAGDROP	0x0040
#define HDS_FULLDRAG	0x0080
#define HDS_FILTERBAR	0x0100
#define HDS_FLAT	0x0200

// TreeView
#define TVS_HASBUTTONS		0x0001
#define TVS_HASLINES		0x0002
#define TVS_LINESATROOT		0x0004
#define TVS_EDITLABELS		0x0008
#define TVS_DISABLEDRAGDROP	0x0010
#define TVS_SHOWSELALWAYS	0x0020
#define TVS_RTLREADING		0x0040
#define TVS_NOTOOLTIPS		0x0080
#define TVS_CHECKBOXES		0x0100
#define TVS_TRACKSELECT		0x0200
#define TVS_SINGLEEXPAND	0x0400
#define TVS_INFOTIP		0x0800
#define TVS_FULLROWSELECT	0x1000
#define TVS_NOSCROLL		0x2000
#define TVS_NONEVENHEIGHT	0x4000
#define TVS_NOHSCROLL		0x8000

// Tab
#define TCS_SCROLLOPPOSITE	0x0001
#define TCS_BOTTOM		0x0002
#define TCS_RIGHT		0x0002
#define TCS_MULTISELECT		0x0004
#define TCS_FLATBUTTONS		0x0008
#define TCS_FORCEICONLEFT	0x0010
#define TCS_FORCELABELLEFT	0x0020
#define TCS_HOTTRACK		0x0040
#define TCS_VERTICAL		0x0080
#define TCS_TABS		0x0000
#define TCS_BUTTONS		0x0100
#define TCS_SINGLELINE		0x0000
#define TCS_MULTILINE		0x0200
#define TCS_RIGHTJUSTIFY	0x0000
#define TCS_FIXEDWIDTH		0x0400
#define TCS_RAGGEDRIGHT		0x0800
#define TCS_FOCUSONBUTTONDOWN	0x1000
#define TCS_OWNERDRAWFIXED	0x2000
#define TCS_TOOLTIPS		0x4000
#define TCS_FOCUSNEVER		0x8000

// Pager
#define PGS_VERT	0x00000000
#define PGS_HORZ	0x00000001
#define PGS_AUTOSCROLL	0x00000002
#define PGS_DRAGNDROP	0x00000004

// Native Font
#define NFS_EDIT 		0x0001
#define NFS_STATIC		0x0002
#define NFS_LISTCOMBO		0x0004
#define NFS_BUTTON		0x0008
#define NFS_ALL			0x0010
#define NFS_USEFONTASSOC	0x0020

//ToolTip
#define TTS_ALWAYSTIP	0x01
#define TTS_NOPREFIX	0x02
#define TTS_NOANIMATE	0x10
#define TTS_NOFADE	0x20
#define TTS_BALLOON	0x40
#define TTS_CLOSE	0x80