#ifndef __CFL_PRINTER_H__
#define __CFL_PRINTER_H__

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

typedef struct Fl_Printer Fl_Printer;

CFLTK_EXPORT Fl_Printer *Fl_Printer_new(void);

CFLTK_EXPORT void Fl_Printer_delete(Fl_Printer *self);

CFLTK_EXPORT int Fl_Printer_begin_job(
    Fl_Printer *self,
    int pagecount,
    int *frompage,
    int *topage,
    char **perr_message
);

CFLTK_EXPORT int Fl_Printer_begin_page(Fl_Printer *self);

CFLTK_EXPORT int Fl_Printer_printable_rect(Fl_Printer *self, int *w, int *h);

CFLTK_EXPORT void Fl_Printer_margins(
    Fl_Printer *self, int *left, int *top, int *right, int *bottom
);

CFLTK_EXPORT void Fl_Printer_origin(Fl_Printer *self, int *x, int *y);

CFLTK_EXPORT void Fl_Printer_set_origin(Fl_Printer *self, int x, int y);

CFLTK_EXPORT void Fl_Printer_scale(Fl_Printer *self, float scale_x, float scale_y);

CFLTK_EXPORT void Fl_Printer_rotate(Fl_Printer *self, float angle);

CFLTK_EXPORT void Fl_Printer_translate(Fl_Printer *self, int x, int y);

CFLTK_EXPORT void Fl_Printer_untranslate(Fl_Printer *self);

CFLTK_EXPORT int Fl_Printer_end_page(Fl_Printer *self);

CFLTK_EXPORT void Fl_Printer_end_job(Fl_Printer *self);

CFLTK_EXPORT void Fl_Printer_set_current(Fl_Printer *self);

CFLTK_EXPORT int Fl_Printer_is_current(Fl_Printer *self);

CFLTK_EXPORT void Fl_Printer_print_widget(
    Fl_Printer *self, void *widget, int delta_x, int delta_y
);

CFLTK_EXPORT void Fl_Printer_print_window(
    Fl_Printer *self, void *win, int x_offset, int y_offset
);

CFLTK_EXPORT void Fl_Printer_set_dialog_title(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_dialog_printer(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_dialog_range(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_dialog_copies(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_dialog_all(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_dialog_pages(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_dialog_from(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_dialog_to(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_dialog_properties(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_dialog_copyNo(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_dialog_print_button(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_dialog_cancel_button(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_dialog_print_to_file(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_property_title(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_property_pagesize(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_property_mode(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_property_use(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_property_save(const char *msg);

CFLTK_EXPORT void Fl_Printer_set_property_cancel(const char *msg);

#ifdef __cplusplus
}
#endif
#endif
