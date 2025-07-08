#ifndef __CFL_WINDOW_H__
#define __CFL_WINDOW_H__

#include "cfl_macros.h"

#ifdef __cplusplus
extern "C" {
#endif

#define WINDOW_DECLARE(widget)                                                 \
    CFLTK_EXPORT void widget##_make_modal(widget *, unsigned int boolean);                  \
    CFLTK_EXPORT void widget##_fullscreen(widget *, unsigned int boolean);                  \
    CFLTK_EXPORT void widget##_make_current(widget *);                                      \
    CFLTK_EXPORT void widget##_set_icon(widget *, const void *);                            \
    CFLTK_EXPORT void *widget##_icon(const widget *);                                       \
    CFLTK_EXPORT void widget##_set_cursor(widget *self, int cursor);                        \
    CFLTK_EXPORT int widget##_shown(widget *self);                                          \
    CFLTK_EXPORT void *widget##_raw_handle(const widget *w);                                \
    CFLTK_EXPORT void widget##_set_border(widget *, int flag);                              \
    CFLTK_EXPORT int widget##_border(const widget *);                                       \
    CFLTK_EXPORT void *widget##_region(const widget *self);                                 \
    CFLTK_EXPORT void widget##_set_region(widget *self, void *r);                           \
    CFLTK_EXPORT void widget##_iconize(widget *self);                                       \
    CFLTK_EXPORT unsigned int widget##_fullscreen_active(const widget *self);               \
    CFLTK_EXPORT void widget##_free_position(widget *self);                                 \
    CFLTK_EXPORT int widget##_decorated_w(const widget *self);                              \
    CFLTK_EXPORT int widget##_decorated_h(const widget *self);                              \
    CFLTK_EXPORT void widget##_size_range(widget *self, int, int, int, int);                \
    CFLTK_EXPORT void widget##_hotspot(widget *self, Fl_Widget *wid);                       \
    CFLTK_EXPORT void widget##_set_shape(widget *self, const void *image);                  \
    CFLTK_EXPORT const void *widget##_shape(widget *self);                                  \
    CFLTK_EXPORT int widget##_x_root(const widget *self);                                   \
    CFLTK_EXPORT int widget##_y_root(const widget *self);                                   \
    CFLTK_EXPORT void widget##_set_cursor_image(                                            \
        widget *self, const void *image, int hot_x, int hot_y                  \
    );                                                                         \
    CFLTK_EXPORT void widget##_default_cursor(widget *self, int cursor);                    \
    CFLTK_EXPORT int widget##_screen_num(widget *);                                         \
    CFLTK_EXPORT void widget##_set_screen_num(widget *, int screen_num);                    \
    CFLTK_EXPORT void widget##_wait_for_expose(widget *);                                   \
    CFLTK_EXPORT void widget##_set_alpha(widget *self, unsigned char val);                  \
    CFLTK_EXPORT unsigned char widget##_alpha(const widget *self);                          \
    CFLTK_EXPORT void widget##_force_position(widget *self, int flag);                      \
    CFLTK_EXPORT const char *widget##_default_xclass(void);                                 \
    CFLTK_EXPORT const char *widget##_xclass(const widget *self);                           \
    CFLTK_EXPORT void widget##_set_default_xclass(const char *s);                           \
    CFLTK_EXPORT void widget##_set_xclass(widget *self, const char *s);                     \
    CFLTK_EXPORT void widget##_clear_modal_states(widget *self);                            \
    CFLTK_EXPORT void widget##_set_override(widget *);                                      \
    CFLTK_EXPORT int widget##_override(const widget *);                                     \
    CFLTK_EXPORT const char *widget##_icon_label(const widget *);                           \
    CFLTK_EXPORT void widget##_set_icon_label(widget *, const char *);                      \
    CFLTK_EXPORT void widget##_set_icons(widget *w, const void *images[], int length);      \
    CFLTK_EXPORT void widget##_maximize(widget *w);                                         \
    CFLTK_EXPORT void widget##_un_maximize(widget *w);                                      \
    CFLTK_EXPORT unsigned int widget##_maximize_active(const widget *w);

WIDGET_DECLARE(Fl_Window)

GROUP_DECLARE(Fl_Window)

WINDOW_DECLARE(Fl_Window)

CFLTK_EXPORT Fl_Window *Fl_Window_new_wh(int width, int height, const char *title);

CFLTK_EXPORT Fl_Window *Fl_Window_find_by_handle(void *handle);

CFLTK_EXPORT void *resolve_raw_handle(void *handle);

CFLTK_EXPORT void *Fl_display(void);

CFLTK_EXPORT void *Fl_gc(void);

CFLTK_EXPORT void *Fl_cairo_gc(void);

CFLTK_EXPORT void Fl_Window_show_with_args(Fl_Window *w, int argc, char **argv);

WIDGET_DECLARE(Fl_Single_Window)

GROUP_DECLARE(Fl_Single_Window)

WINDOW_DECLARE(Fl_Single_Window)

WIDGET_DECLARE(Fl_Double_Window)

CFLTK_EXPORT void Fl_Double_Window_flush(Fl_Double_Window *w);

GROUP_DECLARE(Fl_Double_Window)

WINDOW_DECLARE(Fl_Double_Window)

WIDGET_DECLARE(Fl_Menu_Window)

GROUP_DECLARE(Fl_Menu_Window)

WINDOW_DECLARE(Fl_Menu_Window)

WIDGET_DECLARE(Fl_Overlay_Window)

GROUP_DECLARE(Fl_Overlay_Window)

CFLTK_EXPORT void Fl_Overlay_Window_draw_overlay(
    Fl_Overlay_Window *self, custom_draw_callback cb, void *data
);

