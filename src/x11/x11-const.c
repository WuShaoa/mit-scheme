/* -*-C-*- */

/* Prefix */
#include "x11-shim.h"
/* End Prefix */

#include <stdio.h>

void
grovel_basics (FILE * out)
{
  fprintf (out, "   ((sizeof char) . %ld)\n", (long) sizeof (char));
  fprintf (out, "   ((sizeof uchar) . %ld)\n", (long) sizeof (unsigned char));
  fprintf (out, "   ((sizeof short) . %ld)\n", (long) sizeof (short));
  fprintf (out, "   ((sizeof ushort) . %ld)\n", (long) sizeof (unsigned short));
  fprintf (out, "   ((sizeof int) . %ld)\n", (long) sizeof (int));
  fprintf (out, "   ((sizeof uint) . %ld)\n", (long) sizeof (unsigned int));
  fprintf (out, "   ((sizeof long) . %ld)\n", (long) sizeof (long));
  fprintf (out, "   ((sizeof ulong) . %ld)\n", (long) sizeof (unsigned long));
  fprintf (out, "   ((sizeof float) . %ld)\n", (long) sizeof (float));
  fprintf (out, "   ((sizeof double) . %ld)\n", (long) sizeof (double));
  fprintf (out, "   ((sizeof *) . %ld)\n", (long) sizeof (void*));
}

