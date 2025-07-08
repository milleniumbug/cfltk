#ifndef __CFL_TEXT_H__
#define __CFL_TEXT_H__

#include "cfl_macros.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DISPLAY_DECLARE(widget)                                                \
    CFLTK_EXPORT int widget##_text_font(const widget *);                                    \
    CFLTK_EXPORT void widget##_set_text_font(widget *, int s);                              \
    CFLTK_EXPORT int widget##_text_size(const widget *);                                    \
    CFLTK_EXPORT void widget##_set_text_size(widget *, int s);                              \
    CFLTK_EXPORT unsigned int widget##_text_color(const widget *);                          \
    CFLTK_EXPORT void widget##_set_text_color(widget *, unsigned int n);                    \
    CFLTK_EXPORT void widget##_scroll(widget *, int topLineNum, int horizOffset);           \
    CFLTK_EXPORT void widget##_insert(widget *, const char *text);                          \
    CFLTK_EXPORT void widget##_set_insert_position(widget *, int newPos);                   \
    CFLTK_EXPORT int widget##_insert_position(const widget *);                              \
    CFLTK_EXPORT int widget##_position_to_xy(const widget *self, int pos, int *x, int *y);  \
    CFLTK_EXPORT int widget##_count_lines(                                                  \
        const widget *, int start, int end, int start_pos_is_line_start        \
    );                                                                         \
    CFLTK_EXPORT int widget##_move_right(widget *);                                         \
    CFLTK_EXPORT int widget##_move_left(widget *);                                          \
    CFLTK_EXPORT int widget##_move_up(widget *);                                            \
    CFLTK_EXPORT int widget##_move_down(widget *);                                          \
    CFLTK_EXPORT void widget##_show_cursor(widget *, int boolean);                          \
    CFLTK_EXPORT void widget##_set_highlight_data(                                          \
        widget *self,                                                          \
        void *sbuff,                                                           \
        unsigned int *color,                                                   \
        int *font,                                                             \
        int *fontsz,                                                           \
        unsigned *attr,                                                        \
        unsigned int *bgcolor,                                                 \
        int sz                                                                 \
    );                                                                         \
    CFLTK_EXPORT void widget##_set_cursor_style(widget *, int style);                       \
    CFLTK_EXPORT void widget##_set_cursor_color(widget *, unsigned int color);              \
    CFLTK_EXPORT void widget##_set_scrollbar_size(widget *, int newSize);                   \
    CFLTK_EXPORT void widget##_set_scrollbar_align(widget *, int align);                    \
    CFLTK_EXPORT int widget##_cursor_style(widget *);                                       \
    CFLTK_EXPORT unsigned int widget##_cursor_color(widget *);                              \
    CFLTK_EXPORT int widget##_scrollbar_size(widget *);                                     \
    CFLTK_EXPORT int widget##_scrollbar_align(widget *);                                    \
    CFLTK_EXPORT int widget##_line_start(const widget *self, int pos);                      \
    CFLTK_EXPORT int widget##_line_end(                                                     \
        const widget *self, int startPos, int startPosIsLineStart              \
    );                                                                         \
    CFLTK_EXPORT int widget##_skip_lines(                                                   \
        widget *self, int startPos, int nLines, int startPosIsLineStart        \
    );                                                                         \
    CFLTK_EXPORT int widget##_rewind_lines(widget *self, int startPos, int nLines);         \
    CFLTK_EXPORT void widget##_next_word(widget *self);                                     \
    CFLTK_EXPORT void widget##_previous_word(widget *self);                                 \
    CFLTK_EXPORT int widget##_word_start(const widget *self, int pos);                      \
    CFLTK_EXPORT int widget##_word_end(const widget *self, int pos);                        \
    CFLTK_EXPORT double widget##_x_to_col(const widget *self, double x);                    \
    CFLTK_EXPORT double widget##_col_to_x(const widget *self, double col);                  \
    CFLTK_EXPORT void widget##_set_linenumber_width(widget *self, int width);               \
    CFLTK_EXPORT int widget##_linenumber_width(const widget *self);                         \
    CFLTK_EXPORT void widget##_set_linenumber_font(widget *self, int val);                  \
    CFLTK_EXPORT int widget##_linenumber_font(const widget *self);                          \
    CFLTK_EXPORT void widget##_set_linenumber_size(widget *self, int val);                  \
    CFLTK_EXPORT int widget##_linenumber_size(const widget *self);                          \
    CFLTK_EXPORT void widget##_set_linenumber_fgcolor(widget *self, unsigned int val);      \
    CFLTK_EXPORT unsigned int widget##_linenumber_fgcolor(const widget *self);              \
    CFLTK_EXPORT void widget##_set_linenumber_bgcolor(widget *self, unsigned int val);      \
    CFLTK_EXPORT unsigned int widget##_linenumber_bgcolor(const widget *self);              \
    CFLTK_EXPORT void widget##_set_linenumber_align(widget *self, int val);                 \
    CFLTK_EXPORT int widget##_linenumber_align(const widget *self);                         \
    CFLTK_EXPORT int widget##_in_selection(const widget *self, int x, int y);               \
    CFLTK_EXPORT void widget##_wrap_mode(widget *self, int wrap, int wrap_margin);          \
    CFLTK_EXPORT int widget##_wrapped_column(const widget *self, int row, int column);      \
    CFLTK_EXPORT int widget##_wrapped_row(const widget *self, int row);                     \
    CFLTK_EXPORT void widget##_set_grammar_underline_color(                                 \
        widget *self, unsigned int color                                       \
    );                                                                         \
    CFLTK_EXPORT unsigned int widget##_grammar_underline_color(const widget *self);         \
    CFLTK_EXPORT void widget##_set_spelling_underline_color(                                \
        widget *self, unsigned int color                                       \
    );                                                                         \
    CFLTK_EXPORT unsigned int widget##_spelling_underline_color(const widget *self);        \
    CFLTK_EXPORT void widget##_set_secondary_selection_color(                               \
        widget *self, unsigned int color                                       \
    );                                                                         \
    CFLTK_EXPORT unsigned int widget##_secondary_selection_color(const widget *self);       \
    CFLTK_EXPORT void widget##_show_insert_position(widget *self);                          \
    CFLTK_EXPORT void widget##_overstrike(widget *self, const char *text);

