#ifndef __CFL_INPUT_H__
#define __CFL_INPUT_H__

#include "cfl_macros.h"

#ifdef __cplusplus
extern "C" {
#endif

#define INPUT_DECLARE(widget)                                                  \
    CFLTK_EXPORT int widget##_set_value(widget *, const char *);                            \
    CFLTK_EXPORT const char *widget##_value(widget *);                                      \
    CFLTK_EXPORT int widget##_maximum_size(widget *);                                       \
    CFLTK_EXPORT void widget##_set_maximum_size(widget *, int m);                           \
    CFLTK_EXPORT int widget##_position(widget *);                                           \
    CFLTK_EXPORT int widget##_set_position(widget *, int p);                                \
    CFLTK_EXPORT int widget##_set_mark(widget *, int m);                                    \
    CFLTK_EXPORT int widget##_mark(widget *);                                               \
    CFLTK_EXPORT int widget##_replace(widget *, int b, int e, const char *text, int ilen);  \
    CFLTK_EXPORT int widget##_insert(widget *, const char *t, int l);                       \
    CFLTK_EXPORT int widget##_append(widget *, const char *t, int l, char keep_selection);  \
    CFLTK_EXPORT int widget##_copy(widget *, int clipboard);                                \
    CFLTK_EXPORT int widget##_undo(widget *);                                               \
    CFLTK_EXPORT int widget##_copy_cuts(widget *);                                          \
    CFLTK_EXPORT unsigned int widget##_cursor_color(const widget *);                        \
    CFLTK_EXPORT void widget##_set_cursor_color(widget *, unsigned int s);                  \
    CFLTK_EXPORT int widget##_text_font(widget *);                                          \
    CFLTK_EXPORT void widget##_set_text_font(widget *, int s);                              \
    CFLTK_EXPORT unsigned int widget##_text_color(widget *);                                \
    CFLTK_EXPORT void widget##_set_text_color(widget *, unsigned int s);                    \
    CFLTK_EXPORT int widget##_text_size(widget *);                                          \
    CFLTK_EXPORT void widget##_set_text_size(widget *, int s);                              \
    CFLTK_EXPORT int widget##_readonly(widget *);                                           \
    CFLTK_EXPORT void widget##_set_readonly(widget *, int boolean);                         \
    CFLTK_EXPORT int widget##_wrap(widget *);                                               \
    CFLTK_EXPORT void widget##_set_wrap(widget *, int boolean);                             \
    CFLTK_EXPORT void widget##_set_tab_nav(widget *, int flag);                             \
    CFLTK_EXPORT int widget##_tab_nav(const widget *);

WIDGET_DECLARE(Fl_Input)

INPUT_DECLARE(Fl_Input)

WIDGET_DECLARE(Fl_Int_Input)

INPUT_DECLARE(Fl_Int_Input)

WIDGET_DECLARE(Fl_Float_Input)

INPUT_DECLARE(Fl_Float_Input)

WIDGET_DECLARE(Fl_Multiline_Input)

INPUT_DECLARE(Fl_Multiline_Input)

WIDGET_DECLARE(Fl_Secret_Input)

INPUT_DECLARE(Fl_Secret_Input)

WIDGET_DECLARE(Fl_File_Input)

CFLTK_EXPORT void Fl_File_Input_set_down_box(Fl_File_Input *self, int box);

CFLTK_EXPORT int Fl_File_Input_down_box(const Fl_File_Input *self);

INPUT_DECLARE(Fl_File_Input)

WIDGET_DECLARE(Fl_Output)

INPUT_DECLARE(Fl_Output)

WIDGET_DECLARE(Fl_Multiline_Output)

INPUT_DECLARE(Fl_Multiline_Output)

#ifdef __cplusplus
}
#endif
#endif