void
grovel_enums (FILE * out)
{
  fprintf (out, "   (|event_type_supremum| . %ld)\n", ((long)event_type_supremum));
  fprintf (out, "   (|event_type_property_notify| . %ld)\n", ((long)event_type_property_notify));
  fprintf (out, "   (|event_type_selection_request| . %ld)\n", ((long)event_type_selection_request));
  fprintf (out, "   (|event_type_selection_notify| . %ld)\n", ((long)event_type_selection_notify));
  fprintf (out, "   (|event_type_selection_clear| . %ld)\n", ((long)event_type_selection_clear));
  fprintf (out, "   (|event_type_visibility| . %ld)\n", ((long)event_type_visibility));
  fprintf (out, "   (|event_type_take_focus| . %ld)\n", ((long)event_type_take_focus));
  fprintf (out, "   (|event_type_unmap| . %ld)\n", ((long)event_type_unmap));
  fprintf (out, "   (|event_type_map| . %ld)\n", ((long)event_type_map));
  fprintf (out, "   (|event_type_delete_window| . %ld)\n", ((long)event_type_delete_window));
  fprintf (out, "   (|event_type_expose| . %ld)\n", ((long)event_type_expose));
  fprintf (out, "   (|event_type_motion| . %ld)\n", ((long)event_type_motion));
  fprintf (out, "   (|event_type_leave| . %ld)\n", ((long)event_type_leave));
  fprintf (out, "   (|event_type_key_press| . %ld)\n", ((long)event_type_key_press));
  fprintf (out, "   (|event_type_focus_out| . %ld)\n", ((long)event_type_focus_out));
  fprintf (out, "   (|event_type_focus_in| . %ld)\n", ((long)event_type_focus_in));
  fprintf (out, "   (|event_type_enter| . %ld)\n", ((long)event_type_enter));
  fprintf (out, "   (|event_type_configure| . %ld)\n", ((long)event_type_configure));
  fprintf (out, "   (|event_type_button_up| . %ld)\n", ((long)event_type_button_up));
  fprintf (out, "   (|event_type_button_down| . %ld)\n", ((long)event_type_button_down));
  fprintf (out, "   (|VisibilityNotify| . %ld)\n", ((long)VisibilityNotify));
  fprintf (out, "   (|UnmapNotify| . %ld)\n", ((long)UnmapNotify));
  fprintf (out, "   (|SelectionRequest| . %ld)\n", ((long)SelectionRequest));
  fprintf (out, "   (|SelectionNotify| . %ld)\n", ((long)SelectionNotify));
  fprintf (out, "   (|SelectionClear| . %ld)\n", ((long)SelectionClear));
  fprintf (out, "   (|PropertyNotify| . %ld)\n", ((long)PropertyNotify));
  fprintf (out, "   (|MotionNotify| . %ld)\n", ((long)MotionNotify));
  fprintf (out, "   (|MapNotify| . %ld)\n", ((long)MapNotify));
  fprintf (out, "   (|LeaveNotify| . %ld)\n", ((long)LeaveNotify));
  fprintf (out, "   (|KeyPress| . %ld)\n", ((long)KeyPress));
  fprintf (out, "   (|GraphicsExpose| . %ld)\n", ((long)GraphicsExpose));
  fprintf (out, "   (|FocusOut| . %ld)\n", ((long)FocusOut));
  fprintf (out, "   (|FocusIn| . %ld)\n", ((long)FocusIn));
  fprintf (out, "   (|Expose| . %ld)\n", ((long)Expose));
  fprintf (out, "   (|EnterNotify| . %ld)\n", ((long)EnterNotify));
  fprintf (out, "   (|ConfigureNotify| . %ld)\n", ((long)ConfigureNotify));
  fprintf (out, "   (|ClientMessage| . %ld)\n", ((long)ClientMessage));
  fprintf (out, "   (|ButtonRelease| . %ld)\n", ((long)ButtonRelease));
  fprintf (out, "   (|ButtonPress| . %ld)\n", ((long)ButtonPress));
  fprintf (out, "   (|XK_BackSpace| . %ld)\n", ((long)XK_BackSpace));
  fprintf (out, "   (|True| . %ld)\n", ((long)True));
  fprintf (out, "   (|NoSymbol| . %ld)\n", ((long)NoSymbol));
  fprintf (out, "   (|VisualAllMask| . %ld)\n", ((long)VisualAllMask));
  fprintf (out, "   (|VisualBitsPerRGBMask| . %ld)\n", ((long)VisualBitsPerRGBMask));
  fprintf (out, "   (|VisualColormapSizeMask| . %ld)\n", ((long)VisualColormapSizeMask));
  fprintf (out, "   (|VisualBlueMaskMask| . %ld)\n", ((long)VisualBlueMaskMask));
  fprintf (out, "   (|VisualGreenMaskMask| . %ld)\n", ((long)VisualGreenMaskMask));
  fprintf (out, "   (|VisualRedMaskMask| . %ld)\n", ((long)VisualRedMaskMask));
  fprintf (out, "   (|VisualClassMask| . %ld)\n", ((long)VisualClassMask));
  fprintf (out, "   (|VisualDepthMask| . %ld)\n", ((long)VisualDepthMask));
  fprintf (out, "   (|VisualScreenMask| . %ld)\n", ((long)VisualScreenMask));
  fprintf (out, "   (|VisualIDMask| . %ld)\n", ((long)VisualIDMask));
  fprintf (out, "   (|VisualNoMask| . %ld)\n", ((long)VisualNoMask));
  fprintf (out, "   (|AnyPropertyType| . %ld)\n", ((long)AnyPropertyType));
  fprintf (out, "   (|VisibilityFullyObscured| . %ld)\n", ((long)VisibilityFullyObscured));
  fprintf (out, "   (|VisibilityPartiallyObscured| . %ld)\n", ((long)VisibilityPartiallyObscured));
  fprintf (out, "   (|VisibilityUnobscured| . %ld)\n", ((long)VisibilityUnobscured));
  fprintf (out, "   (|Button5Mask| . %ld)\n", ((long)Button5Mask));
  fprintf (out, "   (|Button4Mask| . %ld)\n", ((long)Button4Mask));
  fprintf (out, "   (|Button3Mask| . %ld)\n", ((long)Button3Mask));
  fprintf (out, "   (|Button2Mask| . %ld)\n", ((long)Button2Mask));
  fprintf (out, "   (|Button1Mask| . %ld)\n", ((long)Button1Mask));
  fprintf (out, "   (|Mod5Mask| . %ld)\n", ((long)Mod5Mask));
  fprintf (out, "   (|Mod4Mask| . %ld)\n", ((long)Mod4Mask));
  fprintf (out, "   (|Mod3Mask| . %ld)\n", ((long)Mod3Mask));
  fprintf (out, "   (|Mod2Mask| . %ld)\n", ((long)Mod2Mask));
  fprintf (out, "   (|Mod1Mask| . %ld)\n", ((long)Mod1Mask));
  fprintf (out, "   (|ControlMask| . %ld)\n", ((long)ControlMask));
  fprintf (out, "   (|LockMask| . %ld)\n", ((long)LockMask));
  fprintf (out, "   (|ShiftMask| . %ld)\n", ((long)ShiftMask));
}

