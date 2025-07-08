#ifndef __CFL_H__
#define __CFL_H__

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
    #if defined(__clang__)
        #define CFLTK_EXPORT __declspec(dllexport) __attribute__ ((visibility("default")))
    #else
        #define CFLTK_EXPORT __declspec(dllexport)
    #endif
#else
    #define CFLTK_EXPORT extern __attribute__ ((visibility("default")))
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Fl_Widget Fl_Widget;

typedef struct Fl_Widget_Tracker Fl_Widget_Tracker;

typedef void (*Fl_Awake_Handler)(void *data);

CFLTK_EXPORT int Fl_run(void);

CFLTK_EXPORT int Fl_check(void);

CFLTK_EXPORT int Fl_ready(void);

CFLTK_EXPORT void Fl_release(void);

CFLTK_EXPORT int Fl_reload_scheme(void);

CFLTK_EXPORT int Fl_menu_linespacing(void);

CFLTK_EXPORT void Fl_set_menu_linespacing(int H);

CFLTK_EXPORT int Fl_lock(void);

CFLTK_EXPORT void Fl_unlock(void);

CFLTK_EXPORT int Fl_awake_callback(Fl_Awake_Handler handler, void *data);

CFLTK_EXPORT void Fl_awake(void);

CFLTK_EXPORT void Fl_set_scrollbar_size(int);

CFLTK_EXPORT int Fl_scrollbar_size(void);

CFLTK_EXPORT int Fl_event(void);

CFLTK_EXPORT int Fl_event_key(void);

CFLTK_EXPORT int Fl_event_original_key(void);

CFLTK_EXPORT int Fl_event_key_down(int);

CFLTK_EXPORT const char *Fl_event_text(void);

CFLTK_EXPORT int Fl_event_button(void);

CFLTK_EXPORT int Fl_event_clicks(void);

CFLTK_EXPORT int Fl_event_x(void);

CFLTK_EXPORT int Fl_event_y(void);

CFLTK_EXPORT int Fl_event_x_root(void);

CFLTK_EXPORT int Fl_event_y_root(void);

CFLTK_EXPORT int Fl_event_dx(void);

CFLTK_EXPORT int Fl_event_dy(void);

CFLTK_EXPORT void Fl_get_mouse(int *, int *);

CFLTK_EXPORT int Fl_event_is_click(void);

CFLTK_EXPORT int Fl_event_length(void);

CFLTK_EXPORT int Fl_event_state(void);

CFLTK_EXPORT int Fl_w(void);

CFLTK_EXPORT int Fl_h(void);

CFLTK_EXPORT int Fl_screen_x(void);

CFLTK_EXPORT int Fl_screen_y(void);

CFLTK_EXPORT int Fl_screen_h(void);

CFLTK_EXPORT int Fl_screen_w(void);

CFLTK_EXPORT int Fl_compose(int *del);

CFLTK_EXPORT void Fl_compose_reset(void);

CFLTK_EXPORT int Fl_compose_state(void);

CFLTK_EXPORT void Fl_copy(const char *stuff, int len, int destination);

CFLTK_EXPORT void Fl_paste_text(Fl_Widget *, int src);

CFLTK_EXPORT void Fl_paste_image(Fl_Widget *widget, int src);

CFLTK_EXPORT int Fl_set_scheme(const char *scheme);

CFLTK_EXPORT int Fl_scheme(void);

CFLTK_EXPORT const char *Fl_scheme_string(void);

CFLTK_EXPORT int Fl_visible_focus(void);

CFLTK_EXPORT void Fl_set_visible_focus(int);

CFLTK_EXPORT void Fl_set_box_type(int, int);

CFLTK_EXPORT int Fl_box_shadow_width(void);

CFLTK_EXPORT void Fl_set_box_shadow_width(int W);

CFLTK_EXPORT int Fl_box_border_radius_max(void);

CFLTK_EXPORT void Fl_set_box_border_radius_max(int R);

CFLTK_EXPORT unsigned int
Fl_get_rgb_color(unsigned char r, unsigned char g, unsigned char b);

CFLTK_EXPORT void Fl_set_color(
    unsigned int c, unsigned char r, unsigned char g, unsigned char b
);

CFLTK_EXPORT void Fl_set_color_with_alpha(
    unsigned int c,
    unsigned char r,
    unsigned char g,
    unsigned char b,
    unsigned char a
);

CFLTK_EXPORT const char *Fl_get_font(int idx);

CFLTK_EXPORT const char *Fl_get_font_name(int idx);

CFLTK_EXPORT const char *Fl_get_font_name_with_attr(int idx, int *attributes);

CFLTK_EXPORT int Fl_get_font_sizes(int font, int **sizep);

CFLTK_EXPORT int Fl_set_fonts(const char *c);

CFLTK_EXPORT void Fl_set_font(int, int);

CFLTK_EXPORT void Fl_set_font_by_name(int, const char *);

CFLTK_EXPORT void Fl_set_font_size(int);

CFLTK_EXPORT int Fl_font_size(void);

