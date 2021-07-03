/* -*-C-*- */

#include <mit-scheme.h>

/* Prefix */
#include "x11-shim.h"
/* End Prefix */

SCM
Scm_continue_IsModifierKey (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_IsModifierKey);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_IsModifierKey (void)
{
  /* Declare. */
  int ret0;
  KeySym keysym;

  /* Init. */
  check_number_of_args (2);
  keysym = arg_long (2);

  /* Call. */
  callout_seal (&Scm_continue_IsModifierKey);
  ret0 = IsModifierKey (keysym);

  /* Save. */
  callout_unseal (&Scm_continue_IsModifierKey);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_IsModifierKey);
}

SCM
Scm_continue_XFree (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_XFree);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_XFree (void)
{
  /* Declare. */
  int ret0;
  void * data;

  /* Init. */
  check_number_of_args (2);
  data = (void *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_XFree);
  ret0 = XFree (data);

  /* Save. */
  callout_unseal (&Scm_continue_XFree);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_XFree);
}

SCM
Scm_continue_XFreeFontNames (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_XFreeFontNames);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_XFreeFontNames (void)
{
  /* Declare. */
  int ret0;
  char * * list;

  /* Init. */
  check_number_of_args (2);
  list = (char * *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_XFreeFontNames);
  ret0 = XFreeFontNames (list);

  /* Save. */
  callout_unseal (&Scm_continue_XFreeFontNames);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_XFreeFontNames);
}

SCM
Scm_continue_allocate_x_visual (void)
{
  /* Declare. */
  char * tos0;
  struct xvisual * ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_allocate_x_visual);
  CSTACK_LPOP (struct xvisual *, ret0, tos0);

  /* Return. */
  ret0s = pointer_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_allocate_x_visual (void)
{
  /* Declare. */
  struct xvisual * ret0;
  Visual * visual;

  /* Init. */
  check_number_of_args (3);
  visual = (Visual *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_allocate_x_visual);
  ret0 = allocate_x_visual (visual);

  /* Save. */
  callout_unseal (&Scm_continue_allocate_x_visual);
  CSTACK_PUSH (struct xvisual *, ret0);

  return callout_continue (&Scm_continue_allocate_x_visual);
}

SCM
Scm_continue_x_visual_deallocate (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_visual_deallocate);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_visual_deallocate (void)
{
  /* Declare. */
  struct xvisual * xv;

  /* Init. */
  check_number_of_args (2);
  xv = (struct xvisual *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_visual_deallocate);
  x_visual_deallocate (xv);

  /* Save. */
  callout_unseal (&Scm_continue_x_visual_deallocate);

  return callout_continue (&Scm_continue_x_visual_deallocate);
}

SCM
Scm_continue_x_close_display (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_close_display);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_close_display (void)
{
  /* Declare. */
  struct xdisplay * xd;

  /* Init. */
  check_number_of_args (2);
  xd = (struct xdisplay *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_close_display);
  x_close_display (xd);

  /* Save. */
  callout_unseal (&Scm_continue_x_close_display);

  return callout_continue (&Scm_continue_x_close_display);
}

SCM
Scm_continue_x_close_all_displays (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_close_all_displays);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_close_all_displays (void)
{
  /* Declare. */

  /* Init. */
  check_number_of_args (1);

  /* Call. */
  callout_seal (&Scm_continue_x_close_all_displays);
  x_close_all_displays ();

  /* Save. */
  callout_unseal (&Scm_continue_x_close_all_displays);

  return callout_continue (&Scm_continue_x_close_all_displays);
}

SCM
Scm_continue_x_window_set_input_hint (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_input_hint);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_input_hint (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  int input_hint;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  input_hint = arg_long (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_input_hint);
  ret0 = x_window_set_input_hint (xw, input_hint);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_input_hint);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_window_set_input_hint);
}

SCM
Scm_continue_x_window_set_name (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_name);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_name (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  char const * name;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  name = (char const *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_name);
  ret0 = x_window_set_name (xw, name);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_name);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_window_set_name);
}

SCM
Scm_continue_x_window_set_icon_name (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_icon_name);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_icon_name (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  char const * name;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  name = (char const *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_icon_name);
  ret0 = x_window_set_icon_name (xw, name);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_icon_name);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_window_set_icon_name);
}

SCM
Scm_continue_x_event_delete_window_p (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_event_delete_window_p);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_event_delete_window_p (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  XEvent * event;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  event = (XEvent *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_event_delete_window_p);
  ret0 = x_event_delete_window_p (xw, event);

  /* Save. */
  callout_unseal (&Scm_continue_x_event_delete_window_p);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_event_delete_window_p);
}

SCM
Scm_continue_x_event_take_focus_p (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_event_take_focus_p);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_event_take_focus_p (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  XEvent * event;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  event = (XEvent *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_event_take_focus_p);
  ret0 = x_event_take_focus_p (xw, event);

  /* Save. */
  callout_unseal (&Scm_continue_x_event_take_focus_p);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_event_take_focus_p);
}

SCM
Scm_continue_x_event_take_focus_time (void)
{
  /* Declare. */
  char * tos0;
  Time ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_event_take_focus_time);
  CSTACK_LPOP (Time, ret0, tos0);

  /* Return. */
  ret0s = ulong_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_event_take_focus_time (void)
{
  /* Declare. */
  Time ret0;
  XEvent * event;

  /* Init. */
  check_number_of_args (2);
  event = (XEvent *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_event_take_focus_time);
  ret0 = x_event_take_focus_time (event);

  /* Save. */
  callout_unseal (&Scm_continue_x_event_take_focus_time);
  CSTACK_PUSH (Time, ret0);

  return callout_continue (&Scm_continue_x_event_take_focus_time);
}

SCM
Scm_continue_x_lookup_string (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_lookup_string);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_lookup_string (void)
{
  /* Declare. */
  int ret0;
  XKeyEvent * event;
  char * buffer_return;
  int bytes_buffer;
  KeySym * keysym_return;

  /* Init. */
  check_number_of_args (5);
  event = (XKeyEvent *) arg_pointer (2);
  buffer_return = (char *) arg_pointer (3);
  bytes_buffer = arg_long (4);
  keysym_return = (KeySym *) arg_pointer (5);

  /* Call. */
  callout_seal (&Scm_continue_x_lookup_string);
  ret0 = x_lookup_string (event, buffer_return, bytes_buffer, keysym_return);

  /* Save. */
  callout_unseal (&Scm_continue_x_lookup_string);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_lookup_string);
}

SCM
Scm_continue_x_modifier_mask_to_bucky_bits (void)
{
  /* Declare. */
  char * tos0;
  unsigned long ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_modifier_mask_to_bucky_bits);
  CSTACK_LPOP (unsigned long, ret0, tos0);

  /* Return. */
  ret0s = ulong_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_modifier_mask_to_bucky_bits (void)
{
  /* Declare. */
  unsigned long ret0;
  unsigned int mask;
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (3);
  mask = arg_ulong (2);
  xw = (struct xwindow *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_modifier_mask_to_bucky_bits);
  ret0 = x_modifier_mask_to_bucky_bits (mask, xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_modifier_mask_to_bucky_bits);
  CSTACK_PUSH (unsigned long, ret0);

  return callout_continue (&Scm_continue_x_modifier_mask_to_bucky_bits);
}

SCM
Scm_continue_x_open_display (void)
{
  /* Declare. */
  char * tos0;
  struct xdisplay * ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_open_display);
  CSTACK_LPOP (struct xdisplay *, ret0, tos0);

  /* Return. */
  ret0s = pointer_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_open_display (void)
{
  /* Declare. */
  struct xdisplay * ret0;
  char * display_name;

  /* Init. */
  check_number_of_args (3);
  display_name = (char *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_open_display);
  ret0 = x_open_display (display_name);

  /* Save. */
  callout_unseal (&Scm_continue_x_open_display);
  CSTACK_PUSH (struct xdisplay *, ret0);

  return callout_continue (&Scm_continue_x_open_display);
}

SCM
Scm_continue_x_display_get_size (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_display_get_size);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_display_get_size (void)
{
  /* Declare. */
  struct xdisplay * xd;
  long screen;
  int * results;

  /* Init. */
  check_number_of_args (4);
  xd = (struct xdisplay *) arg_pointer (2);
  screen = arg_long (3);
  results = (int *) arg_pointer (4);

  /* Call. */
  callout_seal (&Scm_continue_x_display_get_size);
  x_display_get_size (xd, screen, results);

  /* Save. */
  callout_unseal (&Scm_continue_x_display_get_size);

  return callout_continue (&Scm_continue_x_display_get_size);
}

SCM
Scm_continue_x_close_window (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_close_window);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_close_window (void)
{
  /* Declare. */
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_close_window);
  x_close_window (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_close_window);

  return callout_continue (&Scm_continue_x_close_window);
}

SCM
Scm_continue_x_set_default_font (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_set_default_font);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_set_default_font (void)
{
  /* Declare. */
  int ret0;
  struct xdisplay * xd;
  char const * name;

  /* Init. */
  check_number_of_args (3);
  xd = (struct xdisplay *) arg_pointer (2);
  name = (char const *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_set_default_font);
  ret0 = x_set_default_font (xd, name);

  /* Save. */
  callout_unseal (&Scm_continue_x_set_default_font);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_set_default_font);
}

SCM
Scm_continue_x_display_descriptor (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_display_descriptor);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_display_descriptor (void)
{
  /* Declare. */
  int ret0;
  struct xdisplay * xd;

  /* Init. */
  check_number_of_args (2);
  xd = (struct xdisplay *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_display_descriptor);
  ret0 = x_display_descriptor (xd);

  /* Save. */
  callout_unseal (&Scm_continue_x_display_descriptor);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_display_descriptor);
}

