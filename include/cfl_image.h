#ifndef __CFL_IMAGE_H__
#define __CFL_IMAGE_H__

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

#define IMAGE_DECLARE(image)                                                   \
    typedef struct image image;                                                \
    CFLTK_EXPORT void image##_draw(image *, int X, int Y, int W, int H);                    \
    CFLTK_EXPORT void image##_draw_ext(                                                     \
        image *, int X, int Y, int W, int H, int cx, int cy                    \
    );                                                                         \
    CFLTK_EXPORT int image##_width(image *);                                                \
    CFLTK_EXPORT int image##_height(image *);                                               \
    CFLTK_EXPORT void image##_delete(image *);                                              \
    CFLTK_EXPORT int image##_count(image *self);                                            \
    CFLTK_EXPORT const char *const *image##_data(image *self);                              \
    CFLTK_EXPORT image *image##_copy(image *self);                                          \
    CFLTK_EXPORT image *image##_copy_sized(image *self, int W, int H);                      \
    CFLTK_EXPORT void image##_scale(                                                        \
        image *self, int width, int height, int proportional, int can_expand   \
    );                                                                         \
    CFLTK_EXPORT int image##_fail(image *self);                                             \
    CFLTK_EXPORT int image##_data_w(const image *self);                                     \
    CFLTK_EXPORT int image##_data_h(const image *self);                                     \
    CFLTK_EXPORT int image##_d(const image *self);                                          \
    CFLTK_EXPORT int image##_ld(const image *self);                                         \
    CFLTK_EXPORT void image##_inactive(image *self);                                        \
    CFLTK_EXPORT image *image##_from_dyn_ptr(Fl_Image *other);

IMAGE_DECLARE(Fl_Image)

CFLTK_EXPORT void Fl_Image_set_scaling_algorithm(int algorithm);

CFLTK_EXPORT int Fl_Image_scaling_algorithm(void);

CFLTK_EXPORT void Fl_RGB_Image_set_scaling_algorithm(int algorithm);

CFLTK_EXPORT int Fl_RGB_Image_scaling_algorithm(void);

IMAGE_DECLARE(Fl_JPEG_Image)

CFLTK_EXPORT Fl_JPEG_Image *Fl_JPEG_Image_new(const char *filename);

CFLTK_EXPORT Fl_JPEG_Image *Fl_JPEG_Image_from(const unsigned char *data);

IMAGE_DECLARE(Fl_PNG_Image)

CFLTK_EXPORT Fl_PNG_Image *Fl_PNG_Image_new(const char *filename);

CFLTK_EXPORT Fl_PNG_Image *Fl_PNG_Image_from(const unsigned char *data, int size);

IMAGE_DECLARE(Fl_SVG_Image)

CFLTK_EXPORT Fl_SVG_Image *Fl_SVG_Image_new(const char *filename);

CFLTK_EXPORT Fl_SVG_Image *Fl_SVG_Image_from(const char *data);

CFLTK_EXPORT void Fl_SVG_Image_normalize(Fl_SVG_Image *self);

IMAGE_DECLARE(Fl_BMP_Image)

CFLTK_EXPORT Fl_BMP_Image *Fl_BMP_Image_new(const char *filename);

CFLTK_EXPORT Fl_BMP_Image *Fl_BMP_Image_from(const unsigned char *data, long long len);

IMAGE_DECLARE(Fl_GIF_Image)

CFLTK_EXPORT Fl_GIF_Image *Fl_GIF_Image_new(const char *filename);

CFLTK_EXPORT Fl_GIF_Image *Fl_GIF_Image_from(const unsigned char *data, unsigned long long len);

IMAGE_DECLARE(Fl_Anim_GIF_Image)

CFLTK_EXPORT Fl_Anim_GIF_Image *
Fl_Anim_GIF_Image_new(const char *filename, void *canvas, unsigned short flags);

CFLTK_EXPORT Fl_Anim_GIF_Image *Fl_Anim_GIF_Image_from(
    const char *imagename,
    const unsigned char *data,
    const unsigned long long length,
    void *canvas,
    unsigned short flags
);

CFLTK_EXPORT double Fl_Anim_GIF_Image_delay(const Fl_Anim_GIF_Image *self, int frame_);

CFLTK_EXPORT void Fl_Anim_GIF_Image_set_delay(
    Fl_Anim_GIF_Image *self, int frame, double delay
);

CFLTK_EXPORT int Fl_Anim_GIF_Image_is_animated(const Fl_Anim_GIF_Image *self);

CFLTK_EXPORT void Fl_Anim_GIF_Image_set_speed(Fl_Anim_GIF_Image *self, double speed);

CFLTK_EXPORT double Fl_Anim_GIF_Image_speed(Fl_Anim_GIF_Image *self);

CFLTK_EXPORT int Fl_Anim_GIF_Image_start(Fl_Anim_GIF_Image *self);

CFLTK_EXPORT int Fl_Anim_GIF_Image_stop(Fl_Anim_GIF_Image *self);

CFLTK_EXPORT int Fl_Anim_GIF_Image_next(Fl_Anim_GIF_Image *self);

CFLTK_EXPORT int Fl_Anim_GIF_Image_playing(const Fl_Anim_GIF_Image *self);

IMAGE_DECLARE(Fl_Pixmap)

CFLTK_EXPORT Fl_Pixmap *Fl_Pixmap_new(const char *const *D);

IMAGE_DECLARE(Fl_XPM_Image)

CFLTK_EXPORT Fl_XPM_Image *Fl_XPM_Image_new(const char *filename);

IMAGE_DECLARE(Fl_XBM_Image)

CFLTK_EXPORT Fl_XBM_Image *Fl_XBM_Image_new(const char *filename);

IMAGE_DECLARE(Fl_PNM_Image)

CFLTK_EXPORT Fl_PNM_Image *Fl_PNM_Image_new(const char *filename);

IMAGE_DECLARE(Fl_Tiled_Image)

CFLTK_EXPORT Fl_Tiled_Image *Fl_Tiled_Image_new(Fl_Image *i, int w, int h);

IMAGE_DECLARE(Fl_RGB_Image)

CFLTK_EXPORT Fl_RGB_Image *
Fl_RGB_Image_new(const unsigned char *bits, int W, int H, int depth, int ld);

CFLTK_EXPORT Fl_RGB_Image *Fl_RGB_Image_from_data(
    const unsigned char *bits, int W, int H, int depth, int ld
);

CFLTK_EXPORT Fl_RGB_Image *Fl_RGB_Image_from_pixmap(const Fl_Pixmap *image);

IMAGE_DECLARE(Fl_Shared_Image)

CFLTK_EXPORT Fl_Shared_Image *Fl_Shared_Image_get(const char *name, int W, int H);

CFLTK_EXPORT Fl_Shared_Image *Fl_Shared_Image_from_rgb(Fl_RGB_Image *rgb, int own_it);

IMAGE_DECLARE(Fl_ICO_Image)

CFLTK_EXPORT Fl_ICO_Image *Fl_ICO_Image_new(const char *filename, int id);

CFLTK_EXPORT Fl_ICO_Image *
Fl_ICO_Image_from_data(const unsigned char *bits, unsigned long long len, int id);

CFLTK_EXPORT void *const
Fl_ICO_Image_icondirentry(const Fl_ICO_Image *self, unsigned long long *size);

CFLTK_EXPORT void Fl_register_images(void);

#ifdef __cplusplus
}
#endif
#endif
