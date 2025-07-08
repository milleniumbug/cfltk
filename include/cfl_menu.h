#ifndef __CFL_MENU_H__
#define __CFL_MENU_H__

#include "cfl_macros.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MENU_DECLARE(widget)                                                   \
    CFLTK_EXPORT int widget##_add(                                                          \
        widget *, const char *name, int shortcut, Fl_Callback *, void *, int   \
    );                                                                         \
    CFLTK_EXPORT int widget##_insert(                                                       \
        widget *,                                                              \
        int index,                                                             \
        const char *name,                                                      \
        int shortcut,                                                          \
        Fl_Callback *,                                                         \
        void *,                                                                \
        int                                                                    \
    );                                                                         \
    CFLTK_EXPORT Fl_Menu_Item *widget##_get_item(widget *, const char *name);               \
    CFLTK_EXPORT int widget##_set_item(widget *, Fl_Menu_Item *item);                       \
    CFLTK_EXPORT int widget##_text_font(widget *);                                          \
    CFLTK_EXPORT void widget##_set_text_font(widget *, int c);                              \
    CFLTK_EXPORT int widget##_text_size(widget *);                                          \
    CFLTK_EXPORT void widget##_set_text_size(widget *, int c);                              \
    CFLTK_EXPORT unsigned int widget##_text_color(widget *);                                \
    CFLTK_EXPORT void widget##_set_text_color(widget *, unsigned int c);                    \
    CFLTK_EXPORT int widget##_add_choice(widget *, const char *);                           \
    CFLTK_EXPORT const char *widget##_get_choice(widget *);                                 \
    CFLTK_EXPORT int widget##_value(widget *);                                              \
    CFLTK_EXPORT int widget##_set_value(widget *, int v);                                   \
    CFLTK_EXPORT void widget##_clear(widget *);                                             \
    CFLTK_EXPORT int widget##_clear_submenu(widget *, int index);                           \
    CFLTK_EXPORT int widget##_size(const widget *);                                         \
    CFLTK_EXPORT const char *widget##_text(const widget *, int idx);                        \
    CFLTK_EXPORT const Fl_Menu_Item *widget##_at(const widget *, int idx);                  \
    CFLTK_EXPORT void widget##_set_mode(widget *self, int i, int fl);                       \
    CFLTK_EXPORT int widget##_mode(const widget *self, int i);                              \
    CFLTK_EXPORT int widget##_find_index(const widget *self, const char *label);            \
    CFLTK_EXPORT const Fl_Menu_Item *widget##_menu(const widget *self);                     \
    CFLTK_EXPORT void widget##_set_menu(widget *self, const Fl_Menu_Item *item);            \
    CFLTK_EXPORT void widget##_remove(widget *self, int idx);                               \
    CFLTK_EXPORT void widget##_set_down_box(widget *self, int box);                         \
    CFLTK_EXPORT int widget##_down_box(const widget *self);                                 \
    CFLTK_EXPORT void widget##_global(widget *self);                                        \
    CFLTK_EXPORT int widget##_item_pathname(                                                \
        const widget *self,                                                    \
        char *pathname,                                                        \
        int pathnamelen,                                                       \
        const Fl_Menu_Item *item                                               \
    );                                                                         \
    CFLTK_EXPORT void widget##_set_menu_box(widget *self, int b);                           \
    CFLTK_EXPORT int widget##_menu_box(const widget *self);                                 \
    CFLTK_EXPORT Fl_Menu_Item *widget##_mvalue(const widget *);                             \
    CFLTK_EXPORT Fl_Menu_Item *widget##_prev_mvalue(const widget *);

typedef struct Fl_Menu_Item Fl_Menu_Item;

WIDGET_DECLARE(Fl_Menu_Bar)

MENU_DECLARE(Fl_Menu_Bar)

WIDGET_DECLARE(Fl_Menu_Button)

CFLTK_EXPORT const Fl_Menu_Item *Fl_Menu_Button_popup(Fl_Menu_Button *self);

MENU_DECLARE(Fl_Menu_Button)

WIDGET_DECLARE(Fl_Choice)

MENU_DECLARE(Fl_Choice)

WIDGET_DECLARE(Fl_Sys_Menu_Bar)

CFLTK_EXPORT void Fl_Sys_Menu_Bar_set_window_menu_style(int style);

CFLTK_EXPORT void Fl_Sys_Menu_Bar_about(Fl_Sys_Menu_Bar *self, Fl_Callback *cb, void *data);

MENU_DECLARE(Fl_Sys_Menu_Bar)

CFLTK_EXPORT Fl_Menu_Item *Fl_Menu_Item_new(char **args, int sz);

CFLTK_EXPORT Fl_Menu_Item *Fl_Menu_Item_new2(
    char **args,
    int *shortcuts,
    Fl_Callback **cb,
    int *flags,
    int *labeltype,
    int *labelfont,
    int *labelsize,
    unsigned int *labelcolor,
    int sz
);

CFLTK_EXPORT void Fl_Menu_Item_delete(Fl_Menu_Item *self);

CFLTK_EXPORT const Fl_Menu_Item *Fl_Menu_Item_popup(Fl_Menu_Item *self, int x, int y);

CFLTK_EXPORT const Fl_Menu_Item *Fl_Menu_Item_pulldown(
    Fl_Menu_Item *self,
    int X,
    int Y,
    int W,
    int H,
    const Fl_Menu_Item *picked,
    const void *,
    const Fl_Menu_Item *title,
    int menubar
);