SCM
Scm_continue_x_max_request_size (void)
{
  /* Declare. */
  char * tos0;
  long ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_max_request_size);
  CSTACK_LPOP (long, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_max_request_size (void)
{
  /* Declare. */
  long ret0;
  struct xdisplay * xd;

  /* Init. */
  check_number_of_args (2);
  xd = (struct xdisplay *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_max_request_size);
  ret0 = x_max_request_size (xd);

  /* Save. */
  callout_unseal (&Scm_continue_x_max_request_size);
  CSTACK_PUSH (long, ret0);

  return callout_continue (&Scm_continue_x_max_request_size);
}

SCM
Scm_continue_x_display_process_events (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_display_process_events);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_display_process_events (void)
{
  /* Declare. */
  int ret0;
  struct xdisplay * xd;
  XEvent * event;
  struct xwindow * * xw_ret;

  /* Init. */
  check_number_of_args (4);
  xd = (struct xdisplay *) arg_pointer (2);
  event = (XEvent *) arg_pointer (3);
  xw_ret = (struct xwindow * *) arg_pointer (4);

  /* Call. */
  callout_seal (&Scm_continue_x_display_process_events);
  ret0 = x_display_process_events (xd, event, xw_ret);

  /* Save. */
  callout_unseal (&Scm_continue_x_display_process_events);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_display_process_events);
}

SCM
Scm_continue_x_select_input (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_select_input);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_select_input (void)
{
  /* Declare. */
  struct xdisplay * xd;
  Window window;
  long mask;

  /* Init. */
  check_number_of_args (4);
  xd = (struct xdisplay *) arg_pointer (2);
  window = arg_ulong (3);
  mask = arg_long (4);

  /* Call. */
  callout_seal (&Scm_continue_x_select_input);
  x_select_input (xd, window, mask);

  /* Save. */
  callout_unseal (&Scm_continue_x_select_input);

  return callout_continue (&Scm_continue_x_select_input);
}

SCM
Scm_continue_x_window_event_mask (void)
{
  /* Declare. */
  char * tos0;
  long ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_event_mask);
  CSTACK_LPOP (long, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_event_mask (void)
{
  /* Declare. */
  long ret0;
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_window_event_mask);
  ret0 = x_window_event_mask (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_event_mask);
  CSTACK_PUSH (long, ret0);

  return callout_continue (&Scm_continue_x_window_event_mask);
}

SCM
Scm_continue_x_window_set_event_mask (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_event_mask);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_event_mask (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  long mask;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  mask = arg_long (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_event_mask);
  ret0 = x_window_set_event_mask (xw, mask);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_event_mask);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_window_set_event_mask);
}

SCM
Scm_continue_x_window_or_event_mask (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_or_event_mask);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_or_event_mask (void)
{
  /* Declare. */
  struct xwindow * xw;
  long mask;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  mask = arg_long (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_or_event_mask);
  x_window_or_event_mask (xw, mask);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_or_event_mask);

  return callout_continue (&Scm_continue_x_window_or_event_mask);
}

SCM
Scm_continue_x_window_andc_event_mask (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_andc_event_mask);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_andc_event_mask (void)
{
  /* Declare. */
  struct xwindow * xw;
  long mask;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  mask = arg_long (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_andc_event_mask);
  x_window_andc_event_mask (xw, mask);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_andc_event_mask);

  return callout_continue (&Scm_continue_x_window_andc_event_mask);
}

SCM
Scm_continue_x_window_display (void)
{
  /* Declare. */
  char * tos0;
  struct xdisplay * ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_display);
  CSTACK_LPOP (struct xdisplay *, ret0, tos0);

  /* Return. */
  ret0s = pointer_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_display (void)
{
  /* Declare. */
  struct xdisplay * ret0;
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_display);
  ret0 = x_window_display (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_display);
  CSTACK_PUSH (struct xdisplay *, ret0);

  return callout_continue (&Scm_continue_x_window_display);
}

SCM
Scm_continue_x_window_screen_number (void)
{
  /* Declare. */
  char * tos0;
  long ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_screen_number);
  CSTACK_LPOP (long, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_screen_number (void)
{
  /* Declare. */
  long ret0;
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_window_screen_number);
  ret0 = x_window_screen_number (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_screen_number);
  CSTACK_PUSH (long, ret0);

  return callout_continue (&Scm_continue_x_window_screen_number);
}

SCM
Scm_continue_x_window_x_size (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_x_size);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_x_size (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_window_x_size);
  ret0 = x_window_x_size (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_x_size);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_window_x_size);
}

SCM
Scm_continue_x_window_y_size (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_y_size);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_y_size (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_window_y_size);
  ret0 = x_window_y_size (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_y_size);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_window_y_size);
}

SCM
Scm_continue_x_window_beep (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_beep);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_beep (void)
{
  /* Declare. */
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_window_beep);
  x_window_beep (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_beep);

  return callout_continue (&Scm_continue_x_window_beep);
}

SCM
Scm_continue_x_window_clear (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_clear);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_clear (void)
{
  /* Declare. */
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_window_clear);
  x_window_clear (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_clear);

  return callout_continue (&Scm_continue_x_window_clear);
}

SCM
Scm_continue_x_display_flush (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_display_flush);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_display_flush (void)
{
  /* Declare. */
  struct xdisplay * xd;

  /* Init. */
  check_number_of_args (2);
  xd = (struct xdisplay *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_display_flush);
  x_display_flush (xd);

  /* Save. */
  callout_unseal (&Scm_continue_x_display_flush);

  return callout_continue (&Scm_continue_x_display_flush);
}

SCM
Scm_continue_x_window_flush (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_flush);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_flush (void)
{
  /* Declare. */
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_window_flush);
  x_window_flush (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_flush);

  return callout_continue (&Scm_continue_x_window_flush);
}

SCM
Scm_continue_x_display_sync (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_display_sync);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_display_sync (void)
{
  /* Declare. */
  struct xdisplay * xd;
  Bool discard;

  /* Init. */
  check_number_of_args (3);
  xd = (struct xdisplay *) arg_pointer (2);
  discard = arg_long (3);

  /* Call. */
  callout_seal (&Scm_continue_x_display_sync);
  x_display_sync (xd, discard);

  /* Save. */
  callout_unseal (&Scm_continue_x_display_sync);

  return callout_continue (&Scm_continue_x_display_sync);
}

SCM
Scm_continue_x_display_get_default (void)
{
  /* Declare. */
  char * tos0;
  char * ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_display_get_default);
  CSTACK_LPOP (char *, ret0, tos0);

  /* Return. */
  ret0s = pointer_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_display_get_default (void)
{
  /* Declare. */
  char * ret0;
  struct xdisplay * xd;
  char * resource_name;
  char * class_name;

  /* Init. */
  check_number_of_args (5);
  xd = (struct xdisplay *) arg_pointer (3);
  resource_name = (char *) arg_pointer (4);
  class_name = (char *) arg_pointer (5);

  /* Call. */
  callout_seal (&Scm_continue_x_display_get_default);
  ret0 = x_display_get_default (xd, resource_name, class_name);

  /* Save. */
  callout_unseal (&Scm_continue_x_display_get_default);
  CSTACK_PUSH (char *, ret0);

  return callout_continue (&Scm_continue_x_display_get_default);
}

SCM
Scm_continue_x_window_query_pointer (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_query_pointer);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_query_pointer (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  int * result;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  result = (int *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_query_pointer);
  ret0 = x_window_query_pointer (xw, result);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_query_pointer);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_window_query_pointer);
}

SCM
Scm_continue_x_window_id (void)
{
  /* Declare. */
  char * tos0;
  unsigned long ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_id);
  CSTACK_LPOP (unsigned long, ret0, tos0);

  /* Return. */
  ret0s = ulong_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_id (void)
{
  /* Declare. */
  unsigned long ret0;
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_window_id);
  ret0 = x_window_id (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_id);
  CSTACK_PUSH (unsigned long, ret0);

  return callout_continue (&Scm_continue_x_window_id);
}

SCM
Scm_continue_x_window_set_foreground_color_pixel (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_foreground_color_pixel);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_foreground_color_pixel (void)
{
  /* Declare. */
  struct xwindow * xw;
  unsigned long pixel;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  pixel = arg_ulong (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_foreground_color_pixel);
  x_window_set_foreground_color_pixel (xw, pixel);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_foreground_color_pixel);

  return callout_continue (&Scm_continue_x_window_set_foreground_color_pixel);
}

SCM
Scm_continue_x_window_set_foreground_color_name (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_foreground_color_name);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_foreground_color_name (void)
{
  /* Declare. */
  struct xwindow * xw;
  char * color;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  color = (char *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_foreground_color_name);
  x_window_set_foreground_color_name (xw, color);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_foreground_color_name);

  return callout_continue (&Scm_continue_x_window_set_foreground_color_name);
}

SCM
Scm_continue_x_window_set_background_color_pixel (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_background_color_pixel);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_background_color_pixel (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  unsigned long pixel;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  pixel = arg_ulong (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_background_color_pixel);
  ret0 = x_window_set_background_color_pixel (xw, pixel);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_background_color_pixel);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_window_set_background_color_pixel);
}

SCM
Scm_continue_x_window_set_background_color_name (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_background_color_name);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_background_color_name (void)
{
  /* Declare. */
  struct xwindow * xw;
  char * color;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  color = (char *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_background_color_name);
  x_window_set_background_color_name (xw, color);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_background_color_name);

  return callout_continue (&Scm_continue_x_window_set_background_color_name);
}

SCM
Scm_continue_x_window_set_border_color_pixel (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_border_color_pixel);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_border_color_pixel (void)
{
  /* Declare. */
  struct xwindow * xw;
  unsigned long pixel;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  pixel = arg_ulong (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_border_color_pixel);
  x_window_set_border_color_pixel (xw, pixel);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_border_color_pixel);

  return callout_continue (&Scm_continue_x_window_set_border_color_pixel);
}

