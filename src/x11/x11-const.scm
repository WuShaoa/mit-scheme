'( ;; x11 constants
  ( ;; enum member values
   (|event_type_supremum| . 19)
   (|event_type_property_notify| . 18)
   (|event_type_selection_request| . 17)
   (|event_type_selection_notify| . 16)
   (|event_type_selection_clear| . 15)
   (|event_type_visibility| . 14)
   (|event_type_take_focus| . 13)
   (|event_type_unmap| . 12)
   (|event_type_map| . 11)
   (|event_type_delete_window| . 10)
   (|event_type_expose| . 9)
   (|event_type_motion| . 8)
   (|event_type_leave| . 7)
   (|event_type_key_press| . 6)
   (|event_type_focus_out| . 5)
   (|event_type_focus_in| . 4)
   (|event_type_enter| . 3)
   (|event_type_configure| . 2)
   (|event_type_button_up| . 1)
   (|event_type_button_down| . 0)
   (|VisibilityNotify| . 15)
   (|UnmapNotify| . 18)
   (|SelectionRequest| . 30)
   (|SelectionNotify| . 31)
   (|SelectionClear| . 29)
   (|PropertyNotify| . 28)
   (|MotionNotify| . 6)
   (|MapNotify| . 19)
   (|LeaveNotify| . 8)
   (|KeyPress| . 2)
   (|GraphicsExpose| . 13)
   (|FocusOut| . 10)
   (|FocusIn| . 9)
   (|Expose| . 12)
   (|EnterNotify| . 7)
   (|ConfigureNotify| . 22)
   (|ClientMessage| . 33)
   (|ButtonRelease| . 5)
   (|ButtonPress| . 4)
   (|XK_BackSpace| . 65288)
   (|True| . 1)
   (|NoSymbol| . 0)
   (|VisualAllMask| . 511)
   (|VisualBitsPerRGBMask| . 256)
   (|VisualColormapSizeMask| . 128)
   (|VisualBlueMaskMask| . 64)
   (|VisualGreenMaskMask| . 32)
   (|VisualRedMaskMask| . 16)
   (|VisualClassMask| . 8)
   (|VisualDepthMask| . 4)
   (|VisualScreenMask| . 2)
   (|VisualIDMask| . 1)
   (|VisualNoMask| . 0)
   (|AnyPropertyType| . 0)
   (|VisibilityFullyObscured| . 2)
   (|VisibilityPartiallyObscured| . 1)
   (|VisibilityUnobscured| . 0)
   (|Button5Mask| . 4096)
   (|Button4Mask| . 2048)
   (|Button3Mask| . 1024)
   (|Button2Mask| . 512)
   (|Button1Mask| . 256)
   (|Mod5Mask| . 128)
   (|Mod4Mask| . 64)
   (|Mod3Mask| . 32)
   (|Mod2Mask| . 16)
   (|Mod1Mask| . 8)
   (|ControlMask| . 4)
   (|LockMask| . 2)
   (|ShiftMask| . 1)
   )
  ( ;; struct values
   ((sizeof char) . 1)
   ((sizeof uchar) . 1)
   ((sizeof short) . 2)
   ((sizeof ushort) . 2)
   ((sizeof int) . 4)
   ((sizeof uint) . 4)
   ((sizeof long) . 8)
   ((sizeof ulong) . 8)
   ((sizeof float) . 4)
   ((sizeof double) . 8)
   ((sizeof *) . 8)
   ((sizeof |XCharStruct|) . 12)
   ((offset |XCharStruct| lbearing) 0 . short)
   ((offset |XCharStruct| rbearing) 2 . short)
   ((offset |XCharStruct| width) 4 . short)
   ((offset |XCharStruct| ascent) 6 . short)
   ((offset |XCharStruct| descent) 8 . short)
   ((offset |XCharStruct| attributes) 10 . ushort)
   ((sizeof |XFontStruct|) . 96)
   ((offset |XFontStruct| direction) 16 . uint)
   ((offset |XFontStruct| min_char_or_byte2) 20 . uint)
   ((offset |XFontStruct| max_char_or_byte2) 24 . uint)
   ((offset |XFontStruct| min_byte1) 28 . uint)
   ((offset |XFontStruct| max_byte1) 32 . uint)
   ((offset |XFontStruct| all_chars_exist) 36 . |Bool|)
   ((offset |XFontStruct| default_char) 40 . uint)
   ((offset |XFontStruct| min_bounds) 56 . |XCharStruct|)
   ((offset |XFontStruct| min_bounds lbearing) 56 . short)
   ((offset |XFontStruct| min_bounds rbearing) 58 . short)
   ((offset |XFontStruct| min_bounds width) 60 . short)
   ((offset |XFontStruct| min_bounds ascent) 62 . short)
   ((offset |XFontStruct| min_bounds descent) 64 . short)
   ((offset |XFontStruct| min_bounds attributes) 66 . ushort)
   ((offset |XFontStruct| max_bounds) 68 . |XCharStruct|)
   ((offset |XFontStruct| max_bounds lbearing) 68 . short)
   ((offset |XFontStruct| max_bounds rbearing) 70 . short)
   ((offset |XFontStruct| max_bounds width) 72 . short)
   ((offset |XFontStruct| max_bounds ascent) 74 . short)
   ((offset |XFontStruct| max_bounds descent) 76 . short)
   ((offset |XFontStruct| max_bounds attributes) 78 . ushort)
   ((offset |XFontStruct| per_char) 80 . (* |XCharStruct|))
   ((offset |XFontStruct| ascent) 88 . int)
   ((offset |XFontStruct| descent) 92 . int)
   ((sizeof |XVisualInfo|) . 64)
   ((offset |XVisualInfo| visual) 0 . (* |Visual|))
   ((offset |XVisualInfo| visualid) 8 . |VisualID|)
   ((offset |XVisualInfo| screen) 16 . int)
   ((offset |XVisualInfo| depth) 20 . int)
   ((offset |XVisualInfo| class) 24 . int)
   ((offset |XVisualInfo| red_mask) 32 . ulong)
   ((offset |XVisualInfo| green_mask) 40 . ulong)
   ((offset |XVisualInfo| blue_mask) 48 . ulong)
   ((offset |XVisualInfo| colormap_size) 56 . int)
   ((offset |XVisualInfo| bits_per_rgb) 60 . int)
   ((sizeof |XSelectionRequestEvent|) . 80)
   ((offset |XSelectionRequestEvent| type) 0 . int)
   ((offset |XSelectionRequestEvent| serial) 8 . ulong)
   ((offset |XSelectionRequestEvent| send_event) 16 . |Bool|)
   ((offset |XSelectionRequestEvent| display) 24 . (* |Display|))
   ((offset |XSelectionRequestEvent| owner) 32 . |Window|)
   ((offset |XSelectionRequestEvent| requestor) 40 . |Window|)
   ((offset |XSelectionRequestEvent| selection) 48 . |Atom|)
   ((offset |XSelectionRequestEvent| target) 56 . |Atom|)
   ((offset |XSelectionRequestEvent| property) 64 . |Atom|)
   ((offset |XSelectionRequestEvent| time) 72 . |Time|)
   ((sizeof |XSelectionEvent|) . 72)
   ((offset |XSelectionEvent| type) 0 . int)
   ((offset |XSelectionEvent| serial) 8 . ulong)
   ((offset |XSelectionEvent| send_event) 16 . |Bool|)
   ((offset |XSelectionEvent| display) 24 . (* |Display|))
   ((offset |XSelectionEvent| requestor) 32 . |Window|)
   ((offset |XSelectionEvent| selection) 40 . |Atom|)
   ((offset |XSelectionEvent| target) 48 . |Atom|)
   ((offset |XSelectionEvent| property) 56 . |Atom|)
   ((offset |XSelectionEvent| time) 64 . |Time|)
   ((sizeof |XSelectionClearEvent|) . 56)
   ((offset |XSelectionClearEvent| selection) 40 . |Atom|)
   ((offset |XSelectionClearEvent| time) 48 . |Time|)
   ((sizeof |XVisibilityEvent|) . 48)
   ((offset |XVisibilityEvent| state) 40 . int)
   ((sizeof |XGraphicsExposeEvent|) . 72)
   ((offset |XGraphicsExposeEvent| x) 40 . int)
   ((offset |XGraphicsExposeEvent| y) 44 . int)
   ((offset |XGraphicsExposeEvent| width) 48 . int)
   ((offset |XGraphicsExposeEvent| height) 52 . int)
   ((sizeof |XExposeEvent|) . 64)
   ((offset |XExposeEvent| x) 40 . int)
   ((offset |XExposeEvent| y) 44 . int)
   ((offset |XExposeEvent| width) 48 . int)
   ((offset |XExposeEvent| height) 52 . int)
   ((sizeof |XConfigureEvent|) . 88)
   ((offset |XConfigureEvent| width) 56 . int)
   ((offset |XConfigureEvent| height) 60 . int)
   ((sizeof |XMotionEvent|) . 96)
   ((offset |XMotionEvent| x) 64 . int)
   ((offset |XMotionEvent| y) 68 . int)
   ((offset |XMotionEvent| state) 80 . uint)
   ((sizeof |XPropertyEvent|) . 64)
   ((offset |XPropertyEvent| type) 0 . int)
   ((offset |XPropertyEvent| serial) 8 . ulong)
   ((offset |XPropertyEvent| send_event) 16 . |Bool|)
   ((offset |XPropertyEvent| display) 24 . (* |Display|))
   ((offset |XPropertyEvent| window) 32 . |Window|)
   ((offset |XPropertyEvent| atom) 40 . |Atom|)
   ((offset |XPropertyEvent| time) 48 . |Time|)
   ((offset |XPropertyEvent| state) 56 . int)
   ((sizeof |XEvent|) . 192)
   ((offset |XEvent| type) 0 . int)
   ((sizeof |XKeyEvent|) . 96)
   ((offset |XKeyEvent| type) 0 . int)
   ((offset |XKeyEvent| state) 80 . uint)
   ((offset |XKeyEvent| time) 56 . |Time|)
   ((sizeof |XButtonEvent|) . 96)
   ((offset |XButtonEvent| type) 0 . int)
   ((offset |XButtonEvent| x) 64 . int)
   ((offset |XButtonEvent| y) 68 . int)
   ((offset |XButtonEvent| button) 84 . uint)
   ((offset |XButtonEvent| state) 80 . uint)
   ((offset |XButtonEvent| time) 56 . |Time|)
   ((sizeof |XPoint|) . 4)
   ((offset |XPoint| x) 0 . short)
   ((offset |XPoint| y) 2 . short)
   ))