CFLTK_EXPORT void Fl_add_handler(int (*ev_handler)(int ev));

CFLTK_EXPORT void Fl_awake_msg(void *msg);

CFLTK_EXPORT void *Fl_thread_msg(void);

CFLTK_EXPORT int Fl_wait(void);

CFLTK_EXPORT double Fl_wait_for(double);

CFLTK_EXPORT void Fl_add_timeout(double t, void (*)(void *), void *);

CFLTK_EXPORT void Fl_repeat_timeout(double t, void (*)(void *), void *);

CFLTK_EXPORT void Fl_remove_timeout(void (*)(void *), void *);

CFLTK_EXPORT int Fl_has_timeout(void (*)(void *), void *);

CFLTK_EXPORT int Fl_dnd(void);

CFLTK_EXPORT void *Fl_grab(void);

CFLTK_EXPORT void Fl_set_grab(void *);

CFLTK_EXPORT void *Fl_first_window(void);

CFLTK_EXPORT void *Fl_next_window(const void *);

CFLTK_EXPORT void *Fl_modal(void);

CFLTK_EXPORT int Fl_should_program_quit(void);

CFLTK_EXPORT void Fl_program_should_quit(int flag);

CFLTK_EXPORT int Fl_event_inside(int, int, int, int);

CFLTK_EXPORT Fl_Widget *Fl_belowmouse(void);

CFLTK_EXPORT void Fl_set_belowmouse(Fl_Widget *w);

CFLTK_EXPORT void Fl_delete_widget(Fl_Widget *w);

CFLTK_EXPORT Fl_Widget_Tracker *Fl_Widget_Tracker_new(Fl_Widget *w);

CFLTK_EXPORT int Fl_Widget_Tracker_deleted(Fl_Widget_Tracker *self);

CFLTK_EXPORT void Fl_Widget_Tracker_delete(Fl_Widget_Tracker *self);

CFLTK_EXPORT void Fl_init_all(void);

CFLTK_EXPORT void Fl_redraw(void);

CFLTK_EXPORT int Fl_event_shift(void);

CFLTK_EXPORT int Fl_event_ctrl(void);

CFLTK_EXPORT int Fl_event_command(void);

CFLTK_EXPORT int Fl_event_alt(void);

CFLTK_EXPORT void Fl_set_damage(int flag);

CFLTK_EXPORT int Fl_damage(void);

CFLTK_EXPORT int Fl_visual(int);

CFLTK_EXPORT void Fl_own_colormap(void);

CFLTK_EXPORT Fl_Widget *Fl_pushed(void);

CFLTK_EXPORT Fl_Widget *Fl_focus(void);

CFLTK_EXPORT void Fl_set_focus(void *);

CFLTK_EXPORT double Fl_version(void);

CFLTK_EXPORT int Fl_api_version(void);

CFLTK_EXPORT int Fl_abi_version(void);

CFLTK_EXPORT int Fl_load_font(const char *path);

CFLTK_EXPORT void Fl_unload_font(const char *path);

CFLTK_EXPORT void Fl_foreground(unsigned char r, unsigned char g, unsigned char b);

CFLTK_EXPORT void Fl_background(unsigned char r, unsigned char g, unsigned char b);

CFLTK_EXPORT void Fl_background2(unsigned char r, unsigned char g, unsigned char b);

CFLTK_EXPORT void Fl_selection_color(unsigned char r, unsigned char g, unsigned char b);

CFLTK_EXPORT void Fl_inactive_color(unsigned char r, unsigned char g, unsigned char b);

CFLTK_EXPORT void Fl_get_system_colors(void);

CFLTK_EXPORT int Fl_handle(int, void *);

CFLTK_EXPORT int Fl_handle_(int, void *);

CFLTK_EXPORT void Fl_add_idle(void (*)(void *), void *);

CFLTK_EXPORT int Fl_has_idle(void (*)(void *), void *);

CFLTK_EXPORT void Fl_remove_idle(void (*)(void *), void *);

CFLTK_EXPORT void Fl_add_check(void (*)(void *), void *);

CFLTK_EXPORT int Fl_has_check(void (*)(void *), void *);

CFLTK_EXPORT void Fl_remove_check(void (*)(void *), void *);

CFLTK_EXPORT void Fl_flush(void);

CFLTK_EXPORT void Fl_set_screen_scale(int n, float val);

CFLTK_EXPORT float Fl_screen_scale(int n);

CFLTK_EXPORT int Fl_screen_scaling_supported(void);

CFLTK_EXPORT int Fl_screen_count(void);

CFLTK_EXPORT int Fl_screen_num(int x, int y);

CFLTK_EXPORT int Fl_screen_num_inside(int x, int y, int w, int h);

CFLTK_EXPORT void Fl_screen_xywh(int *X, int *Y, int *W, int *H, int n);

CFLTK_EXPORT void Fl_screen_xywh_at(int *X, int *Y, int *W, int *H, int mx, int my);

