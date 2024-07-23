// everblush.h

static const char col_bg[]          = "#141B1E"; // background color
static const char col_border[]      = "#3E4C55"; // inactive window border color
static const char col_fg[]          = "#DFDFDF"; // font color
static const char col_sel[]         = "#A3BE8C"; // selected window border color
static const char col_sel_bg[]      = "#323B3E"; // selected window background color
static const char col_title[]       = "#BF616A"; // title color


static const char *colors[][3]      = {
    /*                     fg       bg      border */
    [SchemeNorm] = { col_fg,       col_bg,    col_border },
    [SchemeSel]  = { col_fg,       col_sel_bg, col_sel  },
    [SchemeTitle] = { col_fg,   col_bg,    col_border },
};


