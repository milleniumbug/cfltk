#ifndef __CFL_BROWSER_H__
#define __CFL_BROWSER_H__

#include "cfl_macros.h"

#ifdef __cplusplus
extern "C" {
#endif

#define BROWSER_DECLARE(widget)                                                \
    CFLTK_EXPORT int widget##_value(widget *);                                              \
    CFLTK_EXPORT void widget##_remove(widget *, int line);                                  \
    CFLTK_EXPORT void widget##_add(widget *, const char *newtext);                          \
    CFLTK_EXPORT void widget##_insert(widget *, int line, const char *newtext);             \
    CFLTK_EXPORT void widget##_move(widget *, int to, int from);                            \
    CFLTK_EXPORT void widget##_swap(widget *, int a, int b);                                \
    CFLTK_EXPORT void widget##_clear(widget *);                                             \
    CFLTK_EXPORT int widget##_size(const widget *);                                         \
    CFLTK_EXPORT int widget##_select(widget *, int line);                                   \
    CFLTK_EXPORT int widget##_select_ext(widget *, int line, int val);                      \
    CFLTK_EXPORT int widget##_selected(const widget *, int line);                           \
    CFLTK_EXPORT const char *widget##_text(const widget *, int line);                       \
    CFLTK_EXPORT void widget##_set_text(widget *, int line, const char *newtext);           \
    CFLTK_EXPORT void widget##_load_file(widget *, const char *file);                       \
    CFLTK_EXPORT int widget##_text_size(widget *);                                          \
    CFLTK_EXPORT void widget##_set_text_size(widget *, int s);                              \
    CFLTK_EXPORT void widget##_set_icon(widget *, int line, void *icon);                    \
    CFLTK_EXPORT void *widget##_icon(const widget *, int line);                             \
    CFLTK_EXPORT void widget##_remove_icon(widget *, int line);                             \
    CFLTK_EXPORT void widget##_topline(widget *self, int line);                             \
    CFLTK_EXPORT int widget##_is_topline(widget *self);                                     \
    CFLTK_EXPORT void widget##_bottomline(widget *self, int line);                          \
    CFLTK_EXPORT void widget##_middleline(widget *self, int line);                          \
    CFLTK_EXPORT char widget##_format_char(const widget *self);                             \
    CFLTK_EXPORT void widget##_set_format_char(widget *self, char c);                       \
    CFLTK_EXPORT char widget##_column_char(const widget *self);                             \
    CFLTK_EXPORT void widget##_set_column_char(widget *self, char c);                       \
    CFLTK_EXPORT const int *widget##_column_widths(const widget *self);                     \
    CFLTK_EXPORT void widget##_set_column_widths(widget *self, const int *arr);             \
    CFLTK_EXPORT int widget##_displayed(const widget *self, int line);                      \
    CFLTK_EXPORT void widget##_make_visible(widget *self, int line);                        \
    CFLTK_EXPORT int widget##_position(const widget *self);                                 \
    CFLTK_EXPORT void widget##_set_position(widget *self, int pos);                         \
    CFLTK_EXPORT int widget##_hposition(const widget *self);                                \
    CFLTK_EXPORT void widget##_set_hposition(widget *self, int);                            \
    CFLTK_EXPORT unsigned char widget##_has_scrollbar(const widget *self);                  \
    CFLTK_EXPORT void widget##_set_has_scrollbar(widget *self, unsigned char mode);         \
    CFLTK_EXPORT int widget##_scrollbar_size(const widget *self);                           \
    CFLTK_EXPORT void widget##_set_scrollbar_size(widget *self, int newSize);               \
    CFLTK_EXPORT void widget##_sort(widget *self);                                          \
    CFLTK_EXPORT void *widget##_scrollbar(widget *self);                                    \
    CFLTK_EXPORT void *widget##_hscrollbar(widget *self);                                   \
    CFLTK_EXPORT void *widget##_data(const widget *self, int line);                         \
    CFLTK_EXPORT void widget##_set_data(widget *self, int line, void *data);                \
    CFLTK_EXPORT void widget##_hide_line(widget *self, int line);

WIDGET_DECLARE(Fl_Browser)

BROWSER_DECLARE(Fl_Browser)

WIDGET_DECLARE(Fl_Hold_Browser)

BROWSER_DECLARE(Fl_Hold_Browser)

WIDGET_DECLARE(Fl_Select_Browser)

BROWSER_DECLARE(Fl_Select_Browser)

WIDGET_DECLARE(Fl_Multi_Browser)

BROWSER_DECLARE(Fl_Multi_Browser)

WIDGET_DECLARE(Fl_File_Browser)

CFLTK_EXPORT unsigned Fl_File_Browser_iconsize(const Fl_File_Browser *self);

CFLTK_EXPORT void Fl_File_Browser_set_iconsize(Fl_File_Browser *self, unsigned s);

CFLTK_EXPORT void Fl_File_Browser_set_filter(Fl_File_Browser *self, const char *pattern);

CFLTK_EXPORT const char *Fl_File_Browser_filter(const Fl_File_Browser *self);

CFLTK_EXPORT int Fl_File_Browser_filetype(const Fl_File_Browser *self);

CFLTK_EXPORT void Fl_File_Browser_set_filetype(Fl_File_Browser *self, int t);

BROWSER_DECLARE(Fl_File_Browser)

WIDGET_DECLARE(Fl_Check_Browser)

CFLTK_EXPORT int Fl_Check_Browser_add(Fl_Check_Browser *self, const char *s, int b);

CFLTK_EXPORT int Fl_Check_Browser_remove(Fl_Check_Browser *self, int item);

CFLTK_EXPORT void Fl_Check_Browser_clear(Fl_Check_Browser *self);

CFLTK_EXPORT int Fl_Check_Browser_nitems(const Fl_Check_Browser *self);

CFLTK_EXPORT int Fl_Check_Browser_nchecked(const Fl_Check_Browser *self);

CFLTK_EXPORT int Fl_Check_Browser_checked(const Fl_Check_Browser *self, int item);

CFLTK_EXPORT void Fl_Check_Browser_set_checked(Fl_Check_Browser *self, int item);

CFLTK_EXPORT void Fl_Check_Browser_check_all(Fl_Check_Browser *self);

CFLTK_EXPORT void Fl_Check_Browser_check_none(Fl_Check_Browser *self);

CFLTK_EXPORT int Fl_Check_Browser_value(const Fl_Check_Browser *self);

CFLTK_EXPORT const char *Fl_Check_Browser_text(const Fl_Check_Browser *self, int item);

CFLTK_EXPORT int Fl_Check_Browser_position(const Fl_Check_Browser *self);

CFLTK_EXPORT void Fl_Check_Browser_set_position(Fl_Check_Browser *self, int pos);

CFLTK_EXPORT int Fl_Check_Browser_hposition(const Fl_Check_Browser *self);

CFLTK_EXPORT void Fl_Check_Browser_set_hposition(Fl_Check_Browser *self, int);

CFLTK_EXPORT unsigned char Fl_Check_Browser_has_scrollbar(const Fl_Check_Browser *self);

CFLTK_EXPORT const void *Fl_Check_Browser_scrollbar(const Fl_Check_Browser *self);

CFLTK_EXPORT const void *Fl_Check_Browser_hscrollbar(const Fl_Check_Browser *self);

CFLTK_EXPORT void Fl_Check_Browser_set_has_scrollbar(
    Fl_Check_Browser *self, unsigned char mode
);

CFLTK_EXPORT int Fl_Check_Browser_scrollbar_size(const Fl_Check_Browser *self);

CFLTK_EXPORT void Fl_Check_Browser_set_scrollbar_size(Fl_Check_Browser *self, int newSize);

CFLTK_EXPORT void Fl_Check_Browser_sort(Fl_Check_Browser *self);

CFLTK_EXPORT void Fl_Check_Browser_set_text_color(Fl_Check_Browser *self, unsigned int c);

CFLTK_EXPORT unsigned int Fl_Check_Browser_text_color(Fl_Check_Browser *self);

CFLTK_EXPORT void Fl_Check_Browser_set_text_font(Fl_Check_Browser *self, int f);

CFLTK_EXPORT int Fl_Check_Browser_text_font(Fl_Check_Browser *self);

CFLTK_EXPORT void Fl_Check_Browser_set_text_size(Fl_Check_Browser *self, int s);

CFLTK_EXPORT int Fl_Check_Browser_text_size(Fl_Check_Browser *self);

#ifdef __cplusplus
}
#endif
#endif