void
grovel_type_XPoint (FILE * out)
{
  XPoint S;
  fprintf (out, "   ((sizeof |XPoint|) . %ld)\n", (long) sizeof (XPoint));
  fprintf (out, "   ((offset |XPoint| x) %ld . short)\n", (long)((char*)&(S.x) - (char*)&S));
  fprintf (out, "   ((offset |XPoint| y) %ld . short)\n", (long)((char*)&(S.y) - (char*)&S));
}

void
grovel_type_XButtonEvent (FILE * out)
{
  XButtonEvent S;
  fprintf (out, "   ((sizeof |XButtonEvent|) . %ld)\n", (long) sizeof (XButtonEvent));
  fprintf (out, "   ((offset |XButtonEvent| type) %ld . int)\n", (long)((char*)&(S.type) - (char*)&S));
  fprintf (out, "   ((offset |XButtonEvent| x) %ld . int)\n", (long)((char*)&(S.x) - (char*)&S));
  fprintf (out, "   ((offset |XButtonEvent| y) %ld . int)\n", (long)((char*)&(S.y) - (char*)&S));
  fprintf (out, "   ((offset |XButtonEvent| button) %ld . uint)\n", (long)((char*)&(S.button) - (char*)&S));
  fprintf (out, "   ((offset |XButtonEvent| state) %ld . uint)\n", (long)((char*)&(S.state) - (char*)&S));
  fprintf (out, "   ((offset |XButtonEvent| time) %ld . |Time|)\n", (long)((char*)&(S.time) - (char*)&S));
}

void
grovel_type_XKeyEvent (FILE * out)
{
  XKeyEvent S;
  fprintf (out, "   ((sizeof |XKeyEvent|) . %ld)\n", (long) sizeof (XKeyEvent));
  fprintf (out, "   ((offset |XKeyEvent| type) %ld . int)\n", (long)((char*)&(S.type) - (char*)&S));
  fprintf (out, "   ((offset |XKeyEvent| state) %ld . uint)\n", (long)((char*)&(S.state) - (char*)&S));
  fprintf (out, "   ((offset |XKeyEvent| time) %ld . |Time|)\n", (long)((char*)&(S.time) - (char*)&S));
}

void
grovel_type_XEvent (FILE * out)
{
  XEvent S;
  fprintf (out, "   ((sizeof |XEvent|) . %ld)\n", (long) sizeof (XEvent));
  fprintf (out, "   ((offset |XEvent| type) %ld . int)\n", (long)((char*)&(S.type) - (char*)&S));
}

void
grovel_type_XPropertyEvent (FILE * out)
{
  XPropertyEvent S;
  fprintf (out, "   ((sizeof |XPropertyEvent|) . %ld)\n", (long) sizeof (XPropertyEvent));
  fprintf (out, "   ((offset |XPropertyEvent| type) %ld . int)\n", (long)((char*)&(S.type) - (char*)&S));
  fprintf (out, "   ((offset |XPropertyEvent| serial) %ld . ulong)\n", (long)((char*)&(S.serial) - (char*)&S));
  fprintf (out, "   ((offset |XPropertyEvent| send_event) %ld . |Bool|)\n", (long)((char*)&(S.send_event) - (char*)&S));
  fprintf (out, "   ((offset |XPropertyEvent| display) %ld . (* |Display|))\n", (long)((char*)&(S.display) - (char*)&S));
  fprintf (out, "   ((offset |XPropertyEvent| window) %ld . |Window|)\n", (long)((char*)&(S.window) - (char*)&S));
  fprintf (out, "   ((offset |XPropertyEvent| atom) %ld . |Atom|)\n", (long)((char*)&(S.atom) - (char*)&S));
  fprintf (out, "   ((offset |XPropertyEvent| time) %ld . |Time|)\n", (long)((char*)&(S.time) - (char*)&S));
  fprintf (out, "   ((offset |XPropertyEvent| state) %ld . int)\n", (long)((char*)&(S.state) - (char*)&S));
}

