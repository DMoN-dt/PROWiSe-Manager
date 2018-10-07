#define MAX_PATH_LENGTH 260
#define MAX_PATHBUF_LENGTH (MAX_PATH_LENGTH+1)

#define STATUSBAR_CPUUSAGE_ID 1
#define STATUSBAR_WINBOOT_ID 2
#define STATUSBAR_PANEINFO_ID 3

#ifndef CS_DROPSHADOW
 #define CS_DROPSHADOW 0x20000
#endif

#define RUS_LANGID 0x00535552//RUS\0
#define ENG_LANGID 0x00474E45//ENG\0

#define MAINWIN_MIN_WIDTH  560
#define MAINWIN_MIN_HEIGHT 450

#define FMSG_CallGLE 1
#define FMSG_NTSTATUS_CONVERT 2
#define FMSG_NO_SUCCESSINFO 4
#define FMSG_WRITE_LOG 8
#define FMSG_SHOW_MSGBOX 16
#define FMSG_HIDECODE 32
#define FMSG_ICONSTOP 64
#define FMSG_NO_INFO 128
#define FMSG_SMART_SHOWCODE     256

#define PINF_FLAG_HIDDENPROC		2
#define PINF_FLAG_INFORMED			4
#define PINF_FLAG_TERMINATED		8
#define PINF_FLAG_WOW_PROCESS		16
#define PINF_FLAG_WOW_TASK			32
#define PINF_FLAG_DONTSHOWPROPS		64
#define PINF_FLAG_SUSPENDED			128
#define PINF_FLAG_NEW_PROCESS		256
#define PINF_FLAG_CURRENT_USER		512
#define PINF_FLAG_UNBL_QUERY		1024//Unable to query general process info
#define PINF_FLAG_LIST_VISIBLE		2048//Included into listview
#define PINF_FLAG_UPDATE_CPU		0x10000//WORD-����� ������ ��������� ����
#define PINF_FLAG_SET_IMAGE			0x20000
#define PINF_FLAG_UPDATE_ITEM		0x40000
#define PINF_FLAG_READ_MEM_AGAIN	0x80000

#define PINF_PSEUDOPROCESS_ID_INT	0xEEE1FFFF//Hardware Interrupts
#define PINF_PSEUDOPROCESS_ID_DPC	0xEEE2FFFF//Deferred Procedure Calls

#define PINF_PSEUDOPROCESS_ID_LAST	0xEEE3FFFF//just last id

#define FLAG_DLL_RELOCATED 2

#define ERRSTRING_BORDER 2
#define ERRSTRING_ERRCODE_IF_NOSTRING 4
#define ERRSTRING_ALLOCATE_BUFFER 8

#define LISTHANDLES_FILTER_PROCESS 2
#define LISTHANDLES_LIST_ALL 4

#define LVS_MY_EXTENDED_STYLE LVS_EX_FULLROWSELECT|LVS_EX_HEADERDRAGDROP|LVS_EX_LABELTIP|LVS_EX_FLATSB
#define LVS_MY_EXTENDED_STYLE2 LVS_EX_FULLROWSELECT|LVS_EX_LABELTIP|LVS_EX_FLATSB

#define WM_MY_TRAYICON WM_USER+5
#define BTMPANE_UPDATE WM_USER+6
#define BTMPANE_SHOWPANE WM_USER+7
#define UPDATETHREAD_START WM_USER+8
#define UPDATETHREAD_STOP WM_USER+9
#define UPDATETHREAD_RESTART WM_USER+10
#define UPDATETHREAD_UPDATE WM_USER+11
#define UPDATETHREAD_EXECUTE WM_USER+12
#define UPDATETHREAD_SUSPEND WM_USER+14

#define CREATE_SRVGROUP_DIALOG WM_USER+13

#define BtmPane_OFF 0
#define DLLpane 1
#define HANDLEpane 2
#define DRIVERS_tab 3

#define ITEM_REGVALUE 2
#define ITEM_PHYSPATH 4
#define ITEM_CLSID 8
#define ITEM_1 16
#define ITEM_REGSUBKEY 32
#define ITEM_HEADER 64

//Extras List Commands
#define LIST_PIPES 0x02
#define LIST_MAILSLOTS 0x04

#define LIST_QUICK 0x08
#define LIST_FULL 0x10

#define MENU_STYLE_DEFAULT 0
#define MENU_STYLE_OFFICE_2000 1
#define MENU_STYLE_OFFICE_XP 2
#define MENU_STYLE_XNET 3
#define MENU_STYLE_XNET2 4

#define PRCCOLUMNS_COUNT 23
#define COLUMNS_COUNT PRCCOLUMNS_COUNT
#define DLLCOLUMNS_COUNT 8
#define WINCOLUMNS_COUNT 7
#define SRVCOLUMNS_COUNT 9
#define DRVCOLUMNS_COUNT 7

#define TAB_ENTRIES 6//TAB_ENTRIES on the main_win

#define TAB_PROCESSES 0
#define TAB_WINDOWS 1
#define TAB_SERVICES 2
#define TAB_DRIVERS 3
#define TAB_STARTUP 4
#define TAB_PERFORMANCE 5

#define UPDATESPEED_05s 1
#define UPDATESPEED_1s 2
#define UPDATESPEED_2s 4
#define UPDATESPEED_PAUSED 8

#define MEMORYTYPE_USAGE_COMMIT 1
#define MEMORYTYPE_USAGE_RAM 2

#define SCROLL_TO_ENDOFLIST 1
#define SCROLL_TO_LASTRUNNED 2

#define LNGFILE_OFFSET_LNGID 31
#define LNGFILE_OFFSET_TEXTDATA (4+LNGFILE_OFFSET_LNGID+(4*4))

#define SRVC_FILE_NOT_FOUND 2
#define SRVC_FILE_DLLSERVICE 4
#define SRVC_FILE_FOUND_NOTSURE 8
#define SRVC_REGWRITEDATE_VALID 0x01000000
#define SRVC_CREATEMODIFDATE_VALID 0x02000000

#define LOGON_CURRENT_USER 0
#define LOGON_SUCCESS_EXIT 1
#define LOGON_CANCEL_EXIT  2

#define GETMACHINEUSER_ERROR_SUCCESS         0x00
#define GETMACHINEUSER_ERROR_UNBLQUERYOWNER  0xF0
#define GETMACHINEUSER_ERROR_UNBLOPENTOKEN   0xF1
#define GETMACHINEUSER_ERROR_UNBLOPENPROCESS 0xF2
#define GETMACHINEUSER_ERROR_INVALIDPARAM    0xF3
#define GETMACHINEUSER_ERROR_UNKNOWNUSER     0xF4

#define SETTS_REPLACETASKMAN_ENABLE    1
#define SETTS_REPLACETASKMAN_SHOWLOGONALWAYS 2
#define SETTS_REPLACETASKMAN_SHOWLOGONIFNONADMIN 4
#define SETTS_REPLACETASKMAN_NOLOGONMASK (~(SETTS_REPLACETASKMAN_SHOWLOGONALWAYS|SETTS_REPLACETASKMAN_SHOWLOGONIFNONADMIN))