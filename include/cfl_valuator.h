#ifndef __CFL_VALUATOR_H__
#define __CFL_VALUATOR_H__

#include "cfl_macros.h"

#ifdef __cplusplus
extern "C" {
#endif

#define VALUATOR_DECLARE(widget)                                               \
    CFLTK_EXPORT void widget##_set_bounds(widget *, double a, double b);                    \
    CFLTK_EXPORT double widget##_minimum(widget *);                                         \
    CFLTK_EXPORT void widget##_set_minimum(widget *, double a);                             \
    CFLTK_EXPORT double widget##_maximum(widget *);                                         \
    CFLTK_EXPORT void widget##_set_maximum(widget *, double a);                             \
    CFLTK_EXPORT void widget##_set_range(widget *, double a, double b);                     \
    CFLTK_EXPORT void widget##_set_step(widget *, double a, int b);                         \
    CFLTK_EXPORT double widget##_step(widget *);                                            \
    CFLTK_EXPORT void widget##_set_precision(widget *, int digits);                         \
    CFLTK_EXPORT double widget##_value(widget *);                                           \
    CFLTK_EXPORT int widget##_set_value(widget *, double);                                  \
    CFLTK_EXPORT int widget##_format(widget *, char *);                                     \
    CFLTK_EXPORT double widget##_round(widget *, double);                                   \
    CFLTK_EXPORT double widget##_clamp(widget *, double);                                   \
    CFLTK_EXPORT double widget##_increment(widget *, double, int);

WIDGET_DECLARE(Fl_Slider)

CFLTK_EXPORT float Fl_Slider_slider_size(const Fl_Slider *self);

CFLTK_EXPORT void Fl_Slider_set_slider_size(Fl_Slider *self, float v);

CFLTK_EXPORT int Fl_Slider_slider_box(const Fl_Slider *self);

CFLTK_EXPORT void Fl_Slider_set_slider_box(Fl_Slider *self, int c);

CFLTK_EXPORT int Fl_Slider_scroll_value(Fl_Slider *self, int pos, int windowSize, int first_line, int total_lines);

VALUATOR_DECLARE(Fl_Slider)

WIDGET_DECLARE(Fl_Nice_Slider)

VALUATOR_DECLARE(Fl_Nice_Slider)

WIDGET_DECLARE(Fl_Counter)

VALUATOR_DECLARE(Fl_Counter)

WIDGET_DECLARE(Fl_Dial)

CFLTK_EXPORT short Fl_Dial_angle1(const Fl_Dial *self);

CFLTK_EXPORT short Fl_Dial_angle2(const Fl_Dial *self);

CFLTK_EXPORT void Fl_Dial_set_angle1(Fl_Dial *self, short val);

CFLTK_EXPORT void Fl_Dial_set_angle2(Fl_Dial *self, short val);

VALUATOR_DECLARE(Fl_Dial)

WIDGET_DECLARE(Fl_Line_Dial)

VALUATOR_DECLARE(Fl_Line_Dial)

WIDGET_DECLARE(Fl_Roller)

VALUATOR_DECLARE(Fl_Roller)

WIDGET_DECLARE(Fl_Scrollbar)

CFLTK_EXPORT void Fl_Scrollbar_set_linesize(Fl_Scrollbar *self, int sz);

CFLTK_EXPORT int Fl_Scrollbar_linesize(const Fl_Scrollbar *self);

CFLTK_EXPORT int Fl_Scrollbar_scroll_value(Fl_Scrollbar *self, int pos, int windowSize, int first_line, int total_lines);

VALUATOR_DECLARE(Fl_Scrollbar)

WIDGET_DECLARE(Fl_Value_Slider)

CFLTK_EXPORT void Fl_Value_Slider_set_text_color(Fl_Value_Slider *self, unsigned int c);

CFLTK_EXPORT unsigned int Fl_Value_Slider_text_color(Fl_Value_Slider *self);

CFLTK_EXPORT void Fl_Value_Slider_set_text_font(Fl_Value_Slider *self, int f);

CFLTK_EXPORT int Fl_Value_Slider_text_font(Fl_Value_Slider *self);

CFLTK_EXPORT void Fl_Value_Slider_set_text_size(Fl_Value_Slider *self, int s);

CFLTK_EXPORT int Fl_Value_Slider_text_size(Fl_Value_Slider *self);

VALUATOR_DECLARE(Fl_Value_Slider)

WIDGET_DECLARE(Fl_Adjuster)

VALUATOR_DECLARE(Fl_Adjuster)

WIDGET_DECLARE(Fl_Value_Input)

CFLTK_EXPORT void Fl_Value_Input_set_text_color(Fl_Value_Input *self, unsigned int c);

CFLTK_EXPORT unsigned int Fl_Value_Input_text_color(Fl_Value_Input *self);

CFLTK_EXPORT void Fl_Value_Input_set_text_font(Fl_Value_Input *self, int f);

CFLTK_EXPORT int Fl_Value_Input_text_font(Fl_Value_Input *self);

CFLTK_EXPORT void Fl_Value_Input_set_text_size(Fl_Value_Input *self, int s);

CFLTK_EXPORT int Fl_Value_Input_text_size(Fl_Value_Input *self);

CFLTK_EXPORT void Fl_Value_Input_set_soft(Fl_Value_Input *self, char val);

CFLTK_EXPORT char Fl_Value_Input_soft(const Fl_Value_Input *self);

VALUATOR_DECLARE(Fl_Value_Input)

WIDGET_DECLARE(Fl_Value_Output)

CFLTK_EXPORT void Fl_Value_Output_set_text_color(Fl_Value_Output *self, unsigned int c);

CFLTK_EXPORT unsigned int Fl_Value_Output_text_color(Fl_Value_Output *self);

CFLTK_EXPORT void Fl_Value_Output_set_text_font(Fl_Value_Output *self, int f);

CFLTK_EXPORT int Fl_Value_Output_text_font(Fl_Value_Output *self);

CFLTK_EXPORT void Fl_Value_Output_set_text_size(Fl_Value_Output *self, int s);

CFLTK_EXPORT int Fl_Value_Output_text_size(Fl_Value_Output *self);

VALUATOR_DECLARE(Fl_Value_Output)

WIDGET_DECLARE(Fl_Fill_Slider)

VALUATOR_DECLARE(Fl_Fill_Slider)

WIDGET_DECLARE(Fl_Fill_Dial)

VALUATOR_DECLARE(Fl_Fill_Dial)

WIDGET_DECLARE(Fl_Hor_Slider)

VALUATOR_DECLARE(Fl_Hor_Slider)

WIDGET_DECLARE(Fl_Hor_Fill_Slider)

VALUATOR_DECLARE(Fl_Hor_Fill_Slider)

WIDGET_DECLARE(Fl_Hor_Nice_Slider)

VALUATOR_DECLARE(Fl_Hor_Nice_Slider)

WIDGET_DECLARE(Fl_Hor_Value_Slider)

CFLTK_EXPORT void Fl_Hor_Value_Slider_set_text_color(
    Fl_Hor_Value_Slider *self, unsigned int c
);

CFLTK_EXPORT unsigned int Fl_Hor_Value_Slider_text_color(Fl_Hor_Value_Slider *self);

CFLTK_EXPORT void Fl_Hor_Value_Slider_set_text_font(Fl_Hor_Value_Slider *self, int f);

CFLTK_EXPORT int Fl_Hor_Value_Slider_text_font(Fl_Hor_Value_Slider *self);

CFLTK_EXPORT void Fl_Hor_Value_Slider_set_text_size(Fl_Hor_Value_Slider *self, int s);

CFLTK_EXPORT int Fl_Hor_Value_Slider_text_size(Fl_Hor_Value_Slider *self);

VALUATOR_DECLARE(Fl_Hor_Value_Slider)

#ifdef __cplusplus
}
#endif
#endif