typedef void (*Fl_Text_Modify_Cb)(
    int pos,
    int nInserted,
    int nDeleted,
    int nRestyled,
    const char *deletedText,
    void *cbArg
);

typedef struct Fl_Text_Buffer Fl_Text_Buffer;

CFLTK_EXPORT Fl_Text_Buffer *Fl_Text_Buffer_new(void);

CFLTK_EXPORT void Fl_Text_Buffer_delete(Fl_Text_Buffer *);

CFLTK_EXPORT const char *Fl_Text_Buffer_text(Fl_Text_Buffer *self);

CFLTK_EXPORT void Fl_Text_Buffer_set_text(Fl_Text_Buffer *self, const char *txt);

CFLTK_EXPORT void Fl_Text_Buffer_append(Fl_Text_Buffer *self, const char *txt);

CFLTK_EXPORT void Fl_Text_Buffer_append_bytes(Fl_Text_Buffer *self, const char *txt, int len);

CFLTK_EXPORT void Fl_Text_Buffer_remove(Fl_Text_Buffer *self, int start, int end);

CFLTK_EXPORT int Fl_Text_Buffer_length(const Fl_Text_Buffer *self);

CFLTK_EXPORT char *Fl_Text_Buffer_text_range(const Fl_Text_Buffer *self, int start, int end);

CFLTK_EXPORT void Fl_Text_Buffer_insert(Fl_Text_Buffer *self, int pos, const char *text);

CFLTK_EXPORT void Fl_Text_Buffer_replace(
    Fl_Text_Buffer *self, int start, int end, const char *text
);

CFLTK_EXPORT void Fl_Text_Buffer_copy(
    Fl_Text_Buffer *self,
    Fl_Text_Buffer *fromBuf,
    int fromStart,
    int fromEnd,
    int toPos
);