void
grovel_type_XMotionEvent (FILE * out)
{
  XMotionEvent S;
  fprintf (out, "   ((sizeof |XMotionEvent|) . %ld)\n", (long) sizeof (XMotionEvent));
  fprintf (out, "   ((offset |XMotionEvent| x) %ld . int)\n", (long)((char*)&(S.x) - (char*)&S));
  fprintf (out, "   ((offset |XMotionEvent| y) %ld . int)\n", (long)((char*)&(S.y) - (char*)&S));
  fprintf (out, "   ((offset |XMotionEvent| state) %ld . uint)\n", (long)((char*)&(S.state) - (char*)&S));
}

void
grovel_type_XConfigureEvent (FILE * out)
{
  XConfigureEvent S;
  fprintf (out, "   ((sizeof |XConfigureEvent|) . %ld)\n", (long) sizeof (XConfigureEvent));
  fprintf (out, "   ((offset |XConfigureEvent| width) %ld . int)\n", (long)((char*)&(S.width) - (char*)&S));
  fprintf (out, "   ((offset |XConfigureEvent| height) %ld . int)\n", (long)((char*)&(S.height) - (char*)&S));
}

void
grovel_type_XExposeEvent (FILE * out)
{
  XExposeEvent S;
  fprintf (out, "   ((sizeof |XExposeEvent|) . %ld)\n", (long) sizeof (XExposeEvent));
  fprintf (out, "   ((offset |XExposeEvent| x) %ld . int)\n", (long)((char*)&(S.x) - (char*)&S));
  fprintf (out, "   ((offset |XExposeEvent| y) %ld . int)\n", (long)((char*)&(S.y) - (char*)&S));
  fprintf (out, "   ((offset |XExposeEvent| width) %ld . int)\n", (long)((char*)&(S.width) - (char*)&S));
  fprintf (out, "   ((offset |XExposeEvent| height) %ld . int)\n", (long)((char*)&(S.height) - (char*)&S));
}

void
grovel_type_XGraphicsExposeEvent (FILE * out)
{
  XGraphicsExposeEvent S;
  fprintf (out, "   ((sizeof |XGraphicsExposeEvent|) . %ld)\n", (long) sizeof (XGraphicsExposeEvent));
  fprintf (out, "   ((offset |XGraphicsExposeEvent| x) %ld . int)\n", (long)((char*)&(S.x) - (char*)&S));
  fprintf (out, "   ((offset |XGraphicsExposeEvent| y) %ld . int)\n", (long)((char*)&(S.y) - (char*)&S));
  fprintf (out, "   ((offset |XGraphicsExposeEvent| width) %ld . int)\n", (long)((char*)&(S.width) - (char*)&S));
  fprintf (out, "   ((offset |XGraphicsExposeEvent| height) %ld . int)\n", (long)((char*)&(S.height) - (char*)&S));
}

void
grovel_type_XVisibilityEvent (FILE * out)
{
  XVisibilityEvent S;
  fprintf (out, "   ((sizeof |XVisibilityEvent|) . %ld)\n", (long) sizeof (XVisibilityEvent));
  fprintf (out, "   ((offset |XVisibilityEvent| state) %ld . int)\n", (long)((char*)&(S.state) - (char*)&S));
}

void
grovel_type_XSelectionClearEvent (FILE * out)
{
  XSelectionClearEvent S;
  fprintf (out, "   ((sizeof |XSelectionClearEvent|) . %ld)\n", (long) sizeof (XSelectionClearEvent));
  fprintf (out, "   ((offset |XSelectionClearEvent| selection) %ld . |Atom|)\n", (long)((char*)&(S.selection) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionClearEvent| time) %ld . |Time|)\n", (long)((char*)&(S.time) - (char*)&S));
}

void
grovel_type_XSelectionEvent (FILE * out)
{
  XSelectionEvent S;
  fprintf (out, "   ((sizeof |XSelectionEvent|) . %ld)\n", (long) sizeof (XSelectionEvent));
  fprintf (out, "   ((offset |XSelectionEvent| type) %ld . int)\n", (long)((char*)&(S.type) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionEvent| serial) %ld . ulong)\n", (long)((char*)&(S.serial) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionEvent| send_event) %ld . |Bool|)\n", (long)((char*)&(S.send_event) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionEvent| display) %ld . (* |Display|))\n", (long)((char*)&(S.display) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionEvent| requestor) %ld . |Window|)\n", (long)((char*)&(S.requestor) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionEvent| selection) %ld . |Atom|)\n", (long)((char*)&(S.selection) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionEvent| target) %ld . |Atom|)\n", (long)((char*)&(S.target) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionEvent| property) %ld . |Atom|)\n", (long)((char*)&(S.property) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionEvent| time) %ld . |Time|)\n", (long)((char*)&(S.time) - (char*)&S));
}