CFLTK_EXPORT void Fl_screen_xywh_inside(
    int *X, int *Y, int *W, int *H, int mx, int my, int mw, int mh
);

CFLTK_EXPORT void Fl_screen_xywh_mouse(int *X, int *Y, int *W, int *H);

CFLTK_EXPORT void Fl_screen_dpi(float *h, float *v, int n);

CFLTK_EXPORT void Fl_screen_work_area(int *X, int *Y, int *W, int *H, int n);

CFLTK_EXPORT void Fl_screen_work_area_at(int *X, int *Y, int *W, int *H, int mx, int my);

CFLTK_EXPORT void Fl_screen_work_area_mouse(int *X, int *Y, int *W, int *H);

CFLTK_EXPORT void Fl_keyboard_screen_scaling(int value);

CFLTK_EXPORT void Fl_open_display(void);

CFLTK_EXPORT void Fl_close_display(void);

CFLTK_EXPORT int Fl_box_dx(int boxtype);

CFLTK_EXPORT int Fl_box_dy(int boxtype);

CFLTK_EXPORT int Fl_box_dw(int boxtype);

CFLTK_EXPORT int Fl_box_dh(int boxtype);

CFLTK_EXPORT int Fl_mac_os_version(void);

CFLTK_EXPORT void *Fl_event_clipboard(void);

CFLTK_EXPORT const char *Fl_event_clipboard_type(void);

CFLTK_EXPORT int Fl_clipboard_contains(const char *type);

CFLTK_EXPORT void Fl_event_dispatch(int (*cb)(int event, void *));

CFLTK_EXPORT unsigned int Fl_inactive(unsigned int c);

CFLTK_EXPORT unsigned int Fl_lighter(unsigned int c);

CFLTK_EXPORT unsigned int Fl_darker(unsigned int c);

CFLTK_EXPORT void Fl_set_box_type_cb(
    int, void (*cb)(int, int, int, int, unsigned int), int, int, int, int
);

CFLTK_EXPORT int Fl_draw_box_active(void);

CFLTK_EXPORT unsigned int Fl_gray_ramp(int i);

CFLTK_EXPORT unsigned int Fl_color_average(unsigned int, unsigned int, float f);

CFLTK_EXPORT unsigned int Fl_contrast(unsigned int c1, unsigned int c2);

CFLTK_EXPORT unsigned int Fl_rgb_color(unsigned char r, unsigned char g, unsigned char b);

CFLTK_EXPORT unsigned int Fl_rgb_color_grayscale(unsigned char g);

CFLTK_EXPORT unsigned int Fl_cmap(unsigned int c);

CFLTK_EXPORT unsigned int Fl_box_color(unsigned int c);

CFLTK_EXPORT void Fl_set_box_color(unsigned int c);

CFLTK_EXPORT void Fl_add_system_handler(int (*)(void *, void *), void *);

CFLTK_EXPORT void Fl_remove_system_handler(int (*)(void *, void *));

CFLTK_EXPORT int Fl_gl_visual(int mode);

CFLTK_EXPORT void Fl_add_clipboard_notify(void (*cb)(int source, void *data), void *data);

CFLTK_EXPORT void Fl_remove_clipboard_notify(void (*cb)(int source, void *data));

CFLTK_EXPORT void Fl_open_callback(void (*cb)(const char *));

CFLTK_EXPORT void Fl_disable_wayland(void);

CFLTK_EXPORT Fl_Widget *Fl_Widget_Tracker_widget(Fl_Widget_Tracker *t);

CFLTK_EXPORT int Fl_Widget_Tracker_exists(Fl_Widget_Tracker *t);

CFLTK_EXPORT void Fl_get_color_rgb(
    unsigned int col, unsigned char *r, unsigned char *g, unsigned char *b
);

CFLTK_EXPORT int Fl_callback_reason(void);

CFLTK_EXPORT void *Fl_get_fl_msg(void);

CFLTK_EXPORT void *Fl_cairo_make_current(Fl_Widget *w);

CFLTK_EXPORT void Fl_set_cairo_autolink_context(int alink);

CFLTK_EXPORT int Fl_cairo_autolink_context(void);

CFLTK_EXPORT void *Fl_cairo_cc(void);

CFLTK_EXPORT void Fl_set_cairo_cc(void *c, int own);

CFLTK_EXPORT void Fl_cairo_flush(void *c);

CFLTK_EXPORT int Fl_option(int opt);

CFLTK_EXPORT void Fl_set_option(int opt, int val);

CFLTK_EXPORT void Fl_load_system_icons(void);

CFLTK_EXPORT void Fl_set_contrast_level(int level);

CFLTK_EXPORT int Fl_contrast_level(void);

CFLTK_EXPORT void Fl_set_contrast_mode(int mode);

CFLTK_EXPORT int Fl_contrast_mode(void);

CFLTK_EXPORT void Fl_set_contrast_function(unsigned int (*f)(unsigned int, unsigned int, int, int));

CFLTK_EXPORT int Fl_using_wayland(void);

#ifdef __cplusplus
}
#endif
#endif