SCM
Scm_continue_x_window_set_border_color_name (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_border_color_name);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_border_color_name (void)
{
  /* Declare. */
  struct xwindow * xw;
  char * color;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  color = (char *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_border_color_name);
  x_window_set_border_color_name (xw, color);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_border_color_name);

  return callout_continue (&Scm_continue_x_window_set_border_color_name);
}

SCM
Scm_continue_x_window_set_cursor_color_pixel (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_cursor_color_pixel);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_cursor_color_pixel (void)
{
  /* Declare. */
  struct xwindow * xw;
  unsigned long pixel;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  pixel = arg_ulong (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_cursor_color_pixel);
  x_window_set_cursor_color_pixel (xw, pixel);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_cursor_color_pixel);

  return callout_continue (&Scm_continue_x_window_set_cursor_color_pixel);
}

SCM
Scm_continue_x_window_set_cursor_color_name (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_cursor_color_name);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_cursor_color_name (void)
{
  /* Declare. */
  struct xwindow * xw;
  char * color;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  color = (char *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_cursor_color_name);
  x_window_set_cursor_color_name (xw, color);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_cursor_color_name);

  return callout_continue (&Scm_continue_x_window_set_cursor_color_name);
}

SCM
Scm_continue_x_window_set_mouse_color_pixel (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_mouse_color_pixel);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_mouse_color_pixel (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  unsigned long pixel;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  pixel = arg_ulong (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_mouse_color_pixel);
  ret0 = x_window_set_mouse_color_pixel (xw, pixel);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_mouse_color_pixel);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_window_set_mouse_color_pixel);
}

SCM
Scm_continue_x_window_set_mouse_color_name (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_mouse_color_name);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_mouse_color_name (void)
{
  /* Declare. */
  struct xwindow * xw;
  char * color;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  color = (char *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_mouse_color_name);
  x_window_set_mouse_color_name (xw, color);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_mouse_color_name);

  return callout_continue (&Scm_continue_x_window_set_mouse_color_name);
}

SCM
Scm_continue_x_window_set_mouse_shape (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_mouse_shape);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_mouse_shape (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  int shape;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  shape = arg_long (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_mouse_shape);
  ret0 = x_window_set_mouse_shape (xw, shape);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_mouse_shape);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_window_set_mouse_shape);
}

SCM
Scm_continue_x_window_set_font (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_font);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_font (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  char * font_name;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  font_name = (char *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_font);
  ret0 = x_window_set_font (xw, font_name);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_font);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_window_set_font);
}

SCM
Scm_continue_x_window_set_border_width (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_border_width);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_border_width (void)
{
  /* Declare. */
  struct xwindow * xw;
  unsigned int border_width;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  border_width = arg_ulong (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_border_width);
  x_window_set_border_width (xw, border_width);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_border_width);

  return callout_continue (&Scm_continue_x_window_set_border_width);
}

SCM
Scm_continue_x_window_set_internal_border_width (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_internal_border_width);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_internal_border_width (void)
{
  /* Declare. */
  struct xwindow * xw;
  unsigned int internal_border_width;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  internal_border_width = arg_ulong (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_internal_border_width);
  x_window_set_internal_border_width (xw, internal_border_width);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_internal_border_width);

  return callout_continue (&Scm_continue_x_window_set_internal_border_width);
}

SCM
Scm_continue_x_window_set_input_focus (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_input_focus);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_input_focus (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  Time time;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  time = arg_ulong (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_input_focus);
  ret0 = x_window_set_input_focus (xw, time);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_input_focus);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_window_set_input_focus);
}

SCM
Scm_continue_x_window_map (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_map);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_map (void)
{
  /* Declare. */
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_window_map);
  x_window_map (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_map);

  return callout_continue (&Scm_continue_x_window_map);
}

SCM
Scm_continue_x_window_iconify (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_iconify);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_iconify (void)
{
  /* Declare. */
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_window_iconify);
  x_window_iconify (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_iconify);

  return callout_continue (&Scm_continue_x_window_iconify);
}

SCM
Scm_continue_x_window_withdraw (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_withdraw);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_withdraw (void)
{
  /* Declare. */
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_window_withdraw);
  x_window_withdraw (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_withdraw);

  return callout_continue (&Scm_continue_x_window_withdraw);
}

SCM
Scm_continue_x_window_set_size (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_size);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_size (void)
{
  /* Declare. */
  struct xwindow * xw;
  int width;
  int height;

  /* Init. */
  check_number_of_args (4);
  xw = (struct xwindow *) arg_pointer (2);
  width = arg_long (3);
  height = arg_long (4);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_size);
  x_window_set_size (xw, width, height);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_size);

  return callout_continue (&Scm_continue_x_window_set_size);
}

SCM
Scm_continue_x_window_raise (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_raise);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_raise (void)
{
  /* Declare. */
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_window_raise);
  x_window_raise (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_raise);

  return callout_continue (&Scm_continue_x_window_raise);
}

SCM
Scm_continue_x_window_lower (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_lower);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_lower (void)
{
  /* Declare. */
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_window_lower);
  x_window_lower (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_lower);

  return callout_continue (&Scm_continue_x_window_lower);
}

SCM
Scm_continue_x_window_get_size (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_get_size);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_get_size (void)
{
  /* Declare. */
  struct xwindow * xw;
  int * dimens;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  dimens = (int *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_get_size);
  x_window_get_size (xw, dimens);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_get_size);

  return callout_continue (&Scm_continue_x_window_get_size);
}

SCM
Scm_continue_x_window_get_position (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_get_position);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_get_position (void)
{
  /* Declare. */
  struct xwindow * xw;
  int * coord_return;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  coord_return = (int *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_get_position);
  x_window_get_position (xw, coord_return);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_get_position);

  return callout_continue (&Scm_continue_x_window_get_position);
}

SCM
Scm_continue_x_window_set_position (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_set_position);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_set_position (void)
{
  /* Declare. */
  struct xwindow * xw;
  int x;
  int y;

  /* Init. */
  check_number_of_args (4);
  xw = (struct xwindow *) arg_pointer (2);
  x = arg_long (3);
  y = arg_long (4);

  /* Call. */
  callout_seal (&Scm_continue_x_window_set_position);
  x_window_set_position (xw, x, y);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_set_position);

  return callout_continue (&Scm_continue_x_window_set_position);
}

SCM
Scm_continue_x_font_structure_by_name (void)
{
  /* Declare. */
  char * tos0;
  XFontStruct * ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_font_structure_by_name);
  CSTACK_LPOP (XFontStruct *, ret0, tos0);

  /* Return. */
  ret0s = pointer_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_font_structure_by_name (void)
{
  /* Declare. */
  XFontStruct * ret0;
  struct xdisplay * xd;
  char const * font_name;

  /* Init. */
  check_number_of_args (4);
  xd = (struct xdisplay *) arg_pointer (3);
  font_name = (char const *) arg_pointer (4);

  /* Call. */
  callout_seal (&Scm_continue_x_font_structure_by_name);
  ret0 = x_font_structure_by_name (xd, font_name);

  /* Save. */
  callout_unseal (&Scm_continue_x_font_structure_by_name);
  CSTACK_PUSH (XFontStruct *, ret0);

  return callout_continue (&Scm_continue_x_font_structure_by_name);
}

SCM
Scm_continue_x_font_structure_by_id (void)
{
  /* Declare. */
  char * tos0;
  XFontStruct * ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_font_structure_by_id);
  CSTACK_LPOP (XFontStruct *, ret0, tos0);

  /* Return. */
  ret0s = pointer_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_font_structure_by_id (void)
{
  /* Declare. */
  XFontStruct * ret0;
  struct xdisplay * xd;
  XID id;

  /* Init. */
  check_number_of_args (4);
  xd = (struct xdisplay *) arg_pointer (3);
  id = arg_ulong (4);

  /* Call. */
  callout_seal (&Scm_continue_x_font_structure_by_id);
  ret0 = x_font_structure_by_id (xd, id);

  /* Save. */
  callout_unseal (&Scm_continue_x_font_structure_by_id);
  CSTACK_PUSH (XFontStruct *, ret0);

  return callout_continue (&Scm_continue_x_font_structure_by_id);
}

SCM
Scm_continue_x_free_font (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_free_font);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_free_font (void)
{
  /* Declare. */
  struct xdisplay * xd;
  XFontStruct * font;

  /* Init. */
  check_number_of_args (3);
  xd = (struct xdisplay *) arg_pointer (2);
  font = (XFontStruct *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_free_font);
  x_free_font (xd, font);

  /* Save. */
  callout_unseal (&Scm_continue_x_free_font);

  return callout_continue (&Scm_continue_x_free_font);
}

SCM
Scm_continue_x_list_fonts (void)
{
  /* Declare. */
  char * tos0;
  char * * ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_list_fonts);
  CSTACK_LPOP (char * *, ret0, tos0);

  /* Return. */
  ret0s = pointer_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_list_fonts (void)
{
  /* Declare. */
  char * * ret0;
  struct xdisplay * xd;
  char * pattern;
  long limit;
  int * actual_count;

  /* Init. */
  check_number_of_args (6);
  xd = (struct xdisplay *) arg_pointer (3);
  pattern = (char *) arg_pointer (4);
  limit = arg_long (5);
  actual_count = (int *) arg_pointer (6);

  /* Call. */
  callout_seal (&Scm_continue_x_list_fonts);
  ret0 = x_list_fonts (xd, pattern, limit, actual_count);

  /* Save. */
  callout_unseal (&Scm_continue_x_list_fonts);
  CSTACK_PUSH (char * *, ret0);

  return callout_continue (&Scm_continue_x_list_fonts);
}