void
grovel_type_XSelectionRequestEvent (FILE * out)
{
  XSelectionRequestEvent S;
  fprintf (out, "   ((sizeof |XSelectionRequestEvent|) . %ld)\n", (long) sizeof (XSelectionRequestEvent));
  fprintf (out, "   ((offset |XSelectionRequestEvent| type) %ld . int)\n", (long)((char*)&(S.type) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionRequestEvent| serial) %ld . ulong)\n", (long)((char*)&(S.serial) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionRequestEvent| send_event) %ld . |Bool|)\n", (long)((char*)&(S.send_event) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionRequestEvent| display) %ld . (* |Display|))\n", (long)((char*)&(S.display) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionRequestEvent| owner) %ld . |Window|)\n", (long)((char*)&(S.owner) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionRequestEvent| requestor) %ld . |Window|)\n", (long)((char*)&(S.requestor) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionRequestEvent| selection) %ld . |Atom|)\n", (long)((char*)&(S.selection) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionRequestEvent| target) %ld . |Atom|)\n", (long)((char*)&(S.target) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionRequestEvent| property) %ld . |Atom|)\n", (long)((char*)&(S.property) - (char*)&S));
  fprintf (out, "   ((offset |XSelectionRequestEvent| time) %ld . |Time|)\n", (long)((char*)&(S.time) - (char*)&S));
}

void
grovel_type_XVisualInfo (FILE * out)
{
  XVisualInfo S;
  fprintf (out, "   ((sizeof |XVisualInfo|) . %ld)\n", (long) sizeof (XVisualInfo));
  fprintf (out, "   ((offset |XVisualInfo| visual) %ld . (* |Visual|))\n", (long)((char*)&(S.visual) - (char*)&S));
  fprintf (out, "   ((offset |XVisualInfo| visualid) %ld . |VisualID|)\n", (long)((char*)&(S.visualid) - (char*)&S));
  fprintf (out, "   ((offset |XVisualInfo| screen) %ld . int)\n", (long)((char*)&(S.screen) - (char*)&S));
  fprintf (out, "   ((offset |XVisualInfo| depth) %ld . int)\n", (long)((char*)&(S.depth) - (char*)&S));
  fprintf (out, "   ((offset |XVisualInfo| class) %ld . int)\n", (long)((char*)&(S.class) - (char*)&S));
  fprintf (out, "   ((offset |XVisualInfo| red_mask) %ld . ulong)\n", (long)((char*)&(S.red_mask) - (char*)&S));
  fprintf (out, "   ((offset |XVisualInfo| green_mask) %ld . ulong)\n", (long)((char*)&(S.green_mask) - (char*)&S));
  fprintf (out, "   ((offset |XVisualInfo| blue_mask) %ld . ulong)\n", (long)((char*)&(S.blue_mask) - (char*)&S));
  fprintf (out, "   ((offset |XVisualInfo| colormap_size) %ld . int)\n", (long)((char*)&(S.colormap_size) - (char*)&S));
  fprintf (out, "   ((offset |XVisualInfo| bits_per_rgb) %ld . int)\n", (long)((char*)&(S.bits_per_rgb) - (char*)&S));
}