CFLTK_EXPORT const char *Fl_Menu_Item_label(Fl_Menu_Item *);

CFLTK_EXPORT void Fl_Menu_Item_set_label(Fl_Menu_Item *, const char *a);

CFLTK_EXPORT int Fl_Menu_Item_label_type(Fl_Menu_Item *);

CFLTK_EXPORT void Fl_Menu_Item_set_label_type(Fl_Menu_Item *, int a);

CFLTK_EXPORT unsigned int Fl_Menu_Item_label_color(Fl_Menu_Item *);

CFLTK_EXPORT void Fl_Menu_Item_set_label_color(Fl_Menu_Item *, unsigned int a);

CFLTK_EXPORT int Fl_Menu_Item_label_font(Fl_Menu_Item *);

CFLTK_EXPORT void Fl_Menu_Item_set_label_font(Fl_Menu_Item *, int a);

CFLTK_EXPORT int Fl_Menu_Item_label_size(Fl_Menu_Item *);

CFLTK_EXPORT void Fl_Menu_Item_set_label_size(Fl_Menu_Item *, int a);

CFLTK_EXPORT int Fl_Menu_Item_value(Fl_Menu_Item *);

CFLTK_EXPORT void Fl_Menu_Item_set(Fl_Menu_Item *);

CFLTK_EXPORT void Fl_Menu_Item_clear(Fl_Menu_Item *);

CFLTK_EXPORT int Fl_Menu_Item_visible(Fl_Menu_Item *);

CFLTK_EXPORT void Fl_Menu_Item_show(Fl_Menu_Item *);

CFLTK_EXPORT void Fl_Menu_Item_hide(Fl_Menu_Item *);

CFLTK_EXPORT int Fl_Menu_Item_active(Fl_Menu_Item *);

CFLTK_EXPORT void Fl_Menu_Item_activate(Fl_Menu_Item *);

CFLTK_EXPORT void Fl_Menu_Item_deactivate(Fl_Menu_Item *);

CFLTK_EXPORT int Fl_Menu_Item_submenu(const Fl_Menu_Item *self);

CFLTK_EXPORT int Fl_Menu_Item_checkbox(const Fl_Menu_Item *self);

CFLTK_EXPORT int Fl_Menu_Item_radio(const Fl_Menu_Item *self);

CFLTK_EXPORT Fl_Menu_Item *Fl_Menu_Item_next(Fl_Menu_Item *self, int idx);

CFLTK_EXPORT void Fl_Menu_Item_set_callback(Fl_Menu_Item *self, Fl_Callback *c, void *p);

CFLTK_EXPORT void Fl_Menu_Item_do_callback(Fl_Menu_Item *self, Fl_Widget *w);

CFLTK_EXPORT void *Fl_Menu_Item_user_data(const Fl_Menu_Item *);

CFLTK_EXPORT void Fl_Menu_Item_set_user_data(Fl_Menu_Item *, void *data);

CFLTK_EXPORT void Fl_Menu_Item_draw(
    const Fl_Menu_Item *self,
    int x,
    int y,
    int w,
    int h,
    const void *m,
    int selected
);

CFLTK_EXPORT int Fl_Menu_Item_measure(const Fl_Menu_Item *self, int *hp, const void *m);

CFLTK_EXPORT void Fl_Menu_Item_image(Fl_Menu_Item *self, void *image);

CFLTK_EXPORT void Fl_Menu_Item_add_image(Fl_Menu_Item *self, void *image, int on_left);

CFLTK_EXPORT int Fl_Menu_Item_children(const Fl_Menu_Item *self);

CFLTK_EXPORT const Fl_Menu_Item *Fl_Menu_Item_at(const Fl_Menu_Item *self, int idx);

CFLTK_EXPORT int Fl_Menu_Item_add(
    Fl_Menu_Item *self,
    const char *name,
    int shortcut,
    Fl_Callback *cb,
    void *data,
    int flag
);

CFLTK_EXPORT int Fl_Menu_Item_insert(
    Fl_Menu_Item *self,
    int index,
    const char *name,
    int shortcut,
    Fl_Callback *cb,
    void *data,
    int flag
);

CFLTK_EXPORT void Fl_Menu_Item_set_shortcut(Fl_Menu_Item *self, int shortcut);

CFLTK_EXPORT void Fl_Menu_Item_set_flag(Fl_Menu_Item *self, int flag);

CFLTK_EXPORT void Fl_mac_set_about(Fl_Callback *cb, void *user_data, int shortcut);

CFLTK_EXPORT void Fl_Mac_App_Menu_custom_application_menu_items(const Fl_Menu_Item *m);

CFLTK_EXPORT void Fl_Mac_App_Menu_set_about(const char *about);

CFLTK_EXPORT void Fl_Mac_App_Menu_set_print(const char *print);

CFLTK_EXPORT void Fl_Mac_App_Menu_set_print_no_titlebar(const char *print_no_titlebar);

CFLTK_EXPORT void Fl_Mac_App_Menu_set_toggle_print_titlebar(const char *toggle_print_titlebar
);

CFLTK_EXPORT void Fl_Mac_App_Menu_set_services(const char *services);

CFLTK_EXPORT void Fl_Mac_App_Menu_set_hide(const char *hide);

CFLTK_EXPORT void Fl_Mac_App_Menu_set_hide_others(const char *hide_others);

CFLTK_EXPORT void Fl_Mac_App_Menu_set_show(const char *show);

CFLTK_EXPORT void Fl_Mac_App_Menu_set_quit(const char *quit);

#ifdef __cplusplus
}
#endif
#endif