SCM
Scm_continue_x_intern_atom (void)
{
  /* Declare. */
  char * tos0;
  Atom ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_intern_atom);
  CSTACK_LPOP (Atom, ret0, tos0);

  /* Return. */
  ret0s = ulong_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_intern_atom (void)
{
  /* Declare. */
  Atom ret0;
  struct xdisplay * xd;
  char const * name;
  int soft_p;

  /* Init. */
  check_number_of_args (4);
  xd = (struct xdisplay *) arg_pointer (2);
  name = (char const *) arg_pointer (3);
  soft_p = arg_long (4);

  /* Call. */
  callout_seal (&Scm_continue_x_intern_atom);
  ret0 = x_intern_atom (xd, name, soft_p);

  /* Save. */
  callout_unseal (&Scm_continue_x_intern_atom);
  CSTACK_PUSH (Atom, ret0);

  return callout_continue (&Scm_continue_x_intern_atom);
}

SCM
Scm_continue_x_get_atom_name (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_get_atom_name);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_get_atom_name (void)
{
  /* Declare. */
  int ret0;
  struct xdisplay * xd;
  Atom atom;
  char * * name_return;

  /* Init. */
  check_number_of_args (4);
  xd = (struct xdisplay *) arg_pointer (2);
  atom = arg_ulong (3);
  name_return = (char * *) arg_pointer (4);

  /* Call. */
  callout_seal (&Scm_continue_x_get_atom_name);
  ret0 = x_get_atom_name (xd, atom, name_return);

  /* Save. */
  callout_unseal (&Scm_continue_x_get_atom_name);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_get_atom_name);
}

SCM
Scm_continue_x_get_window_property (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_get_window_property);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_get_window_property (void)
{
  /* Declare. */
  int ret0;
  struct xdisplay * xd;
  Window window;
  Atom property;
  long long_offset;
  long long_length;
  Bool delete;
  Atom req_type;
  Atom * actual_type_return;
  int * actual_format_return;
  unsigned long * nitems_return;
  unsigned long * bytes_after_return;
  unsigned char * * prop_return;

  /* Init. */
  check_number_of_args (13);
  xd = (struct xdisplay *) arg_pointer (2);
  window = arg_ulong (3);
  property = arg_ulong (4);
  long_offset = arg_long (5);
  long_length = arg_long (6);
  delete = arg_long (7);
  req_type = arg_ulong (8);
  actual_type_return = (Atom *) arg_pointer (9);
  actual_format_return = (int *) arg_pointer (10);
  nitems_return = (unsigned long *) arg_pointer (11);
  bytes_after_return = (unsigned long *) arg_pointer (12);
  prop_return = (unsigned char * *) arg_pointer (13);

  /* Call. */
  callout_seal (&Scm_continue_x_get_window_property);
  ret0 = x_get_window_property (xd, window, property, long_offset, long_length, delete, req_type, actual_type_return, actual_format_return, nitems_return, bytes_after_return, prop_return);

  /* Save. */
  callout_unseal (&Scm_continue_x_get_window_property);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_get_window_property);
}

SCM
Scm_continue_x_change_property (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_change_property);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_change_property (void)
{
  /* Declare. */
  int ret0;
  struct xdisplay * wd;
  Window window;
  Atom property;
  Atom type;
  int format;
  int mode;
  unsigned char * data;
  unsigned long dlen;

  /* Init. */
  check_number_of_args (9);
  wd = (struct xdisplay *) arg_pointer (2);
  window = arg_ulong (3);
  property = arg_ulong (4);
  type = arg_ulong (5);
  format = arg_long (6);
  mode = arg_long (7);
  data = (unsigned char *) arg_pointer (8);
  dlen = arg_ulong (9);

  /* Call. */
  callout_seal (&Scm_continue_x_change_property);
  ret0 = x_change_property (wd, window, property, type, format, mode, data, dlen);

  /* Save. */
  callout_unseal (&Scm_continue_x_change_property);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_change_property);
}

SCM
Scm_continue_x_delete_property (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_delete_property);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_delete_property (void)
{
  /* Declare. */
  struct xdisplay * xd;
  Window window;
  Atom property;

  /* Init. */
  check_number_of_args (4);
  xd = (struct xdisplay *) arg_pointer (2);
  window = arg_ulong (3);
  property = arg_ulong (4);

  /* Call. */
  callout_seal (&Scm_continue_x_delete_property);
  x_delete_property (xd, window, property);

  /* Save. */
  callout_unseal (&Scm_continue_x_delete_property);

  return callout_continue (&Scm_continue_x_delete_property);
}

SCM
Scm_continue_x_set_selection_owner (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_set_selection_owner);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_set_selection_owner (void)
{
  /* Declare. */
  struct xdisplay * xd;
  Atom selection;
  Window owner;
  Time time;

  /* Init. */
  check_number_of_args (5);
  xd = (struct xdisplay *) arg_pointer (2);
  selection = arg_ulong (3);
  owner = arg_ulong (4);
  time = arg_ulong (5);

  /* Call. */
  callout_seal (&Scm_continue_x_set_selection_owner);
  x_set_selection_owner (xd, selection, owner, time);

  /* Save. */
  callout_unseal (&Scm_continue_x_set_selection_owner);

  return callout_continue (&Scm_continue_x_set_selection_owner);
}

SCM
Scm_continue_x_get_selection_owner (void)
{
  /* Declare. */
  char * tos0;
  Window ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_get_selection_owner);
  CSTACK_LPOP (Window, ret0, tos0);

  /* Return. */
  ret0s = ulong_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_get_selection_owner (void)
{
  /* Declare. */
  Window ret0;
  struct xdisplay * xd;
  Atom selection;

  /* Init. */
  check_number_of_args (3);
  xd = (struct xdisplay *) arg_pointer (2);
  selection = arg_ulong (3);

  /* Call. */
  callout_seal (&Scm_continue_x_get_selection_owner);
  ret0 = x_get_selection_owner (xd, selection);

  /* Save. */
  callout_unseal (&Scm_continue_x_get_selection_owner);
  CSTACK_PUSH (Window, ret0);

  return callout_continue (&Scm_continue_x_get_selection_owner);
}

SCM
Scm_continue_x_convert_selection (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_convert_selection);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_convert_selection (void)
{
  /* Declare. */
  struct xdisplay * xd;
  Atom selection;
  Atom target;
  Atom property;
  Window requestor;
  Time time;

  /* Init. */
  check_number_of_args (7);
  xd = (struct xdisplay *) arg_pointer (2);
  selection = arg_ulong (3);
  target = arg_ulong (4);
  property = arg_ulong (5);
  requestor = arg_ulong (6);
  time = arg_ulong (7);

  /* Call. */
  callout_seal (&Scm_continue_x_convert_selection);
  x_convert_selection (xd, selection, target, property, requestor, time);

  /* Save. */
  callout_unseal (&Scm_continue_x_convert_selection);

  return callout_continue (&Scm_continue_x_convert_selection);
}

SCM
Scm_continue_x_send_selection_notify (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_send_selection_notify);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_send_selection_notify (void)
{
  /* Declare. */
  struct xdisplay * xd;
  Window requestor;
  Atom selection;
  Atom target;
  Atom property;
  Time time;

  /* Init. */
  check_number_of_args (7);
  xd = (struct xdisplay *) arg_pointer (2);
  requestor = arg_ulong (3);
  selection = arg_ulong (4);
  target = arg_ulong (5);
  property = arg_ulong (6);
  time = arg_ulong (7);

  /* Call. */
  callout_seal (&Scm_continue_x_send_selection_notify);
  x_send_selection_notify (xd, requestor, selection, target, property, time);

  /* Save. */
  callout_unseal (&Scm_continue_x_send_selection_notify);

  return callout_continue (&Scm_continue_x_send_selection_notify);
}

SCM
Scm_continue_x_window_visual (void)
{
  /* Declare. */
  char * tos0;
  struct xvisual * ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_visual);
  CSTACK_LPOP (struct xvisual *, ret0, tos0);

  /* Return. */
  ret0s = pointer_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_visual (void)
{
  /* Declare. */
  struct xvisual * ret0;
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_visual);
  ret0 = x_window_visual (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_visual);
  CSTACK_PUSH (struct xvisual *, ret0);

  return callout_continue (&Scm_continue_x_window_visual);
}

SCM
Scm_continue_x_get_visual_info (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_get_visual_info);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_get_visual_info (void)
{
  /* Declare. */
  struct xdisplay * xd;
  long mask;
  XVisualInfo * info;
  XVisualInfo * * items_return;
  int * nitems_return;

  /* Init. */
  check_number_of_args (6);
  xd = (struct xdisplay *) arg_pointer (2);
  mask = arg_long (3);
  info = (XVisualInfo *) arg_pointer (4);
  items_return = (XVisualInfo * *) arg_pointer (5);
  nitems_return = (int *) arg_pointer (6);

  /* Call. */
  callout_seal (&Scm_continue_x_get_visual_info);
  x_get_visual_info (xd, mask, info, items_return, nitems_return);

  /* Save. */
  callout_unseal (&Scm_continue_x_get_visual_info);

  return callout_continue (&Scm_continue_x_get_visual_info);
}

SCM
Scm_continue_x_window_colormap (void)
{
  /* Declare. */
  char * tos0;
  struct xcolormap * ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_colormap);
  CSTACK_LPOP (struct xcolormap *, ret0, tos0);

  /* Return. */
  ret0s = pointer_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_colormap (void)
{
  /* Declare. */
  struct xcolormap * ret0;
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_window_colormap);
  ret0 = x_window_colormap (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_colormap);
  CSTACK_PUSH (struct xcolormap *, ret0);

  return callout_continue (&Scm_continue_x_window_colormap);
}

