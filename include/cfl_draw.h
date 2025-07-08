#ifndef __CFL_DRAW_H__
#define __CFL_DRAW_H__

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

CFLTK_EXPORT void Fl_set_color_int(unsigned int c);

CFLTK_EXPORT void Fl_set_color_rgb(unsigned char r, unsigned char g, unsigned char b);

CFLTK_EXPORT unsigned int Fl_get_color(void);

CFLTK_EXPORT void Fl_push_clip(int x, int y, int w, int h);

CFLTK_EXPORT void Fl_push_no_clip(void);

CFLTK_EXPORT void Fl_pop_clip(void);

CFLTK_EXPORT int Fl_not_clipped(int x, int y, int w, int h);

CFLTK_EXPORT int Fl_clip_box(int x, int y, int w, int h, int *X, int *Y, int *W, int *H);

CFLTK_EXPORT void Fl_restore_clip(void);

CFLTK_EXPORT void Fl_set_clip_region(void *r);

CFLTK_EXPORT void *Fl_clip_region(void);

CFLTK_EXPORT void Fl_point(int x, int y);

CFLTK_EXPORT void Fl_line_style(int style, int width, char *dashes);

CFLTK_EXPORT void Fl_rect(int x, int y, int w, int h);

CFLTK_EXPORT void Fl_focus_rect(int x, int y, int w, int h);

CFLTK_EXPORT void Fl_rect_with_color(int x, int y, int w, int h, unsigned int c);

CFLTK_EXPORT void Fl_rectf(int x, int y, int w, int h);

CFLTK_EXPORT void Fl_rectf_with_color(int x, int y, int w, int h, unsigned int c);

CFLTK_EXPORT void Fl_rectf_with_rgb(
    int x,
    int y,
    int w,
    int h,
    unsigned char r,
    unsigned char g,
    unsigned char b
);

CFLTK_EXPORT void Fl_line(int x, int y, int x1, int y1);

CFLTK_EXPORT void Fl_polyline(int x, int y, int x1, int y1, int x2, int y2);

CFLTK_EXPORT void Fl_loop(int x, int y, int x1, int y1, int x2, int y2);

CFLTK_EXPORT void Fl_loop_4sided(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3);

CFLTK_EXPORT void Fl_polygon(int x, int y, int x1, int y1, int x2, int y2);

CFLTK_EXPORT void Fl_polygon_4sided(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3);

CFLTK_EXPORT void Fl_xyline(int x, int y, int x1);

CFLTK_EXPORT void Fl_xyline2(int x, int y, int x1, int y2);

CFLTK_EXPORT void Fl_xyline3(int x, int y, int x1, int y2, int x3);

CFLTK_EXPORT void Fl_yxline(int x, int y, int y1);

CFLTK_EXPORT void Fl_yxline2(int x, int y, int y1, int x2);

CFLTK_EXPORT void Fl_yxline3(int x, int y, int y1, int x2, int y3);

CFLTK_EXPORT void Fl_arc(int x, int y, int w, int h, double a1, double a2);

CFLTK_EXPORT void Fl_pie(int x, int y, int w, int h, double a1, double a2);

CFLTK_EXPORT void Fl_push_matrix(void);

CFLTK_EXPORT void Fl_pop_matrix(void);

CFLTK_EXPORT void Fl_scale_xy(double x, double y);

CFLTK_EXPORT void Fl_scale(double x);

CFLTK_EXPORT void Fl_translate(double x, double y);

CFLTK_EXPORT void Fl_rotate(double d);

CFLTK_EXPORT void Fl_mult_matrix(double a, double b, double c, double d, double x, double y);

CFLTK_EXPORT void Fl_begin_points(void);

CFLTK_EXPORT void Fl_begin_line(void);

CFLTK_EXPORT void Fl_begin_loop(void);

CFLTK_EXPORT void Fl_begin_polygon(void);

CFLTK_EXPORT void Fl_vertex(double x, double y);

CFLTK_EXPORT void Fl_curve(
    double X0,
    double Y0,
    double X1,
    double Y1,
    double X2,
    double Y2,
    double X3,
    double Y3
);

CFLTK_EXPORT void Fl_arc_with_radius(double x, double y, double r, double start, double end);

CFLTK_EXPORT void Fl_circle(double x, double y, double r);

CFLTK_EXPORT void Fl_draw_circle(int x, int y, int d, unsigned int c);

CFLTK_EXPORT void Fl_end_points(void);

CFLTK_EXPORT void Fl_end_line(void);

CFLTK_EXPORT void Fl_end_loop(void);

CFLTK_EXPORT void Fl_end_polygon(void);

CFLTK_EXPORT void Fl_begin_complex_polygon(void);

CFLTK_EXPORT void Fl_gap(void);

CFLTK_EXPORT void Fl_end_complex_polygon(void);

CFLTK_EXPORT double Fl_transform_x(double x, double y);

CFLTK_EXPORT double Fl_transform_y(double x, double y);

CFLTK_EXPORT double Fl_transform_dx(double x, double y);

CFLTK_EXPORT double Fl_transform_dy(double x, double y);

CFLTK_EXPORT void Fl_transformed_vertex(double xf, double yf);

CFLTK_EXPORT void Fl_end_offscreen(void);

CFLTK_EXPORT void Fl_set_draw_font(int face, int fsize);

CFLTK_EXPORT int Fl_font(void);

CFLTK_EXPORT int Fl_size(void);

