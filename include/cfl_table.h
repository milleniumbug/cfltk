#ifndef __CFL_TABLE_H__
#define __CFL_TABLE_H__

#include "cfl_macros.h"

#ifdef __cplusplus
extern "C" {
#endif

#define TABLE_DECLARE(table)                                                   \
    typedef struct table table;                                                \
    CFLTK_EXPORT void table##_set_table_box(table *self, int val);                          \
    CFLTK_EXPORT int table##_table_box(table *self);                                        \
    CFLTK_EXPORT void table##_set_rows(table *self, int val);                               \
    CFLTK_EXPORT int table##_rows(table *self);                                             \
    CFLTK_EXPORT void table##_set_cols(table *self, int val);                               \
    CFLTK_EXPORT int table##_cols(table *self);                                             \
    CFLTK_EXPORT void table##_visible_cells(                                                \
        table *self, int *r1, int *r2, int *c1, int *c2                        \
    );                                                                         \
    CFLTK_EXPORT int table##_is_interactive_resize(table *self);                            \
    CFLTK_EXPORT int table##_row_resize(table *self);                                       \
    CFLTK_EXPORT void table##_set_row_resize(table *self, int flag);                        \
    CFLTK_EXPORT int table##_col_resize(table *self);                                       \
    CFLTK_EXPORT void table##_set_col_resize(table *self, int flag);                        \
    CFLTK_EXPORT int table##_col_resize_min(table *self);                                   \
    CFLTK_EXPORT void table##_set_col_resize_min(table *self, int val);                     \
    CFLTK_EXPORT int table##_row_resize_min(table *self);                                   \
    CFLTK_EXPORT void table##_set_row_resize_min(table *self, int val);                     \
    CFLTK_EXPORT int table##_row_header(table *self);                                       \
    CFLTK_EXPORT void table##_set_row_header(table *self, int flag);                        \
    CFLTK_EXPORT int table##_col_header(table *self);                                       \
    CFLTK_EXPORT void table##_set_col_header(table *self, int flag);                        \
    CFLTK_EXPORT void table##_set_col_header_height(table *self, int height);               \
    CFLTK_EXPORT int table##_col_header_height(table *self);                                \
    CFLTK_EXPORT void table##_set_row_header_width(table *self, int width);                 \
    CFLTK_EXPORT int table##_row_header_width(table *self);                                 \
    CFLTK_EXPORT void table##_set_row_header_color(table *self, unsigned int val);          \
    CFLTK_EXPORT unsigned int table##_row_header_color(table *self);                        \
    CFLTK_EXPORT void table##_set_col_header_color(table *self, unsigned int val);          \
    CFLTK_EXPORT unsigned int table##_col_header_color(table *self);                        \
    CFLTK_EXPORT void table##_set_row_height(table *self, int row, int height);             \
    CFLTK_EXPORT int table##_row_height(table *self, int row);                              \
    CFLTK_EXPORT void table##_set_col_width(table *self, int col, int width);               \
    CFLTK_EXPORT int table##_col_width(table *self, int col);                               \
    CFLTK_EXPORT void table##_set_row_height_all(table *self, int height);                  \
    CFLTK_EXPORT void table##_set_col_width_all(table *self, int width);                    \
    CFLTK_EXPORT void table##_set_row_position(table *self, int row);                       \
    CFLTK_EXPORT void table##_set_col_position(table *self, int col);                       \
    CFLTK_EXPORT int table##_row_position(table *self);                                     \
    CFLTK_EXPORT int table##_col_position(table *self);                                     \
    CFLTK_EXPORT void table##_set_top_row(table *self, int row);                            \
    CFLTK_EXPORT int table##_top_row(table *self);                                          \
    CFLTK_EXPORT int table##_is_selected(table *self, int r, int c);                        \
    CFLTK_EXPORT void table##_get_selection(                                                \
        table *self, int *row_top, int *col_left, int *row_bot, int *col_right \
    );                                                                         \
    CFLTK_EXPORT void table##_set_selection(                                                \
        table *self, int row_top, int col_left, int row_bot, int col_right     \
    );                                                                         \
    CFLTK_EXPORT int table##_move_cursor_with_shiftselect(                                  \
        table *self, int R, int C, int shiftselect                             \
    );                                                                         \
    CFLTK_EXPORT int table##_move_cursor(table *self, int R, int C);                        \
    CFLTK_EXPORT int table##_scrollbar_size(const table *self);                             \
    CFLTK_EXPORT void table##_set_scrollbar_size(table *self, int newSize);                 \
    CFLTK_EXPORT void table##_set_tab_cell_nav(table *self, int val);                       \
    CFLTK_EXPORT int table##_tab_cell_nav(const table *self);                               \
    CFLTK_EXPORT void table##_draw_cell(                                                    \
        table *self,                                                           \
        void (*)(Fl_Widget *, int, int, int, int, int, int, int, void *),      \
        void *data                                                             \
    );                                                                         \
    CFLTK_EXPORT void *table##_draw_cell_data(const table *self);                           \
    CFLTK_EXPORT void table##_set_draw_cell_data(table *self, void *data);                  \
    CFLTK_EXPORT int table##_callback_col(table *);                                         \
    CFLTK_EXPORT int table##_callback_row(table *);                                         \
    CFLTK_EXPORT int table##_callback_context(table *);                                     \
    CFLTK_EXPORT void *table##_scrollbar(const table *);                                    \
    CFLTK_EXPORT void *table##_hscrollbar(const table *);                                   \
    CFLTK_EXPORT int table##_find_cell(                                                     \
        const table *self,                                                     \
        int ctx,                                                               \
        int r,                                                                 \
        int c,                                                                 \
        int *x,                                                                \
        int *y,                                                                \
        int *w,                                                                \
        int *h                                                                 \
    );                                                                         \
    CFLTK_EXPORT int table##_cursor2rowcol(const table *self, int *r, int *c, int *flag);

WIDGET_DECLARE(Fl_Table)

GROUP_DECLARE(Fl_Table)

TABLE_DECLARE(Fl_Table)

WIDGET_DECLARE(Fl_Table_Row)

GROUP_DECLARE(Fl_Table_Row)

TABLE_DECLARE(Fl_Table_Row)

CFLTK_EXPORT int Fl_Table_Row_row_selected(Fl_Table_Row *self, int row);

CFLTK_EXPORT int Fl_Table_Row_select_row(Fl_Table_Row *self, int row, int flag);

CFLTK_EXPORT void Fl_Table_Row_select_all_rows(Fl_Table_Row *self, int flag);

CFLTK_EXPORT void Fl_Table_Row_clear_rows(Fl_Table_Row *self);


#ifdef __cplusplus
}
#endif
#endif
