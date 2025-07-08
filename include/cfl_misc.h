#ifndef __CFL_MISC_H__
#define __CFL_MISC_H__

#include "cfl_macros.h"

#ifdef __cplusplus
extern "C" {
#endif

WIDGET_DECLARE(Fl_Spinner)

CFLTK_EXPORT double Fl_Spinner_minimum(Fl_Spinner *);

CFLTK_EXPORT void Fl_Spinner_set_minimum(Fl_Spinner *, double a);

CFLTK_EXPORT double Fl_Spinner_maximum(Fl_Spinner *);

CFLTK_EXPORT void Fl_Spinner_set_maximum(Fl_Spinner *, double a);

CFLTK_EXPORT void Fl_Spinner_set_range(Fl_Spinner *, double a, double b);

CFLTK_EXPORT void Fl_Spinner_set_step(Fl_Spinner *, double a);

CFLTK_EXPORT double Fl_Spinner_step(Fl_Spinner *);

CFLTK_EXPORT int Fl_Spinner_maxsize(const Fl_Spinner *self);

CFLTK_EXPORT void Fl_Spinner_set_maxsize(Fl_Spinner *self, int m);

CFLTK_EXPORT int Fl_Spinner_text_font(const Fl_Spinner *self);

CFLTK_EXPORT void Fl_Spinner_set_text_font(Fl_Spinner *self, int s);

CFLTK_EXPORT int Fl_Spinner_text_size(const Fl_Spinner *self);

CFLTK_EXPORT void Fl_Spinner_set_text_size(Fl_Spinner *self, int s);

CFLTK_EXPORT unsigned int Fl_Spinner_text_color(const Fl_Spinner *self);

CFLTK_EXPORT void Fl_Spinner_set_text_color(Fl_Spinner *self, unsigned int n);

CFLTK_EXPORT double Fl_Spinner_value(const Fl_Spinner *);

CFLTK_EXPORT void Fl_Spinner_set_value(Fl_Spinner *, double);

CFLTK_EXPORT void Fl_Spinner_set_wrap(Fl_Spinner *self, int flag);

CFLTK_EXPORT int Fl_Spinner_wrap(const Fl_Spinner *self);

WIDGET_DECLARE(Fl_Clock)

WIDGET_DECLARE(Fl_Chart)

CFLTK_EXPORT void Fl_Chart_clear(Fl_Chart *self);

CFLTK_EXPORT void Fl_Chart_add(Fl_Chart *self, double val, const char *str, unsigned col);

CFLTK_EXPORT void Fl_Chart_insert(
    Fl_Chart *self, int ind, double val, const char *str, unsigned col
);

CFLTK_EXPORT void Fl_Chart_replace(
    Fl_Chart *self, int ind, double val, const char *str, unsigned col
);

CFLTK_EXPORT void Fl_Chart_set_bounds(Fl_Chart *self, double a, double b);

CFLTK_EXPORT int Fl_Chart_size(const Fl_Chart *self);

CFLTK_EXPORT int Fl_Chart_maxsize(const Fl_Chart *self);

CFLTK_EXPORT void Fl_Chart_set_maxsize(Fl_Chart *self, int m);

CFLTK_EXPORT int Fl_Chart_text_font(const Fl_Chart *self);

CFLTK_EXPORT void Fl_Chart_set_text_font(Fl_Chart *self, int s);

CFLTK_EXPORT int Fl_Chart_text_size(const Fl_Chart *self);

CFLTK_EXPORT void Fl_Chart_set_text_size(Fl_Chart *self, int s);

CFLTK_EXPORT unsigned int Fl_Chart_text_color(const Fl_Chart *self);

CFLTK_EXPORT void Fl_Chart_set_text_color(Fl_Chart *self, unsigned int n);

CFLTK_EXPORT int Fl_Chart_is_autosize(const Fl_Chart *self);

CFLTK_EXPORT void Fl_Chart_make_autosize(Fl_Chart *self, int n);

CFLTK_EXPORT void Fl_Chart_bounds(Fl_Chart *self, double *a, double *b);

WIDGET_DECLARE(Fl_Progress)

CFLTK_EXPORT double Fl_Progress_minimum(Fl_Progress *);

CFLTK_EXPORT void Fl_Progress_set_minimum(Fl_Progress *, double a);

CFLTK_EXPORT double Fl_Progress_maximum(Fl_Progress *);

CFLTK_EXPORT void Fl_Progress_set_maximum(Fl_Progress *, double a);

CFLTK_EXPORT double Fl_Progress_value(Fl_Progress *);

CFLTK_EXPORT void Fl_Progress_set_value(Fl_Progress *, double);

CFLTK_EXPORT float Fl_Tooltip_delay(void);

CFLTK_EXPORT void Fl_Tooltip_set_delay(float f);

CFLTK_EXPORT float Fl_Tooltip_hidedelay(void);

CFLTK_EXPORT void Fl_Tooltip_set_hidedelay(float f);

CFLTK_EXPORT float Fl_Tooltip_hoverdelay(void);

CFLTK_EXPORT void Fl_Tooltip_set_hoverdelay(float f);

CFLTK_EXPORT int Fl_Tooltip_enabled(void);

CFLTK_EXPORT void Fl_Tooltip_enable(int b);

CFLTK_EXPORT void Fl_Tooltip_disable(void);

// void (*Fl_Tooltip_enter)(Fl_Widget *w);

CFLTK_EXPORT void Fl_Tooltip_enter_area(
    Fl_Widget *w, int X, int Y, int W, int H, const char *tip
);

// void (*Fl_Tooltip_exit)(Fl_Widget *w);

CFLTK_EXPORT void *Fl_Tooltip_current_widget(void);

CFLTK_EXPORT void Fl_Tooltip_current(Fl_Widget *);

CFLTK_EXPORT int Fl_Tooltip_font(void);

CFLTK_EXPORT void Fl_Tooltip_set_font(int i);

CFLTK_EXPORT int Fl_Tooltip_font_size(void);

CFLTK_EXPORT void Fl_Tooltip_set_font_size(int s);

CFLTK_EXPORT int Fl_Tooltip_color(void);

CFLTK_EXPORT void Fl_Tooltip_set_color(unsigned int c);

CFLTK_EXPORT int Fl_Tooltip_text_color(void);

CFLTK_EXPORT void Fl_Tooltip_set_text_color(unsigned int c);

CFLTK_EXPORT int Fl_Tooltip_margin_width(void);

CFLTK_EXPORT void Fl_Tooltip_set_margin_width(int v);

CFLTK_EXPORT int Fl_Tooltip_margin_height(void);

CFLTK_EXPORT void Fl_Tooltip_set_margin_height(int v);

CFLTK_EXPORT int Fl_Tooltip_wrap_width(void);

CFLTK_EXPORT void Fl_Tooltip_set_wrap_width(int v);

CFLTK_EXPORT void *Fl_Tooltip_current_window(void);

WIDGET_DECLARE(Fl_Help_View)

CFLTK_EXPORT const char *Fl_Help_View_directory(const Fl_Help_View *self);

CFLTK_EXPORT const char *Fl_Help_View_filename(const Fl_Help_View *self);

CFLTK_EXPORT int Fl_Help_View_find(Fl_Help_View *self, const char *s, int p);

CFLTK_EXPORT const char *Fl_Help_View_value(const Fl_Help_View *self);

CFLTK_EXPORT void Fl_Help_View_set_value(Fl_Help_View *self, const char *val);

CFLTK_EXPORT void Fl_Help_View_clear_selection(Fl_Help_View *self);

CFLTK_EXPORT void Fl_Help_View_select_all(Fl_Help_View *self);

CFLTK_EXPORT void Fl_Help_View_set_topline_str(Fl_Help_View *self, const char *n);

CFLTK_EXPORT void Fl_Help_View_set_topline(Fl_Help_View *self, int);

CFLTK_EXPORT int Fl_Help_View_topline(const Fl_Help_View *self);

CFLTK_EXPORT void Fl_Help_View_set_leftline(Fl_Help_View *self, int);

CFLTK_EXPORT int Fl_Help_View_leftline(const Fl_Help_View *self);

CFLTK_EXPORT void Fl_Help_View_set_text_color(Fl_Help_View *self, unsigned int c);

CFLTK_EXPORT unsigned int Fl_Help_View_text_color(Fl_Help_View *self);

CFLTK_EXPORT void Fl_Help_View_set_text_font(Fl_Help_View *self, int f);

CFLTK_EXPORT int Fl_Help_View_text_font(Fl_Help_View *self);

CFLTK_EXPORT void Fl_Help_View_set_text_size(Fl_Help_View *self, int s);

CFLTK_EXPORT int Fl_Help_View_text_size(Fl_Help_View *self);

CFLTK_EXPORT int Fl_Help_View_scrollbar_size(const Fl_Help_View *self);

CFLTK_EXPORT void Fl_Help_View_set_scrollbar_size(Fl_Help_View *self, int newSize);

CFLTK_EXPORT int Fl_Help_View_load(Fl_Help_View *self, const char *f);

WIDGET_DECLARE(Fl_Input_Choice)

CFLTK_EXPORT void Fl_Input_Choice_set_down_box(Fl_Input_Choice *self, int box);

CFLTK_EXPORT int Fl_Input_Choice_down_box(const Fl_Input_Choice *self);

CFLTK_EXPORT void Fl_Input_Choice_add(Fl_Input_Choice *self, const char *s);

CFLTK_EXPORT void Fl_Input_Choice_clear(Fl_Input_Choice *self);

CFLTK_EXPORT const char *Fl_Input_Choice_value(const Fl_Input_Choice *self);

CFLTK_EXPORT int Fl_Input_Choice_value_index(Fl_Input_Choice *self);

CFLTK_EXPORT void Fl_Input_Choice_set_value(Fl_Input_Choice *self, const char *val);

CFLTK_EXPORT void Fl_Input_Choice_set_value_index(Fl_Input_Choice *self, int val);

CFLTK_EXPORT void *Fl_Input_Choice_input(Fl_Input_Choice *self);

CFLTK_EXPORT void *Fl_Input_Choice_menu_button(Fl_Input_Choice *self);

CFLTK_EXPORT void Fl_Input_Choice_set_text_color(Fl_Input_Choice *self, unsigned int c);

CFLTK_EXPORT unsigned int Fl_Input_Choice_text_color(Fl_Input_Choice *self);

CFLTK_EXPORT void Fl_Input_Choice_set_text_font(Fl_Input_Choice *self, int f);

CFLTK_EXPORT int Fl_Input_Choice_text_font(Fl_Input_Choice *self);

CFLTK_EXPORT void Fl_Input_Choice_set_text_size(Fl_Input_Choice *self, int s);

CFLTK_EXPORT int Fl_Input_Choice_text_size(Fl_Input_Choice *self);

#ifdef __cplusplus
}
#endif
#endif