CFLTK_EXPORT void Fl_Overlay_Window_redraw_overlay(Fl_Overlay_Window *self);

CFLTK_EXPORT int Fl_Overlay_Window_can_do_overlay(Fl_Overlay_Window *self);

WINDOW_DECLARE(Fl_Overlay_Window)

CFLTK_EXPORT void Fl_gl_start(void);

CFLTK_EXPORT void Fl_gl_finish(void);

WIDGET_DECLARE(Fl_Gl_Window)

GROUP_DECLARE(Fl_Gl_Window)

WINDOW_DECLARE(Fl_Gl_Window)

CFLTK_EXPORT void Fl_Gl_Window_flush(Fl_Gl_Window *self);

CFLTK_EXPORT char Fl_Gl_Window_valid(const Fl_Gl_Window *self);

CFLTK_EXPORT void Fl_Gl_Window_set_valid(Fl_Gl_Window *self, char v);

CFLTK_EXPORT char Fl_Gl_Window_context_valid(const Fl_Gl_Window *self);

CFLTK_EXPORT void Fl_Gl_Window_set_context_valid(Fl_Gl_Window *self, char v);

CFLTK_EXPORT int Fl_Gl_Window_can_do(Fl_Gl_Window *self);

CFLTK_EXPORT void *Fl_Gl_Window_context(const Fl_Gl_Window *self);

CFLTK_EXPORT void Fl_Gl_Window_set_context(Fl_Gl_Window *self, void *ctx, int destroy_flag);

CFLTK_EXPORT void Fl_Gl_Window_swap_buffers(Fl_Gl_Window *self);

CFLTK_EXPORT void Fl_Gl_Window_set_swap_interval(Fl_Gl_Window *self, int frames);

CFLTK_EXPORT int Fl_Gl_Window_swap_interval(const Fl_Gl_Window *self);

CFLTK_EXPORT void Fl_Gl_Window_ortho(Fl_Gl_Window *self);

CFLTK_EXPORT int Fl_Gl_Window_can_do_overlay(Fl_Gl_Window *self);

CFLTK_EXPORT void Fl_Gl_Window_redraw_overlay(Fl_Gl_Window *self);

CFLTK_EXPORT void Fl_Gl_Window_hide_overlay(Fl_Gl_Window *self);

CFLTK_EXPORT void Fl_Gl_Window_make_overlay_current(Fl_Gl_Window *self);

CFLTK_EXPORT float Fl_Gl_Window_pixels_per_unit(Fl_Gl_Window *self);

CFLTK_EXPORT int Fl_Gl_Window_pixel_w(Fl_Gl_Window *self);

CFLTK_EXPORT int Fl_Gl_Window_pixel_h(Fl_Gl_Window *self);

CFLTK_EXPORT int Fl_Gl_Window_mode(const Fl_Gl_Window *self);

CFLTK_EXPORT void Fl_Gl_Window_set_mode(Fl_Gl_Window *self, int mode);

CFLTK_EXPORT void *Fl_Gl_Window_get_proc_address(Fl_Gl_Window *self, const char *s);

WIDGET_DECLARE(Fl_Glut_Window)

GROUP_DECLARE(Fl_Glut_Window)

WINDOW_DECLARE(Fl_Glut_Window)

CFLTK_EXPORT void Fl_Glut_Window_flush(Fl_Glut_Window *self);

CFLTK_EXPORT char Fl_Glut_Window_valid(const Fl_Glut_Window *self);

CFLTK_EXPORT void Fl_Glut_Window_set_valid(Fl_Glut_Window *self, char v);

CFLTK_EXPORT char Fl_Glut_Window_context_valid(const Fl_Glut_Window *self);

CFLTK_EXPORT void Fl_Glut_Window_set_context_valid(Fl_Glut_Window *self, char v);

CFLTK_EXPORT int Fl_Glut_Window_can_do(Fl_Glut_Window *self);

CFLTK_EXPORT void *Fl_Glut_Window_context(const Fl_Glut_Window *self);

CFLTK_EXPORT void Fl_Glut_Window_set_context(
    Fl_Glut_Window *self, void *ctx, int destroy_flag
);

CFLTK_EXPORT void Fl_Glut_Window_swap_buffers(Fl_Glut_Window *self);

CFLTK_EXPORT void Fl_Glut_Window_set_swap_interval(Fl_Glut_Window *self, int frames);

CFLTK_EXPORT int Fl_Glut_Window_swap_interval(const Fl_Glut_Window *self);

CFLTK_EXPORT void Fl_Glut_Window_ortho(Fl_Glut_Window *self);

CFLTK_EXPORT int Fl_Glut_Window_can_do_overlay(Fl_Glut_Window *self);

CFLTK_EXPORT void Fl_Glut_Window_redraw_overlay(Fl_Glut_Window *self);

CFLTK_EXPORT void Fl_Glut_Window_hide_overlay(Fl_Glut_Window *self);

CFLTK_EXPORT void Fl_Glut_Window_make_overlay_current(Fl_Glut_Window *self);

CFLTK_EXPORT float Fl_Glut_Window_pixels_per_unit(Fl_Glut_Window *self);

CFLTK_EXPORT int Fl_Glut_Window_pixel_w(Fl_Glut_Window *self);

CFLTK_EXPORT int Fl_Glut_Window_pixel_h(Fl_Glut_Window *self);

CFLTK_EXPORT int Fl_Glut_Window_mode(const Fl_Glut_Window *self);

CFLTK_EXPORT void Fl_Glut_Window_set_mode(Fl_Glut_Window *self, int mode);

CFLTK_EXPORT void *Fl_Glut_Window_get_proc_address(Fl_Glut_Window *self, const char *s);

#ifdef __cplusplus
}
#endif
#endif
