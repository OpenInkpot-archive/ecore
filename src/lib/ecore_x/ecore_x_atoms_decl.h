/* generic atoms */
EAPI Ecore_X_Atom ECORE_X_ATOM_ATOM                     = 0;
EAPI Ecore_X_Atom ECORE_X_ATOM_CARDINAL                 = 0;
EAPI Ecore_X_Atom ECORE_X_ATOM_COMPOUND_TEXT            = 0;
EAPI Ecore_X_Atom ECORE_X_ATOM_FILE_NAME                = 0;
EAPI Ecore_X_Atom ECORE_X_ATOM_STRING                   = 0;
EAPI Ecore_X_Atom ECORE_X_ATOM_TEXT                     = 0;
EAPI Ecore_X_Atom ECORE_X_ATOM_UTF8_STRING              = 0;
EAPI Ecore_X_Atom ECORE_X_ATOM_WINDOW                   = 0;

/* dnd atoms */
EAPI Ecore_X_Atom  ECORE_X_ATOM_SELECTION_PROP_XDND     = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_SELECTION_XDND          = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_AWARE              = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_ENTER              = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_TYPE_LIST          = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_POSITION           = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_ACTION_COPY        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_ACTION_MOVE        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_ACTION_PRIVATE     = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_ACTION_ASK         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_ACTION_LIST        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_ACTION_LINK        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_ACTION_DESCRIPTION = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_PROXY              = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_STATUS             = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_LEAVE              = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_DROP               = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_XDND_FINISHED           = 0;

/* dnd atoms that need to be exposed to the application interface */
EAPI Ecore_X_Atom  ECORE_X_DND_ACTION_COPY              = 0;
EAPI Ecore_X_Atom  ECORE_X_DND_ACTION_MOVE              = 0;
EAPI Ecore_X_Atom  ECORE_X_DND_ACTION_LINK              = 0;
EAPI Ecore_X_Atom  ECORE_X_DND_ACTION_ASK               = 0;
EAPI Ecore_X_Atom  ECORE_X_DND_ACTION_PRIVATE           = 0;

/* old E atom */
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_FRAME_SIZE            = 0;

/* old Gnome atom */
EAPI Ecore_X_Atom  ECORE_X_ATOM_WIN_LAYER               = 0;

/* ICCCM atoms */

/* ICCCM: client properties */
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_NAME                 = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_ICON_NAME            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_NORMAL_HINTS         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_SIZE_HINTS           = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_HINTS                = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_CLASS                = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_TRANSIENT_FOR        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_PROTOCOLS            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_COLORMAP_WINDOWS     = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_COMMAND              = 0; /* obsolete */
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_CLIENT_MACHINE       = 0; /* obsolete */

/* ICCCM: window manager properties */
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_STATE                = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_ICON_SIZE            = 0;

/* ICCCM: WM_STATE  property */
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_CHANGE_STATE         = 0;

/* ICCCM: WM_PROTOCOLS properties */
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_TAKE_FOCUS           = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_SAVE_YOURSELF        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_DELETE_WINDOW        = 0;

/* ICCCM: WM_COLORMAP properties */
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_COLORMAP_NOTIFY      = 0;

/* ICCCM: session management properties */
EAPI Ecore_X_Atom  ECORE_X_ATOM_SM_CLIENT_ID            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_CLIENT_LEADER        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_WM_WINDOW_ROLE          = 0;

/* Motif WM atom */
EAPI Ecore_X_Atom  ECORE_X_ATOM_MOTIF_WM_HINTS          = 0;

/* NetWM 1.3 atoms (http://standards.freedesktop.org/wm-spec/wm-spec-1.3.html) */

/*
 * NetWM: Root Window Properties and related messages (complete)
 */

EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_SUPPORTED                  = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_CLIENT_LIST                = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_CLIENT_LIST_STACKING       = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_NUMBER_OF_DESKTOPS         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_DESKTOP_GEOMETRY           = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_DESKTOP_VIEWPORT           = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_CURRENT_DESKTOP            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_DESKTOP_NAMES              = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_ACTIVE_WINDOW              = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WORKAREA                   = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_SUPPORTING_WM_CHECK        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_VIRTUAL_ROOTS              = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_DESKTOP_LAYOUT             = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_SHOWING_DESKTOP            = 0;

/*
 * NetWM: Other Root Window Messages (complete)
 */

/* pager */
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_CLOSE_WINDOW               = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_MOVERESIZE_WINDOW          = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_MOVERESIZE              = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_RESTACK_WINDOW             = 0;

EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_REQUEST_FRAME_EXTENTS      = 0;

/*
 * NetWM: Application Window Properties (complete)
 */

EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_NAME                    = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_VISIBLE_NAME            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ICON_NAME               = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_VISIBLE_ICON_NAME       = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_DESKTOP                 = 0;