SCM
Scm_continue_x_set_window_colormap (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_set_window_colormap);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_set_window_colormap (void)
{
  /* Declare. */
  struct xwindow * xw;
  struct xcolormap * xcm;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  xcm = (struct xcolormap *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_set_window_colormap);
  x_set_window_colormap (xw, xcm);

  /* Save. */
  callout_unseal (&Scm_continue_x_set_window_colormap);

  return callout_continue (&Scm_continue_x_set_window_colormap);
}

SCM
Scm_continue_x_create_colormap (void)
{
  /* Declare. */
  char * tos0;
  struct xcolormap * ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_create_colormap);
  CSTACK_LPOP (struct xcolormap *, ret0, tos0);

  /* Return. */
  ret0s = pointer_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_create_colormap (void)
{
  /* Declare. */
  struct xcolormap * ret0;
  struct xwindow * xw;
  struct xvisual * visual;
  int writable_p;

  /* Init. */
  check_number_of_args (5);
  xw = (struct xwindow *) arg_pointer (3);
  visual = (struct xvisual *) arg_pointer (4);
  writable_p = arg_long (5);

  /* Call. */
  callout_seal (&Scm_continue_x_create_colormap);
  ret0 = x_create_colormap (xw, visual, writable_p);

  /* Save. */
  callout_unseal (&Scm_continue_x_create_colormap);
  CSTACK_PUSH (struct xcolormap *, ret0);

  return callout_continue (&Scm_continue_x_create_colormap);
}

SCM
Scm_continue_x_free_colormap (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_free_colormap);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_free_colormap (void)
{
  /* Declare. */
  struct xcolormap * xcm;

  /* Init. */
  check_number_of_args (2);
  xcm = (struct xcolormap *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_free_colormap);
  x_free_colormap (xcm);

  /* Save. */
  callout_unseal (&Scm_continue_x_free_colormap);

  return callout_continue (&Scm_continue_x_free_colormap);
}

SCM
Scm_continue_x_allocate_color (void)
{
  /* Declare. */
  char * tos0;
  long ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_allocate_color);
  CSTACK_LPOP (long, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_allocate_color (void)
{
  /* Declare. */
  long ret0;
  struct xcolormap * xcm;
  unsigned int red;
  unsigned int green;
  unsigned int blue;

  /* Init. */
  check_number_of_args (5);
  xcm = (struct xcolormap *) arg_pointer (2);
  red = arg_ulong (3);
  green = arg_ulong (4);
  blue = arg_ulong (5);

  /* Call. */
  callout_seal (&Scm_continue_x_allocate_color);
  ret0 = x_allocate_color (xcm, red, green, blue);

  /* Save. */
  callout_unseal (&Scm_continue_x_allocate_color);
  CSTACK_PUSH (long, ret0);

  return callout_continue (&Scm_continue_x_allocate_color);
}

SCM
Scm_continue_x_store_color (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_store_color);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_store_color (void)
{
  /* Declare. */
  struct xcolormap * xcm;
  int pixel;
  int red;
  int green;
  int blue;

  /* Init. */
  check_number_of_args (6);
  xcm = (struct xcolormap *) arg_pointer (2);
  pixel = arg_long (3);
  red = arg_long (4);
  green = arg_long (5);
  blue = arg_long (6);

  /* Call. */
  callout_seal (&Scm_continue_x_store_color);
  x_store_color (xcm, pixel, red, green, blue);

  /* Save. */
  callout_unseal (&Scm_continue_x_store_color);

  return callout_continue (&Scm_continue_x_store_color);
}

SCM
Scm_continue_x_store_colors (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_store_colors);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_store_colors (void)
{
  /* Declare. */
  struct xcolormap * xcm;
  int * color_vector;
  unsigned long n_colors;

  /* Init. */
  check_number_of_args (4);
  xcm = (struct xcolormap *) arg_pointer (2);
  color_vector = (int *) arg_pointer (3);
  n_colors = arg_ulong (4);

  /* Call. */
  callout_seal (&Scm_continue_x_store_colors);
  x_store_colors (xcm, color_vector, n_colors);

  /* Save. */
  callout_unseal (&Scm_continue_x_store_colors);

  return callout_continue (&Scm_continue_x_store_colors);
}

SCM
Scm_continue_x_query_color (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_query_color);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_query_color (void)
{
  /* Declare. */
  struct xcolormap * xcm;
  unsigned long pixel;
  unsigned int * results;

  /* Init. */
  check_number_of_args (4);
  xcm = (struct xcolormap *) arg_pointer (2);
  pixel = arg_ulong (3);
  results = (unsigned int *) arg_pointer (4);

  /* Call. */
  callout_seal (&Scm_continue_x_query_color);
  x_query_color (xcm, pixel, results);

  /* Save. */
  callout_unseal (&Scm_continue_x_query_color);

  return callout_continue (&Scm_continue_x_query_color);
}

SCM
Scm_continue_x_graphics_set_vdc_extent (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_set_vdc_extent);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_set_vdc_extent (void)
{
  /* Declare. */
  struct xwindow * xw;
  float x_left;
  float y_bottom;
  float x_right;
  float y_top;

  /* Init. */
  check_number_of_args (6);
  xw = (struct xwindow *) arg_pointer (2);
  x_left = arg_double (3);
  y_bottom = arg_double (4);
  x_right = arg_double (5);
  y_top = arg_double (6);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_set_vdc_extent);
  x_graphics_set_vdc_extent (xw, x_left, y_bottom, x_right, y_top);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_set_vdc_extent);

  return callout_continue (&Scm_continue_x_graphics_set_vdc_extent);
}

SCM
Scm_continue_x_graphics_vdc_extent (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_vdc_extent);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_vdc_extent (void)
{
  /* Declare. */
  struct xwindow * xw;
  float * results;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  results = (float *) arg_pointer (3);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_vdc_extent);
  x_graphics_vdc_extent (xw, results);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_vdc_extent);

  return callout_continue (&Scm_continue_x_graphics_vdc_extent);
}

SCM
Scm_continue_x_graphics_reset_clip_rectangle (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_reset_clip_rectangle);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_reset_clip_rectangle (void)
{
  /* Declare. */
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_reset_clip_rectangle);
  x_graphics_reset_clip_rectangle (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_reset_clip_rectangle);

  return callout_continue (&Scm_continue_x_graphics_reset_clip_rectangle);
}

SCM
Scm_continue_x_graphics_set_clip_rectangle (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_set_clip_rectangle);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_set_clip_rectangle (void)
{
  /* Declare. */
  struct xwindow * xw;
  float x_left;
  float y_bottom;
  float x_right;
  float y_top;

  /* Init. */
  check_number_of_args (6);
  xw = (struct xwindow *) arg_pointer (2);
  x_left = arg_double (3);
  y_bottom = arg_double (4);
  x_right = arg_double (5);
  y_top = arg_double (6);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_set_clip_rectangle);
  x_graphics_set_clip_rectangle (xw, x_left, y_bottom, x_right, y_top);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_set_clip_rectangle);

  return callout_continue (&Scm_continue_x_graphics_set_clip_rectangle);
}

SCM
Scm_continue_x_graphics_reconfigure (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_reconfigure);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_reconfigure (void)
{
  /* Declare. */
  struct xwindow * xw;
  unsigned int height;
  unsigned int width;

  /* Init. */
  check_number_of_args (4);
  xw = (struct xwindow *) arg_pointer (2);
  height = arg_ulong (3);
  width = arg_ulong (4);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_reconfigure);
  x_graphics_reconfigure (xw, height, width);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_reconfigure);

  return callout_continue (&Scm_continue_x_graphics_reconfigure);
}

SCM
Scm_continue_x_graphics_open_window (void)
{
  /* Declare. */
  char * tos0;
  struct xwindow * ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_open_window);
  CSTACK_LPOP (struct xwindow *, ret0, tos0);

  /* Return. */
  ret0s = pointer_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_open_window (void)
{
  /* Declare. */
  struct xwindow * ret0;
  struct xdisplay * xd;
  char * geometry;
  char const * resource_name;
  char const * resource_class;
  int map_p;

  /* Init. */
  check_number_of_args (7);
  xd = (struct xdisplay *) arg_pointer (3);
  geometry = (char *) arg_pointer (4);
  resource_name = (char const *) arg_pointer (5);
  resource_class = (char const *) arg_pointer (6);
  map_p = arg_long (7);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_open_window);
  ret0 = x_graphics_open_window (xd, geometry, resource_name, resource_class, map_p);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_open_window);
  CSTACK_PUSH (struct xwindow *, ret0);

  return callout_continue (&Scm_continue_x_graphics_open_window);
}

SCM
Scm_continue_x_graphics_draw_line (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_draw_line);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_draw_line (void)
{
  /* Declare. */
  struct xwindow * xw;
  float x_start;
  float y_start;
  float x_end;
  float y_end;

  /* Init. */
  check_number_of_args (6);
  xw = (struct xwindow *) arg_pointer (2);
  x_start = arg_double (3);
  y_start = arg_double (4);
  x_end = arg_double (5);
  y_end = arg_double (6);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_draw_line);
  x_graphics_draw_line (xw, x_start, y_start, x_end, y_end);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_draw_line);

  return callout_continue (&Scm_continue_x_graphics_draw_line);
}

SCM
Scm_continue_x_graphics_move_cursor (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_move_cursor);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_move_cursor (void)
{
  /* Declare. */
  struct xwindow * xw;
  float x;
  float y;

  /* Init. */
  check_number_of_args (4);
  xw = (struct xwindow *) arg_pointer (2);
  x = arg_double (3);
  y = arg_double (4);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_move_cursor);
  x_graphics_move_cursor (xw, x, y);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_move_cursor);

  return callout_continue (&Scm_continue_x_graphics_move_cursor);
}