CFLTK_EXPORT int Fl_Text_Buffer_undo(Fl_Text_Buffer *self, int *cp);

CFLTK_EXPORT void Fl_Text_Buffer_canUndo(Fl_Text_Buffer *self, char flag);

CFLTK_EXPORT int Fl_Text_Buffer_can_undo(const Fl_Text_Buffer *self);

CFLTK_EXPORT int Fl_Text_Buffer_load_file(Fl_Text_Buffer *self, const char *file);

CFLTK_EXPORT int Fl_Text_Buffer_save_file(Fl_Text_Buffer *self, const char *file);

CFLTK_EXPORT int Fl_Text_Buffer_tab_distance(const Fl_Text_Buffer *self);

CFLTK_EXPORT void Fl_Text_Buffer_set_tab_distance(Fl_Text_Buffer *self, int tabDist);

CFLTK_EXPORT void Fl_Text_Buffer_select(Fl_Text_Buffer *self, int start, int end);

CFLTK_EXPORT int Fl_Text_Buffer_selected(const Fl_Text_Buffer *self);

CFLTK_EXPORT void Fl_Text_Buffer_unselect(Fl_Text_Buffer *self);

CFLTK_EXPORT int Fl_Text_Buffer_selection_position(
    Fl_Text_Buffer *self, int *start, int *end
);

CFLTK_EXPORT char *Fl_Text_Buffer_selection_text(Fl_Text_Buffer *self);

CFLTK_EXPORT void Fl_Text_Buffer_remove_selection(Fl_Text_Buffer *self);

CFLTK_EXPORT void Fl_Text_Buffer_replace_selection(Fl_Text_Buffer *self, const char *text);

CFLTK_EXPORT void Fl_Text_Buffer_secondary_select(Fl_Text_Buffer *self, int start, int end);

CFLTK_EXPORT int Fl_Text_Buffer_secondary_selected(Fl_Text_Buffer *self);

CFLTK_EXPORT void Fl_Text_Buffer_secondary_unselect(Fl_Text_Buffer *self);

CFLTK_EXPORT int Fl_Text_Buffer_secondary_selection_position(
    Fl_Text_Buffer *self, int *start, int *end
);

CFLTK_EXPORT char *Fl_Text_Buffer_secondary_selection_text(Fl_Text_Buffer *self);

CFLTK_EXPORT void Fl_Text_Buffer_remove_secondary_selection(Fl_Text_Buffer *self);

CFLTK_EXPORT void Fl_Text_Buffer_replace_secondary_selection(
    Fl_Text_Buffer *self, const char *text
);

CFLTK_EXPORT void Fl_Text_Buffer_highlight(Fl_Text_Buffer *self, int start, int end);

CFLTK_EXPORT int Fl_Text_Buffer_is_highlighted(Fl_Text_Buffer *self);

CFLTK_EXPORT void Fl_Text_Buffer_unhighlight(Fl_Text_Buffer *self);

CFLTK_EXPORT int Fl_Text_Buffer_highlight_position(
    Fl_Text_Buffer *self, int *start, int *end
);

CFLTK_EXPORT char *Fl_Text_Buffer_highlight_text(Fl_Text_Buffer *self);

CFLTK_EXPORT char *Fl_Text_Buffer_line_text(const Fl_Text_Buffer *self, int pos);

CFLTK_EXPORT int Fl_Text_Buffer_line_start(const Fl_Text_Buffer *self, int pos);

CFLTK_EXPORT int Fl_Text_Buffer_word_start(const Fl_Text_Buffer *self, int pos);

CFLTK_EXPORT int Fl_Text_Buffer_word_end(const Fl_Text_Buffer *self, int pos);

CFLTK_EXPORT int Fl_Text_Buffer_count_lines(
    const Fl_Text_Buffer *self, int startPos, int endPos
);

CFLTK_EXPORT void Fl_Text_Buffer_add_modify_callback(
    Fl_Text_Buffer *self, Fl_Text_Modify_Cb bufModifiedCB, void *cbArg
);

