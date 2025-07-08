#ifndef __CFL_SURFACE_H__
#define __CFL_SURFACE_H__

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

typedef struct Fl_Surface_Device Fl_Surface_Device;

CFLTK_EXPORT void Fl_Surface_Device_set_current(Fl_Surface_Device *self);

CFLTK_EXPORT int Fl_Surface_Device_is_current(Fl_Surface_Device *self);

CFLTK_EXPORT Fl_Surface_Device *Fl_Surface_Device_surface(void);

CFLTK_EXPORT void Fl_Surface_Device_push_current(Fl_Surface_Device *new_current);

CFLTK_EXPORT Fl_Surface_Device *Fl_Surface_Device_pop_current(void);

typedef struct Fl_Image_Surface Fl_Image_Surface;

CFLTK_EXPORT Fl_Image_Surface *Fl_Image_Surface_new(int w, int h, int high_res);

CFLTK_EXPORT void Fl_Image_Surface_delete(Fl_Image_Surface *s);

CFLTK_EXPORT void Fl_Image_Surface_set_current(Fl_Image_Surface *self);

CFLTK_EXPORT int Fl_Image_Surface_is_current(Fl_Image_Surface *self);

CFLTK_EXPORT void *Fl_Image_Surface_image(Fl_Image_Surface *self);

CFLTK_EXPORT void *Fl_Image_Surface_highres_image(Fl_Image_Surface *self);

CFLTK_EXPORT void Fl_Image_Surface_origin(Fl_Image_Surface *self, int *x, int *y);

CFLTK_EXPORT void Fl_Image_Surface_set_origin(Fl_Image_Surface *self, int x, int y);

CFLTK_EXPORT void Fl_Image_Surface_rescale(Fl_Image_Surface *self);

CFLTK_EXPORT void Fl_Image_Surface_draw(
    Fl_Image_Surface *self, void *widget, int delta_x, int delta_y
);

CFLTK_EXPORT void Fl_Image_Surface_draw_decorated_window(
    Fl_Image_Surface *self, void *widget, int delta_x, int delta_y
);

typedef struct Fl_SVG_File_Surface Fl_SVG_File_Surface;

CFLTK_EXPORT Fl_SVG_File_Surface *
Fl_SVG_File_Surface_new(int width, int height, const char *file);

CFLTK_EXPORT void Fl_SVG_File_Surface_delete(Fl_SVG_File_Surface *self);

CFLTK_EXPORT void Fl_SVG_File_Surface_origin(Fl_SVG_File_Surface *self, int x, int y);

CFLTK_EXPORT int Fl_SVG_File_Surface_printable_rect(
    Fl_SVG_File_Surface *self, int *w, int *h
);

CFLTK_EXPORT void Fl_SVG_File_Surface_draw(
    Fl_SVG_File_Surface *self, void *widget, int delta_x, int delta_y
);

CFLTK_EXPORT void Fl_SVG_File_Surface_draw_decorated_window(
    Fl_SVG_File_Surface *self, void *widget, int delta_x, int delta_y
);

#ifdef __cplusplus
}
#endif
#endif
