#ifndef __CFL_MACROS_H__
#define __CFL_MACROS_H__

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
typedef void(Fl_Callback)(Fl_Widget *, void *);
typedef int (*custom_handler_callback)(Fl_Widget *, int, void *);
typedef void (*custom_draw_callback)(Fl_Widget *, void *);

#define WIDGET_DECLARE(widget)                                                 \
    typedef struct widget widget;                                              \
    CFLTK_EXPORT widget *widget##_new(                                                      \
        int x, int y, int width, int height, const char *title                 \
    );                                                                         \
    CFLTK_EXPORT int widget##_x(widget *);                                                  \
    CFLTK_EXPORT int widget##_y(widget *);                                                  \
    CFLTK_EXPORT int widget##_width(widget *);                                              \
    CFLTK_EXPORT int widget##_height(widget *);                                             \
    CFLTK_EXPORT const char *widget##_label(widget *);                                      \
    CFLTK_EXPORT void widget##_set_label(widget *, const char *title);                      \
    CFLTK_EXPORT void widget##_redraw(widget *);                                            \
    CFLTK_EXPORT void widget##_show(widget *);                                              \
    CFLTK_EXPORT void widget##_hide(widget *);                                              \
    CFLTK_EXPORT void widget##_activate(widget *);                                          \
    CFLTK_EXPORT void widget##_deactivate(widget *);                                        \
    CFLTK_EXPORT void widget##_redraw_label(widget *);                                      \
    CFLTK_EXPORT void widget##_resize(widget *, int x, int y, int width, int height);       \
    CFLTK_EXPORT void widget##_widget_resize(                                               \
        widget *, int x, int y, int width, int height                          \
    );                                                                         \
    CFLTK_EXPORT const char *widget##_tooltip(widget *);                                    \
    CFLTK_EXPORT void widget##_set_tooltip(widget *, const char *txt);                      \
    CFLTK_EXPORT int widget##_get_type(widget *);                                           \
    CFLTK_EXPORT void widget##_set_type(widget *, int typ);                                 \
    CFLTK_EXPORT unsigned int widget##_color(widget *);                                     \
    CFLTK_EXPORT void widget##_set_color(widget *, unsigned int color);                     \
    CFLTK_EXPORT void widget##_measure_label(const widget *, int *, int *);                 \
    CFLTK_EXPORT unsigned int widget##_label_color(widget *);                               \
    CFLTK_EXPORT void widget##_set_label_color(widget *, unsigned int color);               \
    CFLTK_EXPORT int widget##_label_font(widget *);                                         \
    CFLTK_EXPORT void widget##_set_label_font(widget *, int font);                          \
    CFLTK_EXPORT int widget##_label_size(widget *);                                         \
    CFLTK_EXPORT void widget##_set_label_size(widget *, int sz);                            \
    CFLTK_EXPORT int widget##_label_type(widget *);                                         \
    CFLTK_EXPORT void widget##_set_label_type(widget *, int typ);                           \
    CFLTK_EXPORT int widget##_box(widget *);                                                \
    CFLTK_EXPORT void widget##_set_box(widget *, int typ);                                  \
    CFLTK_EXPORT int widget##_changed(widget *);                                            \
    CFLTK_EXPORT void widget##_set_changed(widget *);                                       \
    CFLTK_EXPORT void widget##_clear_changed(widget *);                                     \
    CFLTK_EXPORT int widget##_align(widget *);                                              \
    CFLTK_EXPORT void widget##_set_align(widget *, int typ);                                \
    CFLTK_EXPORT void widget##_delete(widget *);                                            \
    CFLTK_EXPORT void widget##_set_image(widget *, void *);                                 \
    CFLTK_EXPORT void widget##_handle(                                                      \
        widget *self, custom_handler_callback cb, void *data                   \
    );                                                                         \
    CFLTK_EXPORT int widget##_handle_event(widget *self, int event);                        \
    CFLTK_EXPORT void widget##_draw(widget *self, custom_draw_callback cb, void *data);     \
    CFLTK_EXPORT void widget##_resize_callback(                                             \
        widget *self,                                                          \
        void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *),           \
        void *data                                                             \
    );                                                                         \
    CFLTK_EXPORT void widget##_set_when(widget *, int);                                     \
    CFLTK_EXPORT int widget##_when(const widget *);                                         \
    CFLTK_EXPORT const void *widget##_image(const widget *);                                \
    CFLTK_EXPORT void *widget##_parent(const widget *self);                                 \
    CFLTK_EXPORT unsigned int widget##_selection_color(widget *);                           \
    CFLTK_EXPORT void widget##_set_selection_color(widget *, unsigned int color);           \
    CFLTK_EXPORT void widget##_do_callback(widget *);                                       \
    CFLTK_EXPORT int widget##_inside(const widget *self, void *);                           \
    CFLTK_EXPORT void *widget##_window(const widget *);                                     \
    CFLTK_EXPORT void *widget##_top_window(const widget *);                                 \
    CFLTK_EXPORT int widget##_takes_events(const widget *);                                 \
    CFLTK_EXPORT void *widget##_user_data(const widget *);                                  \
    CFLTK_EXPORT int widget##_take_focus(widget *self);                                     \
    CFLTK_EXPORT void widget##_set_visible_focus(widget *self);                             \
    CFLTK_EXPORT void widget##_clear_visible_focus(widget *self);                           \
    CFLTK_EXPORT void widget##_visible_focus(widget *self, int v);                          \
    CFLTK_EXPORT unsigned int widget##_has_visible_focus(widget *self);                     \
    CFLTK_EXPORT void widget##_set_user_data(widget *, void *data);                         \
    CFLTK_EXPORT void *widget##_draw_data(const widget *self);                              \
    CFLTK_EXPORT void *widget##_handle_data(const widget *self);                            \
    CFLTK_EXPORT void widget##_set_draw_data(widget *self, void *data);                     \
    CFLTK_EXPORT void widget##_set_handle_data(widget *self, void *data);                   \
    CFLTK_EXPORT unsigned char widget##_damage(const widget *self);                         \
    CFLTK_EXPORT void widget##_set_damage(widget *self, unsigned char flag);                \
    CFLTK_EXPORT void widget##_set_damage_area(                                             \
        widget *self, unsigned char flag, int x, int y, int w, int h           \
    );                                                                         \
    CFLTK_EXPORT void widget##_clear_damage(widget *self);                                  \
    CFLTK_EXPORT void *widget##_as_window(widget *self);                                    \
    CFLTK_EXPORT void *widget##_as_group(widget *self);                                     \
    CFLTK_EXPORT void widget##_set_deimage(widget *, void *);                               \
    CFLTK_EXPORT const void *widget##_deimage(const widget *);                              \
    CFLTK_EXPORT void widget##_set_callback(widget *, Fl_Callback *, void *);               \
    CFLTK_EXPORT int widget##_visible(const widget *self);                                  \
    CFLTK_EXPORT int widget##_visible_r(const widget *self);                                \
    CFLTK_EXPORT unsigned int widget##_active(const widget *self);                          \
    CFLTK_EXPORT int widget##_active_r(const widget *self);                                 \
    CFLTK_EXPORT Fl_Callback *widget##_callback(const widget *self);                        \
    CFLTK_EXPORT void widget##_set_deletion_callback(                                       \
        widget *self, void (*)(Fl_Widget *, void *), void *data                \
    );                                                                         \
    CFLTK_EXPORT widget *widget##_from_dyn_ptr(Fl_Widget *ptr);                             \
    CFLTK_EXPORT widget *widget##_from_derived_dyn_ptr(Fl_Widget *ptr);                     \
    CFLTK_EXPORT void widget##_super_draw(Fl_Widget *ptr, int flag);                        \
    CFLTK_EXPORT void widget##_super_draw_first(Fl_Widget *ptr, int flag);                  \
    CFLTK_EXPORT void widget##_super_handle_first(Fl_Widget *ptr, int flag);