CFLTK_EXPORT void Fl_Text_Buffer_remove_modify_callback(
    Fl_Text_Buffer *self, Fl_Text_Modify_Cb bufModifiedCB, void *cbArg
);

CFLTK_EXPORT void Fl_Text_Buffer_call_modify_callbacks(Fl_Text_Buffer *self);

CFLTK_EXPORT int Fl_Text_Buffer_search_forward(
    const Fl_Text_Buffer *self,
    int start_pos,
    const char *search_string,
    int *found_pos,
    int match_case
);

CFLTK_EXPORT int Fl_Text_Buffer_search_backward(
    const Fl_Text_Buffer *self,
    int start_pos,
    const char *search_string,
    int *found_pos,
    int match_case
);

CFLTK_EXPORT int Fl_Text_Buffer_findchar_forward(
    const Fl_Text_Buffer *self,
    int start_pos,
    unsigned int search_char,
    int *found_pos
);

CFLTK_EXPORT int Fl_Text_Buffer_findchar_backward(
    const Fl_Text_Buffer *self,
    int start_pos,
    unsigned int search_char,
    int *found_pos
);

CFLTK_EXPORT int Fl_Text_Buffer_redo(Fl_Text_Buffer *self, int *cp);

CFLTK_EXPORT int Fl_Text_Buffer_can_redo(const Fl_Text_Buffer *self);

WIDGET_DECLARE(Fl_Text_Display)

CFLTK_EXPORT void Fl_Text_Display_init(Fl_Text_Display *);

CFLTK_EXPORT Fl_Text_Buffer *Fl_Text_Display_get_buffer(Fl_Text_Display *);

CFLTK_EXPORT void Fl_Text_Display_set_buffer(Fl_Text_Display *, Fl_Text_Buffer *);

CFLTK_EXPORT Fl_Text_Buffer *Fl_Text_Display_get_style_buffer(Fl_Text_Display *);

DISPLAY_DECLARE(Fl_Text_Display)

WIDGET_DECLARE(Fl_Text_Editor)

CFLTK_EXPORT void Fl_Text_Editor_init(Fl_Text_Editor *);

CFLTK_EXPORT Fl_Text_Buffer *Fl_Text_Editor_get_buffer(Fl_Text_Editor *);

CFLTK_EXPORT void Fl_Text_Editor_set_buffer(Fl_Text_Editor *, Fl_Text_Buffer *);

CFLTK_EXPORT Fl_Text_Buffer *Fl_Text_Editor_get_style_buffer(Fl_Text_Editor *);

DISPLAY_DECLARE(Fl_Text_Editor)

CFLTK_EXPORT int Fl_Text_Editor_kf_copy(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_cut(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_paste(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_undo(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_redo(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_default(int c, Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_ignore(int c, Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_backspace(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_enter(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_move(int c, Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_shift_move(int c, Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_ctrl_move(int c, Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_c_s_move(int c, Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_meta_move(int c, Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_m_s_move(int c, Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_home(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_end(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_left(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_up(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_right(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_down(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_page_up(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_page_down(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_insert(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_delete(Fl_Text_Editor *e);

CFLTK_EXPORT int Fl_Text_Editor_kf_select_all(Fl_Text_Editor *e);

CFLTK_EXPORT void Fl_Text_Editor_set_insert_mode(Fl_Text_Editor *self, int b);

CFLTK_EXPORT int Fl_Text_Editor_insert_mode(Fl_Text_Editor *self);

CFLTK_EXPORT void Fl_Text_Editor_set_tab_nav(Fl_Text_Editor *self, int val);

CFLTK_EXPORT int Fl_Text_Editor_tab_nav(const Fl_Text_Editor *self);

CFLTK_EXPORT void Fl_Text_Editor_add_key_binding(
    Fl_Text_Editor *self, int key, int state, int (*kf)(int, Fl_Text_Editor *)
);

CFLTK_EXPORT void Fl_Text_Editor_remove_key_binding(
    Fl_Text_Editor *self, int key, int state
);

CFLTK_EXPORT void Fl_delete_stable(void *);

#ifdef __cplusplus
}
#endif
#endif
