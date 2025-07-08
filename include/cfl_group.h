#ifndef __CFL_GROUP_H__
#define __CFL_GROUP_H__

#include "cfl_macros.h"

#ifdef __cplusplus
extern "C" {
#endif

WIDGET_DECLARE(Fl_Group)

CFLTK_EXPORT Fl_Group *Fl_Group_current(void);

CFLTK_EXPORT void Fl_Group_set_current(Fl_Group *grp);

GROUP_DECLARE(Fl_Group)

WIDGET_DECLARE(Fl_Pack)

CFLTK_EXPORT int Fl_Pack_spacing(Fl_Pack *self);

CFLTK_EXPORT void Fl_Pack_set_spacing(Fl_Pack *self, int spacing);

GROUP_DECLARE(Fl_Pack)

WIDGET_DECLARE(Fl_Scroll)

CFLTK_EXPORT void *Fl_Scroll_scrollbar(Fl_Scroll *self);

CFLTK_EXPORT void *Fl_Scroll_hscrollbar(Fl_Scroll *self);

CFLTK_EXPORT int Fl_Scroll_xposition(const Fl_Scroll *self);

CFLTK_EXPORT int Fl_Scroll_yposition(const Fl_Scroll *self);

CFLTK_EXPORT void Fl_Scroll_scroll_to(Fl_Scroll *self, int, int);

CFLTK_EXPORT int Fl_Scroll_scrollbar_size(const Fl_Scroll *self);

CFLTK_EXPORT void Fl_Scroll_set_scrollbar_size(Fl_Scroll *self, int newSize);

GROUP_DECLARE(Fl_Scroll)

WIDGET_DECLARE(Fl_Tabs)

CFLTK_EXPORT Fl_Widget *Fl_Tabs_value(Fl_Tabs *self);

CFLTK_EXPORT int Fl_Tabs_set_value(Fl_Tabs *self, Fl_Widget *w);

CFLTK_EXPORT Fl_Widget *Fl_Tabs_push(const Fl_Tabs *self);

CFLTK_EXPORT int Fl_Tabs_set_push(Fl_Tabs *self, Fl_Widget *w);

CFLTK_EXPORT void Fl_Tabs_client_area(Fl_Tabs *self, int *rx, int *ry, int *rw, int *rh);

CFLTK_EXPORT void Fl_Tabs_set_tab_align(Fl_Tabs *self, int a);

CFLTK_EXPORT int Fl_Tabs_tab_align(const Fl_Tabs *self);

CFLTK_EXPORT void Fl_Tabs_handle_overflow(Fl_Tabs *self, int ov);

GROUP_DECLARE(Fl_Tabs)

WIDGET_DECLARE(Fl_Tile)

CFLTK_EXPORT void Fl_Tile_move_intersection(Fl_Tile *self, int oldx, int oldy, int newx, int newy);

CFLTK_EXPORT void Fl_Tile_size_range_by_index(Fl_Tile *self, int index, int minw, int minh, int maxw, int maxh);

CFLTK_EXPORT void Fl_Tile_size_range_by_child(Fl_Tile *self, Fl_Widget *w , int minw, int minh, int maxw, int maxh);

GROUP_DECLARE(Fl_Tile)

WIDGET_DECLARE(Fl_Wizard)

CFLTK_EXPORT void Fl_Wizard_next(Fl_Wizard *);

CFLTK_EXPORT void Fl_Wizard_prev(Fl_Wizard *);

CFLTK_EXPORT Fl_Widget *Fl_Wizard_value(Fl_Wizard *);

CFLTK_EXPORT void Fl_Wizard_set_value(Fl_Wizard *, Fl_Widget *);

GROUP_DECLARE(Fl_Wizard)

WIDGET_DECLARE(Fl_Color_Chooser)

CFLTK_EXPORT double Fl_Color_Chooser_r(Fl_Color_Chooser *self);

CFLTK_EXPORT double Fl_Color_Chooser_g(Fl_Color_Chooser *self);

CFLTK_EXPORT double Fl_Color_Chooser_b(Fl_Color_Chooser *self);

CFLTK_EXPORT int Fl_Color_Chooser_set_rgb(
    Fl_Color_Chooser *self, double r, double g, double b
);

GROUP_DECLARE(Fl_Color_Chooser)

WIDGET_DECLARE(Fl_Flex)

CFLTK_EXPORT void Fl_Flex_set_size(Fl_Flex *self, Fl_Widget *w, int size);

CFLTK_EXPORT void Fl_Flex_set_margin(Fl_Flex *self, int m);

CFLTK_EXPORT int Fl_Flex_margin(const Fl_Flex *self);

CFLTK_EXPORT void Fl_Flex_set_pad(Fl_Flex *self, int p);

CFLTK_EXPORT int Fl_Flex_pad(const Fl_Flex *self);

CFLTK_EXPORT void Fl_Flex_set_margins(Fl_Flex *self, int x1, int y1, int x2, int y2);

CFLTK_EXPORT int Fl_Flex_margins(const Fl_Flex *self, int *x1, int *y1, int *x2, int *y2);

GROUP_DECLARE(Fl_Flex)

WIDGET_DECLARE(Fl_Grid)

CFLTK_EXPORT void Fl_Grid_set_layout(Fl_Grid *self, int rows, int cols, int margin, int gap);

CFLTK_EXPORT void Fl_Grid_layout(Fl_Grid *self);

CFLTK_EXPORT void Fl_Grid_clear_layout(Fl_Grid *self);

CFLTK_EXPORT void Fl_Grid_set_need_layout(Fl_Grid *self, int set);

CFLTK_EXPORT int Fl_Grid_need_layout(const Fl_Grid *self);

CFLTK_EXPORT void Fl_Grid_set_margin(
    Fl_Grid *self, int left, int top, int right, int bottom
);

CFLTK_EXPORT void Fl_Grid_set_gap(Fl_Grid *self, int row_gap, int col_gap);

CFLTK_EXPORT void *Fl_Grid_set_widget(
    Fl_Grid *self, Fl_Widget *wi, int row, int col, unsigned short align
);

CFLTK_EXPORT void *Fl_Grid_set_widget_ext(
    Fl_Grid *self,
    Fl_Widget *wi,
    int row,
    int col,
    int rowspan,
    int colspan,
    unsigned short align
);

CFLTK_EXPORT void Fl_Grid_set_col_width(Fl_Grid *self, int col, int value);

CFLTK_EXPORT void Fl_Grid_set_col_weight(Fl_Grid *self, int col, int value);

CFLTK_EXPORT void Fl_Grid_set_col_gap(Fl_Grid *self, int col, int value);

CFLTK_EXPORT void Fl_Grid_set_row_height(Fl_Grid *self, int row, int value);

CFLTK_EXPORT void Fl_Grid_set_row_weight(Fl_Grid *self, int row, int value);

CFLTK_EXPORT void Fl_Grid_set_row_gap(Fl_Grid *self, int row, int value);

CFLTK_EXPORT void Fl_Grid_show_grid(Fl_Grid *self, int set);

CFLTK_EXPORT void Fl_Grid_show_grid_with_color(Fl_Grid *self, int set, unsigned int col);

CFLTK_EXPORT void Fl_Grid_debug(Fl_Grid *self, int level);

GROUP_DECLARE(Fl_Grid)

#ifdef __cplusplus
}
#endif
#endif