#define WIDGET_CLASS(widget) using widget##_Derived = Widget_Derived<widget>;

#define WIDGET_DEFINE(widget)                                                  \
    CFLTK_EXPORT widget *widget##_new(                                                      \
        int x, int y, int width, int height, const char *title                 \
    ) {                                                                        \
        LOCK(auto ret = new widget##_Derived(x, y, width, height, title));     \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT int widget##_x(widget *self) {                                             \
        LOCK(auto ret = self->x());                                            \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT int widget##_y(widget *self) {                                             \
        LOCK(auto ret = self->y());                                            \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT int widget##_width(widget *self) {                                         \
        LOCK(auto ret = self->w());                                            \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT int widget##_height(widget *self) {                                        \
        LOCK(auto ret = self->h());                                            \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT const char *widget##_label(widget *self) {                                 \
        LOCK(auto ret = self->label());                                        \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_label(widget *self, const char *title) {                 \
        LOCK(self->copy_label(title));                                         \
    }                                                                          \
    CFLTK_EXPORT void widget##_redraw(widget *self) {                                       \
        LOCK(self->redraw());                                                  \
    }                                                                          \
    CFLTK_EXPORT void widget##_show(widget *self) {                                         \
        LOCK(self->show());                                                    \
    }                                                                          \
    CFLTK_EXPORT void widget##_hide(widget *self) {                                         \
        LOCK(self->hide());                                                    \
    }                                                                          \
    CFLTK_EXPORT void widget##_activate(widget *self) {                                     \
        LOCK(self->activate());                                                \
    }                                                                          \
    CFLTK_EXPORT void widget##_deactivate(widget *self) {                                   \
        LOCK(self->deactivate());                                              \
    }                                                                          \
    CFLTK_EXPORT void widget##_redraw_label(widget *self) {                                 \
        LOCK(self->redraw_label());                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_resize(widget *self, int x, int y, int width, int height) {  \
        LOCK(((widget##_Derived *)self)->resize(x, y, width, height));         \
    }                                                                          \
    CFLTK_EXPORT void widget##_widget_resize(                                               \
        widget *self, int x, int y, int width, int height                      \
    ) {                                                                        \
        LOCK(((widget##_Derived *)self)->widget_resize(x, y, width, height))   \
    }                                                                          \
    CFLTK_EXPORT const char *widget##_tooltip(widget *self) {                               \
        LOCK(auto ret = self->tooltip());                                      \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_tooltip(widget *self, const char *txt) {                 \
        LOCK(self->copy_tooltip(txt));                                         \
    }                                                                          \
    CFLTK_EXPORT int widget##_get_type(widget *self) {                                      \
        LOCK(auto ret = self->type());                                         \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_type(widget *self, int typ) {                            \
        LOCK(self->type((decltype(self->type()))typ));                         \
    }                                                                          \
    CFLTK_EXPORT unsigned int widget##_color(widget *self) {                                \
        LOCK(auto ret = self->color());                                        \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_color(widget *self, unsigned int color) {                \
        LOCK(self->color(color));                                              \
    }                                                                          \
    CFLTK_EXPORT void widget##_measure_label(const widget *self, int *x, int *y) {          \
        LOCK(self->measure_label(*x, *y));                                     \
    }                                                                          \
    CFLTK_EXPORT unsigned int widget##_label_color(widget *self) {                          \
        LOCK(auto ret = self->labelcolor());                                   \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_label_color(widget *self, unsigned int color) {          \
        LOCK(self->labelcolor(color));                                         \
    }                                                                          \
    CFLTK_EXPORT int widget##_label_font(widget *self) {                                    \
        LOCK(auto ret = self->labelfont());                                    \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_label_font(widget *self, int font) {                     \
        LOCK(self->labelfont(font));                                           \
    }                                                                          \
    CFLTK_EXPORT int widget##_label_size(widget *self) {                                    \
        LOCK(auto ret = self->labelsize());                                    \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_label_size(widget *self, int sz) {                       \
        LOCK(self->labelsize(sz));                                             \
    }                                                                          \
    CFLTK_EXPORT int widget##_label_type(widget *self) {                                    \
        LOCK(auto ret = self->labeltype());                                    \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_label_type(widget *self, int typ) {                      \
        LOCK(self->labeltype(static_cast<Fl_Labeltype>(typ)));                 \
    }                                                                          \
    CFLTK_EXPORT int widget##_box(widget *self) {                                           \
        LOCK(auto ret = self->box());                                          \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_box(widget *self, int typ) {                             \
        LOCK(self->box(static_cast<Fl_Boxtype>(typ)));                         \
    }                                                                          \
    CFLTK_EXPORT int widget##_changed(widget *self) {                                       \
        LOCK(auto ret = self->changed());                                      \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_changed(widget *self) {                                  \
        LOCK(self->set_changed());                                             \
    }                                                                          \
    CFLTK_EXPORT void widget##_clear_changed(widget *self) {                                \
        LOCK(self->clear_changed());                                           \
    }                                                                          \
    CFLTK_EXPORT int widget##_align(widget *self) {                                         \
        LOCK(auto ret = self->align());                                        \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_align(widget *self, int typ) {                           \
        LOCK(self->align(typ));                                                \
    }                                                                          \
    CFLTK_EXPORT void widget##_delete(widget *self) {                                       \
        delete ((widget##_Derived *)self);                                     \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_image(widget *self, void *image) {                       \
        LOCK(self->image((Fl_Image *)image));                                  \
    }                                                                          \
    CFLTK_EXPORT void widget##_handle(                                                      \
        widget *self, custom_handler_callback cb, void *data                   \
    ) {                                                                        \
        LOCK(((widget##_Derived *)self)->ev_data_      = data;                 \
             ((widget##_Derived *)self)->inner_handler = cb);                  \
    }                                                                          \
    CFLTK_EXPORT int widget##_handle_event(widget *self, int event) {                       \
        LOCK(auto ret = ((widget##_Derived *)self)->handle(event));            \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_when(widget *self, int val) {                            \
        LOCK(self->when(val));                                                 \
    }                                                                          \
    CFLTK_EXPORT int widget##_when(const widget *self) {                                    \
        LOCK(auto ret = self->when());                                         \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT const void *widget##_image(const widget *self) {                           \
        LOCK(auto temp = self->image());                                       \
        return temp;                                                           \
    }                                                                          \
    CFLTK_EXPORT void widget##_draw(widget *self, custom_draw_callback cb, void *data) {    \
        LOCK(((widget##_Derived *)self)->draw_data_   = data;                  \
             ((widget##_Derived *)self)->inner_drawer = cb);                   \
    }                                                                          \
    CFLTK_EXPORT void widget##_resize_callback(                                             \
        widget *self,                                                          \
        void (*cb)(Fl_Widget *, int x, int y, int w, int h, void *),           \
        void *data                                                             \
    ) {                                                                        \
        LOCK(((widget##_Derived *)self)->resize_data_   = data;                \
             ((widget##_Derived *)self)->resize_handler = cb);                 \
    }                                                                          \
    CFLTK_EXPORT void *widget##_parent(const widget *self) {                                \
        LOCK(auto ret = (Fl_Group *)self->parent());                           \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT unsigned int widget##_selection_color(widget *self) {                      \
        LOCK(auto ret = self->selection_color());                              \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_selection_color(widget *self, unsigned int color) {      \
        LOCK(self->selection_color(color));                                    \
    }                                                                          \
    CFLTK_EXPORT void widget##_do_callback(widget *self) {                                  \
        LOCK(((Fl_Widget *)self)->do_callback());                              \
    }                                                                          \
    CFLTK_EXPORT int widget##_inside(const widget *self, void *wid) {                       \
        LOCK(auto ret = self->inside((Fl_Widget *)wid));                       \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void *widget##_window(const widget *self) {                                \
        LOCK(auto ret = (void *)self->window());                               \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void *widget##_top_window(const widget *self) {                            \
        LOCK(auto ret = (void *)self->top_window());                           \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT int widget##_takes_events(const widget *self) {                            \
        LOCK(auto ret = self->takesevents());                                  \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void *widget##_user_data(const widget *self) {                             \
        LOCK(auto ret = self->user_data());                                    \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT int widget##_take_focus(widget *self) {                                    \
        LOCK(auto ret = ((Fl_Widget *)self)->take_focus());                    \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_visible_focus(widget *self) {                            \
        LOCK(self->set_visible_focus());                                       \
    }                                                                          \
    CFLTK_EXPORT void widget##_clear_visible_focus(widget *self) {                          \
        LOCK(self->clear_visible_focus());                                     \
    }                                                                          \
    CFLTK_EXPORT void widget##_visible_focus(widget *self, int v) {                         \
        LOCK(self->visible_focus(v));                                          \
    }                                                                          \
    CFLTK_EXPORT unsigned int widget##_has_visible_focus(widget *self) {                    \
        LOCK(auto ret = self->visible_focus());                                \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_user_data(widget *self, void *data) {                    \
        LOCK(self->user_data(data));                                           \
    }                                                                          \
    CFLTK_EXPORT void *widget##_draw_data(const widget *self) {                             \
        LOCK(auto ret = ((widget##_Derived *)self)->draw_data_);               \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void *widget##_handle_data(const widget *self) {                           \
        LOCK(auto ret = ((widget##_Derived *)self)->ev_data_);                 \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_draw_data(widget *self, void *data) {                    \
        LOCK(((widget##_Derived *)self)->draw_data_ = data;)                   \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_handle_data(widget *self, void *data) {                  \
        LOCK(((widget##_Derived *)self)->ev_data_ = data;)                     \
    }                                                                          \
    CFLTK_EXPORT unsigned char widget##_damage(const widget *self) {                        \
        LOCK(auto ret = self->damage());                                       \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_damage(widget *self, unsigned char flag) {               \
        LOCK(self->damage(flag));                                              \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_damage_area(                                             \
        widget *self, unsigned char flag, int x, int y, int w, int h           \
    ) {                                                                        \
        LOCK(self->damage(flag, x, y, w, h));                                  \
    }                                                                          \
    CFLTK_EXPORT void widget##_clear_damage(widget *self) {                                 \
        LOCK(self->clear_damage());                                            \
    }                                                                          \
    CFLTK_EXPORT void *widget##_as_window(widget *self) {                                   \
        LOCK(auto ret = self->as_window());                                    \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void *widget##_as_group(widget *self) {                                    \
        LOCK(auto ret = self->as_group());                                     \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_deimage(widget *self, void *image) {                     \
        LOCK(self->deimage((Fl_Image *)image));                                \
    }                                                                          \
    CFLTK_EXPORT const void *widget##_deimage(const widget *self) {                         \
        LOCK(auto temp = self->deimage());                                     \
        return temp;                                                           \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_callback(widget *self, Fl_Callback *cb, void *data) {    \
        LOCK(self->callback(cb, data));                                        \
    }                                                                          \
    CFLTK_EXPORT int widget##_visible(const widget *self) {                                 \
        LOCK(auto ret = ((Fl_Widget *)self)->visible());                       \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT int widget##_visible_r(const widget *self) {                               \
        LOCK(auto ret = self->visible_r());                                    \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT unsigned int widget##_active(const widget *self) {                         \
        LOCK(auto ret = self->active());                                       \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT int widget##_active_r(const widget *self) {                                \
        LOCK(auto ret = self->active_r());                                     \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT Fl_Callback *widget##_callback(const widget *self) {                       \
        LOCK(auto ret = self->callback());                                     \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_deletion_callback(                                       \
        widget *self, void (*cb)(Fl_Widget *, void *), void *data              \
    ) {                                                                        \
        LOCK(((widget##_Derived *)self)->deleter       = cb;                   \
             ((widget##_Derived *)self)->deleter_data_ = data);                \
    }                                                                          \
    CFLTK_EXPORT widget *widget##_from_dyn_ptr(Fl_Widget *ptr) {                            \
        return widget##_Derived::from_dyn_ptr(ptr);                            \
    }                                                                          \
    CFLTK_EXPORT widget *widget##_from_derived_dyn_ptr(Fl_Widget *ptr) {                    \
        return widget##_Derived::from_derived_dyn_ptr(ptr);                    \
    }                                                                          \
    CFLTK_EXPORT void widget##_super_draw(Fl_Widget *self, int flag) {                      \
        ((widget##_Derived *)self)->super_draw = flag;                         \
    }                                                                          \
    void widget##_super_draw_first(Fl_Widget *self, int flag) {                \
        ((widget##_Derived *)self)->super_draw_first = flag;                   \
    }                                                                          \
    void widget##_super_handle_first(Fl_Widget *self, int flag) {              \
        ((widget##_Derived *)self)->super_handle_first = flag;                 \
    }

#define GROUP_DECLARE(widget)                                                  \
    CFLTK_EXPORT void widget##_begin(widget *self);                                         \
    CFLTK_EXPORT void widget##_end(widget *self);                                           \
    CFLTK_EXPORT int widget##_find(widget *self, const void *);                             \
    CFLTK_EXPORT void widget##_add(widget *self, void *);                                   \
    CFLTK_EXPORT void widget##_insert(widget *self, void *, int pos);                       \
    CFLTK_EXPORT void widget##_remove(widget *self, void *wid);                             \
    CFLTK_EXPORT void widget##_remove_by_index(widget *self, int idx);                      \
    CFLTK_EXPORT void widget##_clear(widget *self);                                         \
    CFLTK_EXPORT int widget##_children(widget *self);                                       \
    CFLTK_EXPORT Fl_Widget *widget##_child(widget *, int index);                            \
    CFLTK_EXPORT void widget##_resizable(widget *self, void *);                             \
    CFLTK_EXPORT void widget##_set_clip_children(widget *self, int c);                      \
    CFLTK_EXPORT int widget##_clip_children(widget *self);                                  \
    CFLTK_EXPORT void widget##_init_sizes(widget *self);                                    \
    CFLTK_EXPORT void widget##_draw_child(const widget *self, Fl_Widget *w);                \
    CFLTK_EXPORT void widget##_update_child(const widget *self, Fl_Widget *w);              \
    CFLTK_EXPORT void widget##_draw_outside_label(const widget *self, const Fl_Widget *w);  \
    CFLTK_EXPORT void widget##_draw_children(widget *self);

#define GROUP_DEFINE(widget)                                                   \
    CFLTK_EXPORT void widget##_begin(widget *self) {                                        \
        LOCK(self->begin());                                                   \
    }                                                                          \
    CFLTK_EXPORT void widget##_end(widget *self) {                                          \
        LOCK(self->end());                                                     \
    }                                                                          \
    CFLTK_EXPORT int widget##_find(widget *self, const void *wid) {                         \
        LOCK(auto ret = self->find((const Fl_Widget *)wid));                   \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_add(widget *self, void *wid) {                               \
        LOCK(self->add((Fl_Widget *)wid));                                     \
    }                                                                          \
    CFLTK_EXPORT void widget##_insert(widget *self, void *wid, int pos) {                   \
        LOCK(self->insert(*(Fl_Widget *)wid, pos));                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_remove(widget *self, void *wid) {                            \
        LOCK(self->remove(*(Fl_Widget *)wid));                                 \
    }                                                                          \
    CFLTK_EXPORT void widget##_remove_by_index(widget *self, int idx) {                     \
        LOCK(self->remove(*self->child(idx)));                                 \
    }                                                                          \
    CFLTK_EXPORT void widget##_clear(widget *self) {                                        \
        LOCK(self->clear());                                                   \
    }                                                                          \
    CFLTK_EXPORT int widget##_children(widget *self) {                                      \
        LOCK(auto ret = self->children());                                     \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT Fl_Widget *widget##_child(widget *self, int index) {                       \
        LOCK(auto ret = self->child(index));                                   \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_resizable(widget *self, void *wid) {                         \
        LOCK(self->resizable((Fl_Widget *)wid));                               \
    }                                                                          \
    CFLTK_EXPORT void widget##_set_clip_children(widget *self, int c) {                     \
        LOCK(self->clip_children(c));                                          \
    }                                                                          \
    CFLTK_EXPORT int widget##_clip_children(widget *self) {                                 \
        LOCK(auto ret = self->clip_children());                                \
        return ret;                                                            \
    }                                                                          \
    CFLTK_EXPORT void widget##_init_sizes(widget *self) {                                   \
        LOCK(self->init_sizes());                                              \
    }                                                                          \
    CFLTK_EXPORT void widget##_draw_child(const widget *self, Fl_Widget *w) {               \
        (void)self;                                                            \
        if (w->visible() && w->type() < 0xF0 &&                                \
            fl_not_clipped(w->x(), w->y(), w->w(), w->h())) {                  \
            LOCK(w->clear_damage(FL_DAMAGE_ALL); w->draw();                    \
                 w->clear_damage());                                           \
        }                                                                      \
    }                                                                          \
    CFLTK_EXPORT void widget##_update_child(const widget *self, Fl_Widget *w) {             \
        (void)self;                                                            \
        if (w->damage() && w->visible() && w->type() < 0xF0 &&                 \
            fl_not_clipped(w->x(), w->y(), w->w(), w->h())) {                  \
            LOCK(w->draw(); w->clear_damage());                                \
        }                                                                      \
    }                                                                          \
    CFLTK_EXPORT void widget##_draw_outside_label(const widget *self, const Fl_Widget *w) { \
        if (!w->visible())                                                     \
            return;                                                            \
        if (!(w->align() & 15) || (w->align() & FL_ALIGN_INSIDE))              \
            return;                                                            \
        Fl_Align a = w->align();                                               \
        int X      = w->x();                                                   \
        int Y      = w->y();                                                   \
        int W      = w->w();                                                   \
        int H      = w->h();                                                   \
        int wx, wy;                                                            \
        if (const_cast<widget *>(self)->as_window()) {                         \
            wx = wy = 0;                                                       \
        } else {                                                               \
            wx = self->x();                                                    \
            wy = self->y();                                                    \
        }                                                                      \
        if ((a & FL_ALIGN_POSITION_MASK) == FL_ALIGN_LEFT_TOP) {               \
            a = (a & (~FL_ALIGN_POSITION_MASK)) | FL_ALIGN_TOP_RIGHT;          \
            X = wx;                                                            \
            W = w->x() - X - 3;                                                \
        } else if ((a & FL_ALIGN_POSITION_MASK) == FL_ALIGN_LEFT_BOTTOM) {     \
            a = (a & (~FL_ALIGN_POSITION_MASK)) | FL_ALIGN_BOTTOM_RIGHT;       \
            X = wx;                                                            \
            W = w->x() - X - 3;                                                \
        } else if ((a & FL_ALIGN_POSITION_MASK) == FL_ALIGN_RIGHT_TOP) {       \
            a = (a & (~FL_ALIGN_POSITION_MASK)) | FL_ALIGN_TOP_LEFT;           \
            X = X + W + 3;                                                     \
            W = wx + self->w() - X;                                            \
        } else if ((a & FL_ALIGN_POSITION_MASK) == FL_ALIGN_RIGHT_BOTTOM) {    \
            a = (a & (~FL_ALIGN_POSITION_MASK)) | FL_ALIGN_BOTTOM_LEFT;        \
            X = X + W + 3;                                                     \
            W = wx + self->w() - X;                                            \
        } else if (a & FL_ALIGN_TOP) {                                         \
            a ^= FL_ALIGN_TOP;                                                 \
            a |= FL_ALIGN_BOTTOM;                                              \
            Y = wy;                                                            \
            H = w->y() - Y;                                                    \
        } else if (a & FL_ALIGN_BOTTOM) {                                      \
            a ^= FL_ALIGN_BOTTOM;                                              \
            a |= FL_ALIGN_TOP;                                                 \
            Y = Y + H;                                                         \
            H = wy + self->h() - Y;                                            \
        } else if (a & FL_ALIGN_LEFT) {                                        \
            a ^= FL_ALIGN_LEFT;                                                \
            a |= FL_ALIGN_RIGHT;                                               \
            X = wx;                                                            \
            W = w->x() - X - 3;                                                \
        } else if (a & FL_ALIGN_RIGHT) {                                       \
            a ^= FL_ALIGN_RIGHT;                                               \
            a |= FL_ALIGN_LEFT;                                                \
            X = X + W + 3;                                                     \
            W = wx + self->w() - X;                                            \
        }                                                                      \
        LOCK(w->draw_label(X, Y, W, H, (Fl_Align)a));                          \
    }                                                                          \
    CFLTK_EXPORT void widget##_draw_children(widget *self) {                                \
        LOCK(                                                                  \
            Fl_Widget *const *a = self->array(); if (self->clip_children()) {  \
                fl_push_clip(                                                  \
                    self->x() + Fl::box_dx(self->box()),                       \
                    self->y() + Fl::box_dy(self->box()),                       \
                    self->w() - Fl::box_dw(self->box()),                       \
                    self->h() - Fl::box_dh(self->box())                        \
                );                                                             \
            } if (self->damage() & ~0x01) {                                    \
                for (int i = self->children(); i--;) {                         \
                    Fl_Widget &o = **a++;                                      \
                    widget##_draw_child(self, &o);                             \
                    widget##_draw_outside_label(self, &o);                     \
                }                                                              \
            } else {                                                           \
                for (int i = self->children(); i--;)                           \
                    widget##_update_child(self, *a++);                         \
            } if (self->clip_children()) fl_pop_clip()                         \
        );                                                                     \
    }

#ifdef __cplusplus
}
#endif
#endif