void
grovel_type_XFontStruct (FILE * out)
{
  XFontStruct S;
  fprintf (out, "   ((sizeof |XFontStruct|) . %ld)\n", (long) sizeof (XFontStruct));
  fprintf (out, "   ((offset |XFontStruct| direction) %ld . uint)\n", (long)((char*)&(S.direction) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| min_char_or_byte2) %ld . uint)\n", (long)((char*)&(S.min_char_or_byte2) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| max_char_or_byte2) %ld . uint)\n", (long)((char*)&(S.max_char_or_byte2) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| min_byte1) %ld . uint)\n", (long)((char*)&(S.min_byte1) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| max_byte1) %ld . uint)\n", (long)((char*)&(S.max_byte1) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| all_chars_exist) %ld . |Bool|)\n", (long)((char*)&(S.all_chars_exist) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| default_char) %ld . uint)\n", (long)((char*)&(S.default_char) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| min_bounds) %ld . |XCharStruct|)\n", (long)((char*)&(S.min_bounds) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| min_bounds lbearing) %ld . short)\n", (long)((char*)&(S.min_bounds.lbearing) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| min_bounds rbearing) %ld . short)\n", (long)((char*)&(S.min_bounds.rbearing) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| min_bounds width) %ld . short)\n", (long)((char*)&(S.min_bounds.width) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| min_bounds ascent) %ld . short)\n", (long)((char*)&(S.min_bounds.ascent) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| min_bounds descent) %ld . short)\n", (long)((char*)&(S.min_bounds.descent) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| min_bounds attributes) %ld . ushort)\n", (long)((char*)&(S.min_bounds.attributes) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| max_bounds) %ld . |XCharStruct|)\n", (long)((char*)&(S.max_bounds) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| max_bounds lbearing) %ld . short)\n", (long)((char*)&(S.max_bounds.lbearing) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| max_bounds rbearing) %ld . short)\n", (long)((char*)&(S.max_bounds.rbearing) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| max_bounds width) %ld . short)\n", (long)((char*)&(S.max_bounds.width) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| max_bounds ascent) %ld . short)\n", (long)((char*)&(S.max_bounds.ascent) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| max_bounds descent) %ld . short)\n", (long)((char*)&(S.max_bounds.descent) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| max_bounds attributes) %ld . ushort)\n", (long)((char*)&(S.max_bounds.attributes) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| per_char) %ld . (* |XCharStruct|))\n", (long)((char*)&(S.per_char) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| ascent) %ld . int)\n", (long)((char*)&(S.ascent) - (char*)&S));
  fprintf (out, "   ((offset |XFontStruct| descent) %ld . int)\n", (long)((char*)&(S.descent) - (char*)&S));
}

void
grovel_type_XCharStruct (FILE * out)
{
  XCharStruct S;
  fprintf (out, "   ((sizeof |XCharStruct|) . %ld)\n", (long) sizeof (XCharStruct));
  fprintf (out, "   ((offset |XCharStruct| lbearing) %ld . short)\n", (long)((char*)&(S.lbearing) - (char*)&S));
  fprintf (out, "   ((offset |XCharStruct| rbearing) %ld . short)\n", (long)((char*)&(S.rbearing) - (char*)&S));
  fprintf (out, "   ((offset |XCharStruct| width) %ld . short)\n", (long)((char*)&(S.width) - (char*)&S));
  fprintf (out, "   ((offset |XCharStruct| ascent) %ld . short)\n", (long)((char*)&(S.ascent) - (char*)&S));
  fprintf (out, "   ((offset |XCharStruct| descent) %ld . short)\n", (long)((char*)&(S.descent) - (char*)&S));
  fprintf (out, "   ((offset |XCharStruct| attributes) %ld . ushort)\n", (long)((char*)&(S.attributes) - (char*)&S));
}

int
main (void)
{
  FILE * out = fopen ("x11-const.scm", "w");
  if (out == NULL) {
    perror ("could not open x11-const.scm");
    return 1;
  }
  fprintf (out, "'( ;; x11 constants\n");
  fprintf (out, "  ( ;; enum member values\n");
  grovel_enums(out);
  fprintf (out, "   )\n");
  fprintf (out, "  ( ;; struct values\n");
  grovel_basics(out);
  grovel_type_XCharStruct (out);
  grovel_type_XFontStruct (out);
  grovel_type_XVisualInfo (out);
  grovel_type_XSelectionRequestEvent (out);
  grovel_type_XSelectionEvent (out);
  grovel_type_XSelectionClearEvent (out);
  grovel_type_XVisibilityEvent (out);
  grovel_type_XGraphicsExposeEvent (out);
  grovel_type_XExposeEvent (out);
  grovel_type_XConfigureEvent (out);
  grovel_type_XMotionEvent (out);
  grovel_type_XPropertyEvent (out);
  grovel_type_XEvent (out);
  grovel_type_XKeyEvent (out);
  grovel_type_XButtonEvent (out);
  grovel_type_XPoint (out);
  fprintf (out, "   ))\n");
  if (fclose (out)) {
    perror ("could not close x11-const.scm");
    return 1;
  }
  return 0;
}