SCM
Scm_continue_x_graphics_drag_cursor (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_drag_cursor);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_drag_cursor (void)
{
  /* Declare. */
  struct xwindow * xw;
  float x;
  float y;

  /* Init. */
  check_number_of_args (4);
  xw = (struct xwindow *) arg_pointer (2);
  x = arg_double (3);
  y = arg_double (4);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_drag_cursor);
  x_graphics_drag_cursor (xw, x, y);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_drag_cursor);

  return callout_continue (&Scm_continue_x_graphics_drag_cursor);
}

SCM
Scm_continue_x_graphics_draw_point (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_draw_point);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_draw_point (void)
{
  /* Declare. */
  struct xwindow * xw;
  float x;
  float y;

  /* Init. */
  check_number_of_args (4);
  xw = (struct xwindow *) arg_pointer (2);
  x = arg_double (3);
  y = arg_double (4);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_draw_point);
  x_graphics_draw_point (xw, x, y);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_draw_point);

  return callout_continue (&Scm_continue_x_graphics_draw_point);
}

SCM
Scm_continue_x_graphics_draw_arc (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_draw_arc);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_draw_arc (void)
{
  /* Declare. */
  struct xwindow * xw;
  float virtual_device_x;
  float virtual_device_y;
  float radius_x;
  float radius_y;
  float angle_start;
  float angle_sweep;
  int fill_p;

  /* Init. */
  check_number_of_args (9);
  xw = (struct xwindow *) arg_pointer (2);
  virtual_device_x = arg_double (3);
  virtual_device_y = arg_double (4);
  radius_x = arg_double (5);
  radius_y = arg_double (6);
  angle_start = arg_double (7);
  angle_sweep = arg_double (8);
  fill_p = arg_long (9);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_draw_arc);
  x_graphics_draw_arc (xw, virtual_device_x, virtual_device_y, radius_x, radius_y, angle_start, angle_sweep, fill_p);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_draw_arc);

  return callout_continue (&Scm_continue_x_graphics_draw_arc);
}

SCM
Scm_continue_x_graphics_draw_string (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_draw_string);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_draw_string (void)
{
  /* Declare. */
  struct xwindow * xw;
  float x;
  float y;
  char * string;

  /* Init. */
  check_number_of_args (5);
  xw = (struct xwindow *) arg_pointer (2);
  x = arg_double (3);
  y = arg_double (4);
  string = (char *) arg_pointer (5);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_draw_string);
  x_graphics_draw_string (xw, x, y, string);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_draw_string);

  return callout_continue (&Scm_continue_x_graphics_draw_string);
}

SCM
Scm_continue_x_graphics_draw_image_string (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_draw_image_string);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_draw_image_string (void)
{
  /* Declare. */
  struct xwindow * xw;
  float x;
  float y;
  char * string;

  /* Init. */
  check_number_of_args (5);
  xw = (struct xwindow *) arg_pointer (2);
  x = arg_double (3);
  y = arg_double (4);
  string = (char *) arg_pointer (5);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_draw_image_string);
  x_graphics_draw_image_string (xw, x, y, string);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_draw_image_string);

  return callout_continue (&Scm_continue_x_graphics_draw_image_string);
}

SCM
Scm_continue_x_graphics_set_function (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_set_function);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_set_function (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  unsigned int function;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  function = arg_ulong (3);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_set_function);
  ret0 = x_graphics_set_function (xw, function);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_set_function);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_graphics_set_function);
}

SCM
Scm_continue_x_graphics_draw_points (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_draw_points);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_draw_points (void)
{
  /* Declare. */
  struct xwindow * xw;
  double * x_vector;
  double * y_vector;
  unsigned int n_points;
  XPoint * points;

  /* Init. */
  check_number_of_args (6);
  xw = (struct xwindow *) arg_pointer (2);
  x_vector = (double *) arg_pointer (3);
  y_vector = (double *) arg_pointer (4);
  n_points = arg_ulong (5);
  points = (XPoint *) arg_pointer (6);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_draw_points);
  x_graphics_draw_points (xw, x_vector, y_vector, n_points, points);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_draw_points);

  return callout_continue (&Scm_continue_x_graphics_draw_points);
}

SCM
Scm_continue_x_graphics_draw_lines (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_draw_lines);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_draw_lines (void)
{
  /* Declare. */
  struct xwindow * xw;
  double * x_vector;
  double * y_vector;
  unsigned int n_points;
  XPoint * points;

  /* Init. */
  check_number_of_args (6);
  xw = (struct xwindow *) arg_pointer (2);
  x_vector = (double *) arg_pointer (3);
  y_vector = (double *) arg_pointer (4);
  n_points = arg_ulong (5);
  points = (XPoint *) arg_pointer (6);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_draw_lines);
  x_graphics_draw_lines (xw, x_vector, y_vector, n_points, points);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_draw_lines);

  return callout_continue (&Scm_continue_x_graphics_draw_lines);
}

SCM
Scm_continue_x_graphics_set_fill_style (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_set_fill_style);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_set_fill_style (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  unsigned int fill_style;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  fill_style = arg_ulong (3);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_set_fill_style);
  ret0 = x_graphics_set_fill_style (xw, fill_style);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_set_fill_style);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_graphics_set_fill_style);
}

SCM
Scm_continue_x_graphics_set_line_style (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_set_line_style);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_set_line_style (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  unsigned int style;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  style = arg_ulong (3);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_set_line_style);
  ret0 = x_graphics_set_line_style (xw, style);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_set_line_style);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_graphics_set_line_style);
}

SCM
Scm_continue_x_graphics_set_dashes (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_set_dashes);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_set_dashes (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  int dash_offset;
  char * dash_list;
  int dash_list_length;

  /* Init. */
  check_number_of_args (5);
  xw = (struct xwindow *) arg_pointer (2);
  dash_offset = arg_long (3);
  dash_list = (char *) arg_pointer (4);
  dash_list_length = arg_long (5);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_set_dashes);
  ret0 = x_graphics_set_dashes (xw, dash_offset, dash_list, dash_list_length);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_set_dashes);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_graphics_set_dashes);
}

SCM
Scm_continue_x_graphics_copy_area (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_copy_area);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_copy_area (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * source_xw;
  struct xwindow * destination_xw;
  int source_x;
  int source_y;
  int width;
  int height;
  int dest_x;
  int dest_y;

  /* Init. */
  check_number_of_args (9);
  source_xw = (struct xwindow *) arg_pointer (2);
  destination_xw = (struct xwindow *) arg_pointer (3);
  source_x = arg_long (4);
  source_y = arg_long (5);
  width = arg_long (6);
  height = arg_long (7);
  dest_x = arg_long (8);
  dest_y = arg_long (9);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_copy_area);
  ret0 = x_graphics_copy_area (source_xw, destination_xw, source_x, source_y, width, height, dest_x, dest_y);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_copy_area);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_graphics_copy_area);
}

SCM
Scm_continue_x_graphics_fill_polygon (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_fill_polygon);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_fill_polygon (void)
{
  /* Declare. */
  struct xwindow * xw;
  double * vector;
  unsigned int length;
  XPoint * points;

  /* Init. */
  check_number_of_args (5);
  xw = (struct xwindow *) arg_pointer (2);
  vector = (double *) arg_pointer (3);
  length = arg_ulong (4);
  points = (XPoint *) arg_pointer (5);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_fill_polygon);
  x_graphics_fill_polygon (xw, vector, length, points);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_fill_polygon);

  return callout_continue (&Scm_continue_x_graphics_fill_polygon);
}

SCM
Scm_continue_x_create_image (void)
{
  /* Declare. */
  char * tos0;
  struct ximage * ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_create_image);
  CSTACK_LPOP (struct ximage *, ret0, tos0);

  /* Return. */
  ret0s = pointer_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_create_image (void)
{
  /* Declare. */
  struct ximage * ret0;
  struct xwindow * xw;
  unsigned int width;
  unsigned int height;

  /* Init. */
  check_number_of_args (5);
  xw = (struct xwindow *) arg_pointer (3);
  width = arg_ulong (4);
  height = arg_ulong (5);

  /* Call. */
  callout_seal (&Scm_continue_x_create_image);
  ret0 = x_create_image (xw, width, height);

  /* Save. */
  callout_unseal (&Scm_continue_x_create_image);
  CSTACK_PUSH (struct ximage *, ret0);

  return callout_continue (&Scm_continue_x_create_image);
}

SCM
Scm_continue_x_bytes_into_image (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_bytes_into_image);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_bytes_into_image (void)
{
  /* Declare. */
  int ret0;
  unsigned char * vector;
  int length;
  struct ximage * ximage;

  /* Init. */
  check_number_of_args (4);
  vector = (unsigned char *) arg_pointer (2);
  length = arg_long (3);
  ximage = (struct ximage *) arg_pointer (4);

  /* Call. */
  callout_seal (&Scm_continue_x_bytes_into_image);
  ret0 = x_bytes_into_image (vector, length, ximage);

  /* Save. */
  callout_unseal (&Scm_continue_x_bytes_into_image);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_bytes_into_image);
}

SCM
Scm_continue_x_get_pixel_from_image (void)
{
  /* Declare. */
  char * tos0;
  long ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_get_pixel_from_image);
  CSTACK_LPOP (long, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_get_pixel_from_image (void)
{
  /* Declare. */
  long ret0;
  struct ximage * xi;
  int x;
  int y;

  /* Init. */
  check_number_of_args (4);
  xi = (struct ximage *) arg_pointer (2);
  x = arg_long (3);
  y = arg_long (4);

  /* Call. */
  callout_seal (&Scm_continue_x_get_pixel_from_image);
  ret0 = x_get_pixel_from_image (xi, x, y);

  /* Save. */
  callout_unseal (&Scm_continue_x_get_pixel_from_image);
  CSTACK_PUSH (long, ret0);

  return callout_continue (&Scm_continue_x_get_pixel_from_image);
}

SCM
Scm_continue_x_set_pixel_in_image (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_set_pixel_in_image);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_set_pixel_in_image (void)
{
  /* Declare. */
  int ret0;
  struct ximage * xi;
  int x;
  int y;
  unsigned long pixel;

  /* Init. */
  check_number_of_args (5);
  xi = (struct ximage *) arg_pointer (2);
  x = arg_long (3);
  y = arg_long (4);
  pixel = arg_ulong (5);

  /* Call. */
  callout_seal (&Scm_continue_x_set_pixel_in_image);
  ret0 = x_set_pixel_in_image (xi, x, y, pixel);

  /* Save. */
  callout_unseal (&Scm_continue_x_set_pixel_in_image);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_set_pixel_in_image);
}

