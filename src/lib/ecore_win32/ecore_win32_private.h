/*
 * vim:ts=8:sw=3:sts=8:noexpandtab:cino=>5n-3f0^-2{2
 */

#ifndef __ECORE_WIN32_PRIVATE_H__
#define __ECORE_WIN32_PRIVATE_H__


#ifdef __cplusplus
extern "C" {
#endif


/* logging messages macros */
extern int _ecore_win32_log_dom_global;

#ifdef ECORE_WIN32_DEFAULT_LOG_COLOR
# undef ECORE_WIN32_DEFAULT_LOG_COLOR
#endif
#define ECORE_WIN32_DEFAULT_LOG_COLOR EINA_COLOR_LIGHTBLUE

#ifdef ERR
# undef ERR
#endif
#define ERR(...) EINA_LOG_DOM_ERR(_ecore_win32_log_dom_global , __VA_ARGS__)
#ifdef DBG
#undef DBG
#endif
#define DBG(...) EINA_LOG_DOM_DBG(_ecore_win32_log_dom_global , __VA_ARGS__)

#ifdef INF
#undef INF
#endif
#define INF(...) EINA_LOG_DOM_INFO(_ecore_win32_log_dom_global , __VA_ARGS__)

#define ECORE_WIN32_WINDOW_CLASS "Ecore_Win32_Window_Class"

typedef struct _Ecore_Win32_Callback_Data Ecore_Win32_Callback_Data;

struct _Ecore_Win32_Callback_Data
{
   RECT         update;
   HWND         window;
   unsigned int message;
   WPARAM       window_param;
   LPARAM       data_param;
   long         time;
   int          x;
   int          y;
};

struct _Ecore_Win32_Window
{
   HWND                   window;

   DWORD                  style;          /* used to go fullscreen to normal */
   RECT                   rect;           /* used to go fullscreen to normal */

   unsigned int           min_width;
   unsigned int           min_height;
   unsigned int           max_width;
   unsigned int           max_height;
   unsigned int           base_width;
   unsigned int           base_height;
   unsigned int           step_width;
   unsigned int           step_height;

   struct {
      unsigned int        iconified         : 1;
      unsigned int        modal             : 1;
      unsigned int        sticky            : 1;
      unsigned int        maximized_vert    : 1;
      unsigned int        maximized_horz    : 1;
      unsigned int        shaded            : 1;
      unsigned int        hidden            : 1;
      unsigned int        fullscreen        : 1;
      unsigned int        above             : 1;
      unsigned int        below             : 1;
      unsigned int        demands_attention : 1;
   } state;

   struct {
      unsigned int        desktop : 1;
      unsigned int        dock    : 1;
      unsigned int        toolbar : 1;
      unsigned int        menu    : 1;
      unsigned int        utility : 1;
      unsigned int        splash  : 1;
      unsigned int        dialog  : 1;
      unsigned int        normal  : 1;
   } type;

   unsigned int           pointer_is_in : 1;
   unsigned int           borderless    : 1;
   unsigned int           iconified     : 1;
   unsigned int           fullscreen    : 1;

   struct {
      unsigned short width;
      unsigned short height;
      unsigned char *mask;
      unsigned int   enabled : 1;
      unsigned int   layered : 1;
   } shape;

   void *dnd_drop_target;
};


extern HINSTANCE           _ecore_win32_instance;
extern double              _ecore_win32_double_click_time;
extern long                _ecore_win32_event_last_time;
extern Ecore_Win32_Window *_ecore_win32_event_last_window;


void  _ecore_win32_event_handle_key_press(Ecore_Win32_Callback_Data *msg, int is_keystroke);
void  _ecore_win32_event_handle_key_release(Ecore_Win32_Callback_Data *msg, int is_keystroke);
void  _ecore_win32_event_handle_button_press(Ecore_Win32_Callback_Data *msg, int button);
void  _ecore_win32_event_handle_button_release(Ecore_Win32_Callback_Data *msg, int button);
void  _ecore_win32_event_handle_motion_notify(Ecore_Win32_Callback_Data *msg);
void  _ecore_win32_event_handle_enter_notify(Ecore_Win32_Callback_Data *msg);
void  _ecore_win32_event_handle_leave_notify(Ecore_Win32_Callback_Data *msg);
void  _ecore_win32_event_handle_focus_in(Ecore_Win32_Callback_Data *msg);
void  _ecore_win32_event_handle_focus_out(Ecore_Win32_Callback_Data *msg);
void  _ecore_win32_event_handle_expose(Ecore_Win32_Callback_Data *msg);
void  _ecore_win32_event_handle_create_notify(Ecore_Win32_Callback_Data *msg);
void  _ecore_win32_event_handle_destroy_notify(Ecore_Win32_Callback_Data *msg);
void  _ecore_win32_event_handle_map_notify(Ecore_Win32_Callback_Data *msg);
void  _ecore_win32_event_handle_unmap_notify(Ecore_Win32_Callback_Data *msg);
void  _ecore_win32_event_handle_configure_notify(Ecore_Win32_Callback_Data *msg);
void  _ecore_win32_event_handle_resize(Ecore_Win32_Callback_Data *msg);
void  _ecore_win32_event_handle_delete_request(Ecore_Win32_Callback_Data *msg);

void *_ecore_win32_dnd_data_object_new(void *fmtetc, void *stgmeds, int count);
void _ecore_win32_dnd_data_object_free(void *data_object);
void *_ecore_win32_dnd_drop_source_new();
void _ecore_win32_dnd_drop_source_free(void *drop_source);
void *_ecore_win32_dnd_register_drop_window(HWND hwnd,
                                            Ecore_Win32_Dnd_DropTarget_Callback callback, void *ptr);
void _ecore_win32_dnd_unregister_drop_window(HWND hwnd, void *drop_target);


#ifdef __cplusplus
}
#endif


#endif /* __ECORE_WIN32_PRIVATE_H__ */