CFLTK_EXPORT int Fl_height(void);

CFLTK_EXPORT int Fl_set_height(int font, int size);

CFLTK_EXPORT int Fl_descent(void);

CFLTK_EXPORT double Fl_width(const char *txt, int n);

CFLTK_EXPORT double Fl_char_width(unsigned int c);

CFLTK_EXPORT void Fl_text_extents(const char *, int *dx, int *dy, int *w, int *h);

CFLTK_EXPORT void Fl_text_extents_n(const char *t, int n, int *dx, int *dy, int *w, int *h);

CFLTK_EXPORT const char *Fl_latin1_to_local(const char *t, int n);

CFLTK_EXPORT const char *Fl_local_to_latin1(const char *t, int n);

CFLTK_EXPORT const char *Fl_mac_roman_to_local(const char *t, int n);

CFLTK_EXPORT const char *Fl_local_to_mac_roman(const char *t, int n);

CFLTK_EXPORT void Fl_draw(const char *str, int x, int y);

CFLTK_EXPORT void Fl_draw_text_angled(int angle, const char *str, int x, int y);

CFLTK_EXPORT void Fl_draw_text_n(const char *str, int n, int x, int y);

CFLTK_EXPORT void Fl_draw_text_angled_n(int angle, const char *str, int n, int x, int y);

CFLTK_EXPORT void Fl_rtl_draw(const char *str, int n, int x, int y);

CFLTK_EXPORT void Fl_measure(const char *str, int *x, int *y, int draw_symbols);

CFLTK_EXPORT void Fl_draw5(
    const char *str,
    int x,
    int y,
    int w,
    int h,
    int align,
    void **img,
    int draw_symbols
);

CFLTK_EXPORT void Fl_frame(const char *s, int x, int y, int w, int h);

CFLTK_EXPORT void Fl_frame2(const char *s, int x, int y, int w, int h);

CFLTK_EXPORT void Fl_draw_box(int box_type, int x, int y, int w, int h, unsigned int);

CFLTK_EXPORT void Fl_draw_image(
    const unsigned char *buf, int X, int Y, int W, int H, int D, int L
);

CFLTK_EXPORT void Fl_draw_image_mono(
    const unsigned char *buf, int X, int Y, int W, int H, int D, int L
);

CFLTK_EXPORT char Fl_can_do_alpha_blending(void);

CFLTK_EXPORT unsigned char *
Fl_read_image(unsigned char *p, int X, int Y, int W, int H, int alpha);

CFLTK_EXPORT unsigned char *Fl_capture_window_part(void *win, int x, int y, int w, int h);

CFLTK_EXPORT int Fl_draw_pixmap(const char *const *data, int x, int y, int bg);

CFLTK_EXPORT int Fl_draw_pixmap2(/*const*/ char *const *data, int x, int y, int bg);

CFLTK_EXPORT int Fl_measure_pixmap(/*const*/ char *const *data, int *w, int *h);

CFLTK_EXPORT int Fl_measure_pixmap2(const char *const *cdata, int *w, int *h);

CFLTK_EXPORT const char *Fl_shortcut_label(unsigned int shortcut);

CFLTK_EXPORT const char *Fl_shortcut_label2(unsigned int shortcut, const char **eom);

CFLTK_EXPORT unsigned int Fl_old_shortcut(const char *s);

CFLTK_EXPORT void Fl_overlay_rect(int x, int y, int w, int h);

CFLTK_EXPORT void Fl_overlay_clear(void);

CFLTK_EXPORT void Fl_set_cursor(int cursor);

CFLTK_EXPORT void Fl_set_cursor_with_color(int cursor, int fg, int bg);

CFLTK_EXPORT const char *Fl_expand_text(
    const char *from,
    char *buf,
    int maxbuf,
    double maxw,
    int *n,
    double *width,
    int wrap,
    int draw_symbols
);

CFLTK_EXPORT void Fl_set_status(int X, int Y, int W, int H);

CFLTK_EXPORT void Fl_set_spot(int font, int size, int X, int Y, int W, int H, void *win);

CFLTK_EXPORT void Fl_reset_spot(void);

CFLTK_EXPORT unsigned int Fl_show_colormap(unsigned int old_col);

CFLTK_EXPORT void Fl_copy_offscreen(
    int x, int y, int w, int h, void *pixmap, int srcx, int srcy
);

CFLTK_EXPORT void *Fl_create_offscreen(int w, int h);

CFLTK_EXPORT void Fl_begin_offscreen(void *b);

CFLTK_EXPORT void Fl_end_offscreen(void);

CFLTK_EXPORT void Fl_delete_offscreen(void *bitmap);

CFLTK_EXPORT void Fl_rescale_offscreen(void **ctx);

CFLTK_EXPORT void Fl_draw_text_boxed(const char *str, int x, int y, int w, int h, int align);

CFLTK_EXPORT void Fl_draw_check(int x, int y, int w, int h, unsigned int col);

CFLTK_EXPORT int Fl_add_symbol(const char *name, void (*drawit)(unsigned int), int scalable);

CFLTK_EXPORT void Fl_rounded_rect(int x, int y, int w, int h, int r);

CFLTK_EXPORT void Fl_rounded_rectf(int x, int y, int w, int h, int r);

CFLTK_EXPORT float Fl_override_scale(void);

CFLTK_EXPORT void Fl_restore_scale(float s);

#ifdef __cplusplus
}
#endif
#endif