SCM
Scm_continue_x_destroy_image (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_destroy_image);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_destroy_image (void)
{
  /* Declare. */
  struct ximage * xi;

  /* Init. */
  check_number_of_args (2);
  xi = (struct ximage *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_destroy_image);
  x_destroy_image (xi);

  /* Save. */
  callout_unseal (&Scm_continue_x_destroy_image);

  return callout_continue (&Scm_continue_x_destroy_image);
}

SCM
Scm_continue_x_display_image (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_display_image);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_display_image (void)
{
  /* Declare. */
  int ret0;
  struct ximage * xi;
  unsigned int x_offset;
  unsigned int y_offset;
  struct xwindow * xw;
  unsigned int window_xoff;
  unsigned int window_yoff;
  unsigned int width;
  unsigned int height;

  /* Init. */
  check_number_of_args (9);
  xi = (struct ximage *) arg_pointer (2);
  x_offset = arg_ulong (3);
  y_offset = arg_ulong (4);
  xw = (struct xwindow *) arg_pointer (5);
  window_xoff = arg_ulong (6);
  window_yoff = arg_ulong (7);
  width = arg_ulong (8);
  height = arg_ulong (9);

  /* Call. */
  callout_seal (&Scm_continue_x_display_image);
  ret0 = x_display_image (xi, x_offset, y_offset, xw, window_xoff, window_yoff, width, height);

  /* Save. */
  callout_unseal (&Scm_continue_x_display_image);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_display_image);
}

SCM
Scm_continue_x_read_image (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_read_image);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_read_image (void)
{
  /* Declare. */
  struct ximage * xi;
  long XImageOffset;
  long YImageOffset;
  struct xwindow * xw;
  long XWindowOffset;
  long YWindowOffset;
  long Width;
  long Height;

  /* Init. */
  check_number_of_args (9);
  xi = (struct ximage *) arg_pointer (2);
  XImageOffset = arg_long (3);
  YImageOffset = arg_long (4);
  xw = (struct xwindow *) arg_pointer (5);
  XWindowOffset = arg_long (6);
  YWindowOffset = arg_long (7);
  Width = arg_long (8);
  Height = arg_long (9);

  /* Call. */
  callout_seal (&Scm_continue_x_read_image);
  x_read_image (xi, XImageOffset, YImageOffset, xw, XWindowOffset, YWindowOffset, Width, Height);

  /* Save. */
  callout_unseal (&Scm_continue_x_read_image);

  return callout_continue (&Scm_continue_x_read_image);
}

SCM
Scm_continue_x_window_depth (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_window_depth);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_window_depth (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_x_window_depth);
  ret0 = x_window_depth (xw);

  /* Save. */
  callout_unseal (&Scm_continue_x_window_depth);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_x_window_depth);
}

SCM
Scm_continue_x_graphics_map_x_coordinate (void)
{
  /* Declare. */
  char * tos0;
  float ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_map_x_coordinate);
  CSTACK_LPOP (float, ret0, tos0);

  /* Return. */
  ret0s = double_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_map_x_coordinate (void)
{
  /* Declare. */
  float ret0;
  struct xwindow * xw;
  int signed_xp;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  signed_xp = arg_long (3);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_map_x_coordinate);
  ret0 = x_graphics_map_x_coordinate (xw, signed_xp);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_map_x_coordinate);
  CSTACK_PUSH (float, ret0);

  return callout_continue (&Scm_continue_x_graphics_map_x_coordinate);
}

SCM
Scm_continue_x_graphics_map_y_coordinate (void)
{
  /* Declare. */
  char * tos0;
  float ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_x_graphics_map_y_coordinate);
  CSTACK_LPOP (float, ret0, tos0);

  /* Return. */
  ret0s = double_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_x_graphics_map_y_coordinate (void)
{
  /* Declare. */
  float ret0;
  struct xwindow * xw;
  int signed_yp;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  signed_yp = arg_long (3);

  /* Call. */
  callout_seal (&Scm_continue_x_graphics_map_y_coordinate);
  ret0 = x_graphics_map_y_coordinate (xw, signed_yp);

  /* Save. */
  callout_unseal (&Scm_continue_x_graphics_map_y_coordinate);
  CSTACK_PUSH (float, ret0);

  return callout_continue (&Scm_continue_x_graphics_map_y_coordinate);
}

SCM
Scm_continue_xterm_erase_cursor (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_erase_cursor);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_erase_cursor (void)
{
  /* Declare. */
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_xterm_erase_cursor);
  xterm_erase_cursor (xw);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_erase_cursor);

  return callout_continue (&Scm_continue_xterm_erase_cursor);
}

SCM
Scm_continue_xterm_draw_cursor (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_draw_cursor);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_draw_cursor (void)
{
  /* Declare. */
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_xterm_draw_cursor);
  xterm_draw_cursor (xw);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_draw_cursor);

  return callout_continue (&Scm_continue_xterm_draw_cursor);
}

SCM
Scm_continue_xterm_dump_rectangle (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_dump_rectangle);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_dump_rectangle (void)
{
  /* Declare. */
  struct xwindow * xw;
  int signed_x;
  int signed_y;
  unsigned int width;
  unsigned int height;

  /* Init. */
  check_number_of_args (6);
  xw = (struct xwindow *) arg_pointer (2);
  signed_x = arg_long (3);
  signed_y = arg_long (4);
  width = arg_ulong (5);
  height = arg_ulong (6);

  /* Call. */
  callout_seal (&Scm_continue_xterm_dump_rectangle);
  xterm_dump_rectangle (xw, signed_x, signed_y, width, height);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_dump_rectangle);

  return callout_continue (&Scm_continue_xterm_dump_rectangle);
}

SCM
Scm_continue_xterm_reconfigure (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_reconfigure);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_reconfigure (void)
{
  /* Declare. */
  struct xwindow * xw;
  unsigned int x_csize;
  unsigned int y_csize;

  /* Init. */
  check_number_of_args (4);
  xw = (struct xwindow *) arg_pointer (2);
  x_csize = arg_ulong (3);
  y_csize = arg_ulong (4);

  /* Call. */
  callout_seal (&Scm_continue_xterm_reconfigure);
  xterm_reconfigure (xw, x_csize, y_csize);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_reconfigure);

  return callout_continue (&Scm_continue_xterm_reconfigure);
}

SCM
Scm_continue_xterm_map_x_coordinate (void)
{
  /* Declare. */
  char * tos0;
  long ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_map_x_coordinate);
  CSTACK_LPOP (long, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_map_x_coordinate (void)
{
  /* Declare. */
  long ret0;
  struct xwindow * xw;
  int signed_xp;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  signed_xp = arg_long (3);

  /* Call. */
  callout_seal (&Scm_continue_xterm_map_x_coordinate);
  ret0 = xterm_map_x_coordinate (xw, signed_xp);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_map_x_coordinate);
  CSTACK_PUSH (long, ret0);

  return callout_continue (&Scm_continue_xterm_map_x_coordinate);
}

SCM
Scm_continue_xterm_map_y_coordinate (void)
{
  /* Declare. */
  char * tos0;
  long ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_map_y_coordinate);
  CSTACK_LPOP (long, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_map_y_coordinate (void)
{
  /* Declare. */
  long ret0;
  struct xwindow * xw;
  int signed_yp;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  signed_yp = arg_long (3);

  /* Call. */
  callout_seal (&Scm_continue_xterm_map_y_coordinate);
  ret0 = xterm_map_y_coordinate (xw, signed_yp);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_map_y_coordinate);
  CSTACK_PUSH (long, ret0);

  return callout_continue (&Scm_continue_xterm_map_y_coordinate);
}

SCM
Scm_continue_xterm_map_x_size (void)
{
  /* Declare. */
  char * tos0;
  unsigned int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_map_x_size);
  CSTACK_LPOP (unsigned int, ret0, tos0);

  /* Return. */
  ret0s = ulong_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_map_x_size (void)
{
  /* Declare. */
  unsigned int ret0;
  struct xwindow * xw;
  unsigned int width;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  width = arg_ulong (3);

  /* Call. */
  callout_seal (&Scm_continue_xterm_map_x_size);
  ret0 = xterm_map_x_size (xw, width);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_map_x_size);
  CSTACK_PUSH (unsigned int, ret0);

  return callout_continue (&Scm_continue_xterm_map_x_size);
}

SCM
Scm_continue_xterm_map_y_size (void)
{
  /* Declare. */
  char * tos0;
  unsigned int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_map_y_size);
  CSTACK_LPOP (unsigned int, ret0, tos0);

  /* Return. */
  ret0s = ulong_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_map_y_size (void)
{
  /* Declare. */
  unsigned int ret0;
  struct xwindow * xw;
  unsigned int height;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  height = arg_ulong (3);

  /* Call. */
  callout_seal (&Scm_continue_xterm_map_y_size);
  ret0 = xterm_map_y_size (xw, height);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_map_y_size);
  CSTACK_PUSH (unsigned int, ret0);

  return callout_continue (&Scm_continue_xterm_map_y_size);
}