/* window type */
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE               = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE_DESKTOP       = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE_DOCK          = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE_TOOLBAR       = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE_MENU          = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE_UTILITY       = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE_SPLASH        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE_DIALOG        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE_NORMAL        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE_DROPDOWN_MENU = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE_POPUP_MENU    = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE_TOOLTIP       = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE_NOTIFICATION  = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE_COMBO         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_TYPE_DND           = 0;

/* state */
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STATE                   = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STATE_MODAL             = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STATE_STICKY            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STATE_MAXIMIZED_VERT    = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STATE_MAXIMIZED_HORZ    = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STATE_SHADED            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STATE_SKIP_TASKBAR      = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STATE_SKIP_PAGER        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STATE_HIDDEN            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STATE_FULLSCREEN        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STATE_ABOVE             = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STATE_BELOW             = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STATE_DEMANDS_ATTENTION = 0;

/* allowed actions */
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ALLOWED_ACTIONS         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ACTION_MOVE             = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ACTION_RESIZE           = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ACTION_MINIMIZE         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ACTION_SHADE            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ACTION_STICK            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ACTION_MAXIMIZE_HORZ    = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ACTION_MAXIMIZE_VERT    = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ACTION_FULLSCREEN       = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ACTION_CHANGE_DESKTOP   = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ACTION_CLOSE            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ACTION_ABOVE            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ACTION_BELOW            = 0;

EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STRUT                   = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_STRUT_PARTIAL           = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ICON_GEOMETRY           = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_ICON                    = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_PID                     = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_HANDLED_ICONS           = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_USER_TIME               = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_STARTUP_ID                 = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_FRAME_EXTENTS              = 0;

/*
 * NetWM: Window Manager Protocols (complete)
 */

EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_PING                    = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_SYNC_REQUEST            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_SYNC_REQUEST_COUNTER    = 0;

/*
 * NetWM: Not in the spec
 */

EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_OPACITY          = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_SHADOW           = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_WM_WINDOW_SHADE            = 0;

/*
 * Startup Notification (http://standards.freedesktop.org/startup-notification-spec/startup-notification-0.1.txt)
 */

EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_STARTUP_INFO_BEGIN         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_NET_STARTUP_INFO               = 0;

/* selection atoms */
EAPI Ecore_X_Atom  ECORE_X_ATOM_SELECTION_TARGETS              = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_SELECTION_PRIMARY              = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_SELECTION_SECONDARY            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_SELECTION_CLIPBOARD            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_SELECTION_PROP_PRIMARY         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_SELECTION_PROP_SECONDARY       = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_SELECTION_PROP_CLIPBOARD       = 0;

/* currently E specific virtual keyboard extension, aim to submit to netwm spec
 * later */

EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD             = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_STATE       = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_ON          = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_OFF         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_ALPHA       = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_NUMERIC     = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_PIN         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_PHONE_NUMBER= 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_HEX         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_TERMINAL    = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_PASSWORD    = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_IP          = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_HOST        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_FILE        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_URL         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_KEYPAD      = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_VIRTUAL_KEYBOARD_J2ME        = 0;

/* currently E specific illume extension */
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_ZONE                  = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_ZONE_LIST             = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_CONFORMANT            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_MODE                  = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_MODE_SINGLE           = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_MODE_DUAL_TOP         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_MODE_DUAL_LEFT        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_FOCUS_BACK            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_FOCUS_FORWARD         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_FOCUS_HOME            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_CLOSE                 = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_HOME_NEW              = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_HOME_DEL              = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_DRAG                  = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_DRAG_LOCKED           = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_DRAG_START            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_DRAG_END              = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_INDICATOR_GEOMETRY    = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_SOFTKEY_GEOMETRY      = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_KEYBOARD_GEOMETRY     = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_QUICKPANEL            = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_QUICKPANEL_STATE      = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_QUICKPANEL_STATE_TOGGLE    = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_QUICKPANEL_ON         = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_QUICKPANEL_OFF        = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_QUICKPANEL_PRIORITY_MAJOR  = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_QUICKPANEL_PRIORITY_MINOR  = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_QUICKPANEL_ZONE       = 0;
EAPI Ecore_X_Atom  ECORE_X_ATOM_E_ILLUME_QUICKPANEL_POSITION_UPDATE = 0;


EAPI Ecore_X_Atom ECORE_X_ATOM_E_COMP_SYNC_COUNTER = 0;
EAPI Ecore_X_Atom ECORE_X_ATOM_E_COMP_SYNC_DRAW_DONE = 0;
EAPI Ecore_X_Atom ECORE_X_ATOM_E_COMP_SYNC_SUPPORTED = 0;
EAPI Ecore_X_Atom ECORE_X_ATOM_E_COMP_SYNC_BEGIN = 0;
EAPI Ecore_X_Atom ECORE_X_ATOM_E_COMP_SYNC_END = 0;
EAPI Ecore_X_Atom ECORE_X_ATOM_E_COMP_SYNC_CANCEL = 0;

EAPI Ecore_X_Atom ECORE_X_ATOM_E_COMP_FLUSH = 0;
EAPI Ecore_X_Atom ECORE_X_ATOM_E_COMP_DUMP = 0;