SCM
Scm_continue_xterm_open_window (void)
{
  /* Declare. */
  char * tos0;
  struct xwindow * ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_open_window);
  CSTACK_LPOP (struct xwindow *, ret0, tos0);

  /* Return. */
  ret0s = pointer_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_open_window (void)
{
  /* Declare. */
  struct xwindow * ret0;
  struct xdisplay * xd;
  char * geometry;
  char const * resource_name;
  char const * resource_class;
  int map_p;

  /* Init. */
  check_number_of_args (7);
  xd = (struct xdisplay *) arg_pointer (3);
  geometry = (char *) arg_pointer (4);
  resource_name = (char const *) arg_pointer (5);
  resource_class = (char const *) arg_pointer (6);
  map_p = arg_long (7);

  /* Call. */
  callout_seal (&Scm_continue_xterm_open_window);
  ret0 = xterm_open_window (xd, geometry, resource_name, resource_class, map_p);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_open_window);
  CSTACK_PUSH (struct xwindow *, ret0);

  return callout_continue (&Scm_continue_xterm_open_window);
}

SCM
Scm_continue_xterm_x_size (void)
{
  /* Declare. */
  char * tos0;
  unsigned int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_x_size);
  CSTACK_LPOP (unsigned int, ret0, tos0);

  /* Return. */
  ret0s = ulong_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_x_size (void)
{
  /* Declare. */
  unsigned int ret0;
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_xterm_x_size);
  ret0 = xterm_x_size (xw);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_x_size);
  CSTACK_PUSH (unsigned int, ret0);

  return callout_continue (&Scm_continue_xterm_x_size);
}

SCM
Scm_continue_xterm_y_size (void)
{
  /* Declare. */
  char * tos0;
  unsigned int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_y_size);
  CSTACK_LPOP (unsigned int, ret0, tos0);

  /* Return. */
  ret0s = ulong_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_y_size (void)
{
  /* Declare. */
  unsigned int ret0;
  struct xwindow * xw;

  /* Init. */
  check_number_of_args (2);
  xw = (struct xwindow *) arg_pointer (2);

  /* Call. */
  callout_seal (&Scm_continue_xterm_y_size);
  ret0 = xterm_y_size (xw);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_y_size);
  CSTACK_PUSH (unsigned int, ret0);

  return callout_continue (&Scm_continue_xterm_y_size);
}

SCM
Scm_continue_xterm_set_size (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_set_size);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_set_size (void)
{
  /* Declare. */
  struct xwindow * xw;
  unsigned int width;
  unsigned int height;

  /* Init. */
  check_number_of_args (4);
  xw = (struct xwindow *) arg_pointer (2);
  width = arg_ulong (3);
  height = arg_ulong (4);

  /* Call. */
  callout_seal (&Scm_continue_xterm_set_size);
  xterm_set_size (xw, width, height);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_set_size);

  return callout_continue (&Scm_continue_xterm_set_size);
}

SCM
Scm_continue_xterm_enable_cursor (void)
{
  /* Declare. */
  char * tos0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_enable_cursor);

  /* Return. */
  ret0s = unspecific();
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_enable_cursor (void)
{
  /* Declare. */
  struct xwindow * xw;
  int enable_p;

  /* Init. */
  check_number_of_args (3);
  xw = (struct xwindow *) arg_pointer (2);
  enable_p = arg_long (3);

  /* Call. */
  callout_seal (&Scm_continue_xterm_enable_cursor);
  xterm_enable_cursor (xw, enable_p);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_enable_cursor);

  return callout_continue (&Scm_continue_xterm_enable_cursor);
}

SCM
Scm_continue_xterm_write_cursor (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_write_cursor);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_write_cursor (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  unsigned int x;
  unsigned int y;

  /* Init. */
  check_number_of_args (4);
  xw = (struct xwindow *) arg_pointer (2);
  x = arg_ulong (3);
  y = arg_ulong (4);

  /* Call. */
  callout_seal (&Scm_continue_xterm_write_cursor);
  ret0 = xterm_write_cursor (xw, x, y);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_write_cursor);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_xterm_write_cursor);
}

SCM
Scm_continue_xterm_write_char (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_write_char);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_write_char (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  unsigned int x;
  unsigned int y;
  int c;
  unsigned int hl;

  /* Init. */
  check_number_of_args (6);
  xw = (struct xwindow *) arg_pointer (2);
  x = arg_ulong (3);
  y = arg_ulong (4);
  c = arg_long (5);
  hl = arg_ulong (6);

  /* Call. */
  callout_seal (&Scm_continue_xterm_write_char);
  ret0 = xterm_write_char (xw, x, y, c, hl);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_write_char);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_xterm_write_char);
}

SCM
Scm_continue_xterm_write_substring (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_write_substring);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_write_substring (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  unsigned int x;
  unsigned int y;
  unsigned char * string;
  unsigned int start;
  unsigned int end;
  unsigned int hl;

  /* Init. */
  check_number_of_args (8);
  xw = (struct xwindow *) arg_pointer (2);
  x = arg_ulong (3);
  y = arg_ulong (4);
  string = (unsigned char *) arg_pointer (5);
  start = arg_ulong (6);
  end = arg_ulong (7);
  hl = arg_ulong (8);

  /* Call. */
  callout_seal (&Scm_continue_xterm_write_substring);
  ret0 = xterm_write_substring (xw, x, y, string, start, end, hl);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_write_substring);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_xterm_write_substring);
}

SCM
Scm_continue_xterm_clear_rectangle (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_clear_rectangle);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_clear_rectangle (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  unsigned int x_start;
  unsigned int x_end;
  unsigned int y_start;
  unsigned int y_end;
  unsigned int hl;

  /* Init. */
  check_number_of_args (7);
  xw = (struct xwindow *) arg_pointer (2);
  x_start = arg_ulong (3);
  x_end = arg_ulong (4);
  y_start = arg_ulong (5);
  y_end = arg_ulong (6);
  hl = arg_ulong (7);

  /* Call. */
  callout_seal (&Scm_continue_xterm_clear_rectangle);
  ret0 = xterm_clear_rectangle (xw, x_start, x_end, y_start, y_end, hl);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_clear_rectangle);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_xterm_clear_rectangle);
}

SCM
Scm_continue_xterm_scroll_lines_up (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_scroll_lines_up);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_scroll_lines_up (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  unsigned int x_start;
  unsigned int x_end;
  unsigned int y_start;
  unsigned int y_end;
  unsigned int lines;

  /* Init. */
  check_number_of_args (7);
  xw = (struct xwindow *) arg_pointer (2);
  x_start = arg_ulong (3);
  x_end = arg_ulong (4);
  y_start = arg_ulong (5);
  y_end = arg_ulong (6);
  lines = arg_ulong (7);

  /* Call. */
  callout_seal (&Scm_continue_xterm_scroll_lines_up);
  ret0 = xterm_scroll_lines_up (xw, x_start, x_end, y_start, y_end, lines);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_scroll_lines_up);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_xterm_scroll_lines_up);
}

SCM
Scm_continue_xterm_scroll_lines_down (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_scroll_lines_down);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_scroll_lines_down (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  unsigned int x_start;
  unsigned int x_end;
  unsigned int y_start;
  unsigned int y_end;
  unsigned int lines;

  /* Init. */
  check_number_of_args (7);
  xw = (struct xwindow *) arg_pointer (2);
  x_start = arg_ulong (3);
  x_end = arg_ulong (4);
  y_start = arg_ulong (5);
  y_end = arg_ulong (6);
  lines = arg_ulong (7);

  /* Call. */
  callout_seal (&Scm_continue_xterm_scroll_lines_down);
  ret0 = xterm_scroll_lines_down (xw, x_start, x_end, y_start, y_end, lines);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_scroll_lines_down);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_xterm_scroll_lines_down);
}

SCM
Scm_continue_xterm_save_contents (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_save_contents);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_save_contents (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  unsigned int x_start;
  unsigned int x_end;
  unsigned int y_start;
  unsigned int y_end;
  char * contents;

  /* Init. */
  check_number_of_args (7);
  xw = (struct xwindow *) arg_pointer (2);
  x_start = arg_ulong (3);
  x_end = arg_ulong (4);
  y_start = arg_ulong (5);
  y_end = arg_ulong (6);
  contents = (char *) arg_pointer (7);

  /* Call. */
  callout_seal (&Scm_continue_xterm_save_contents);
  ret0 = xterm_save_contents (xw, x_start, x_end, y_start, y_end, contents);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_save_contents);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_xterm_save_contents);
}

SCM
Scm_continue_xterm_restore_contents (void)
{
  /* Declare. */
  char * tos0;
  int ret0;
  SCM ret0s;

  /* Restore. */
  tos0 = callout_lunseal (&Scm_continue_xterm_restore_contents);
  CSTACK_LPOP (int, ret0, tos0);

  /* Return. */
  ret0s = long_to_scm (ret0);
  callout_pop (tos0);
  return (ret0s);
}
SCM
Scm_xterm_restore_contents (void)
{
  /* Declare. */
  int ret0;
  struct xwindow * xw;
  unsigned int x_start;
  unsigned int x_end;
  unsigned int y_start;
  unsigned int y_end;
  char * contents;

  /* Init. */
  check_number_of_args (7);
  xw = (struct xwindow *) arg_pointer (2);
  x_start = arg_ulong (3);
  x_end = arg_ulong (4);
  y_start = arg_ulong (5);
  y_end = arg_ulong (6);
  contents = (char *) arg_pointer (7);

  /* Call. */
  callout_seal (&Scm_continue_xterm_restore_contents);
  ret0 = xterm_restore_contents (xw, x_start, x_end, y_start, y_end, contents);

  /* Save. */
  callout_unseal (&Scm_continue_xterm_restore_contents);
  CSTACK_PUSH (int, ret0);

  return callout_continue (&Scm_continue_xterm_restore_contents);
}
