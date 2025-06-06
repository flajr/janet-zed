#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 23
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_number_literal = 1,
  anon_sym_DQUOTE = 2,
  aux_sym_str_literal_token1 = 3,
  aux_sym_str_literal_token2 = 4,
  anon_sym_AT_DQUOTE = 5,
  aux_sym_long_str_literal_token1 = 6,
  anon_sym_AT_BQUOTE = 7,
  aux_sym_buffer_literal_token1 = 8,
  anon_sym_BQUOTE = 9,
  anon_sym_AT_BQUOTE_BQUOTE_BQUOTE = 10,
  aux_sym_long_buffer_literal_token1 = 11,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 12,
  sym_keyword = 13,
  sym_symbol = 14,
  anon_sym_true = 15,
  anon_sym_false = 16,
  sym_nil_literal = 17,
  sym_line_comment = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_AT_LBRACE = 25,
  sym_source_file = 26,
  sym__value = 27,
  sym_str_literal = 28,
  sym_long_str_literal = 29,
  sym_buffer_literal = 30,
  sym_long_buffer_literal = 31,
  sym_bool_literal = 32,
  sym_tuple = 33,
  sym_array = 34,
  sym_table = 35,
  sym_struct = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_str_literal_repeat1 = 38,
  aux_sym_long_str_literal_repeat1 = 39,
  aux_sym_buffer_literal_repeat1 = 40,
  aux_sym_long_buffer_literal_repeat1 = 41,
  aux_sym_table_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number_literal] = "number_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_str_literal_token1] = "str_literal_token1",
  [aux_sym_str_literal_token2] = "str_literal_token2",
  [anon_sym_AT_DQUOTE] = "@\"",
  [aux_sym_long_str_literal_token1] = "long_str_literal_token1",
  [anon_sym_AT_BQUOTE] = "@`",
  [aux_sym_buffer_literal_token1] = "buffer_literal_token1",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = "@```",
  [aux_sym_long_buffer_literal_token1] = "long_buffer_literal_token1",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [sym_keyword] = "keyword",
  [sym_symbol] = "symbol",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_nil_literal] = "nil_literal",
  [sym_line_comment] = "line_comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT_LBRACE] = "@{",
  [sym_source_file] = "source_file",
  [sym__value] = "_value",
  [sym_str_literal] = "str_literal",
  [sym_long_str_literal] = "long_str_literal",
  [sym_buffer_literal] = "buffer_literal",
  [sym_long_buffer_literal] = "long_buffer_literal",
  [sym_bool_literal] = "bool_literal",
  [sym_tuple] = "tuple",
  [sym_array] = "array",
  [sym_table] = "table",
  [sym_struct] = "struct",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_str_literal_repeat1] = "str_literal_repeat1",
  [aux_sym_long_str_literal_repeat1] = "long_str_literal_repeat1",
  [aux_sym_buffer_literal_repeat1] = "buffer_literal_repeat1",
  [aux_sym_long_buffer_literal_repeat1] = "long_buffer_literal_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_str_literal_token1] = aux_sym_str_literal_token1,
  [aux_sym_str_literal_token2] = aux_sym_str_literal_token2,
  [anon_sym_AT_DQUOTE] = anon_sym_AT_DQUOTE,
  [aux_sym_long_str_literal_token1] = aux_sym_long_str_literal_token1,
  [anon_sym_AT_BQUOTE] = anon_sym_AT_BQUOTE,
  [aux_sym_buffer_literal_token1] = aux_sym_buffer_literal_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
  [aux_sym_long_buffer_literal_token1] = aux_sym_long_buffer_literal_token1,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [sym_keyword] = sym_keyword,
  [sym_symbol] = sym_symbol,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_nil_literal] = sym_nil_literal,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [sym_source_file] = sym_source_file,
  [sym__value] = sym__value,
  [sym_str_literal] = sym_str_literal,
  [sym_long_str_literal] = sym_long_str_literal,
  [sym_buffer_literal] = sym_buffer_literal,
  [sym_long_buffer_literal] = sym_long_buffer_literal,
  [sym_bool_literal] = sym_bool_literal,
  [sym_tuple] = sym_tuple,
  [sym_array] = sym_array,
  [sym_table] = sym_table,
  [sym_struct] = sym_struct,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_str_literal_repeat1] = aux_sym_str_literal_repeat1,
  [aux_sym_long_str_literal_repeat1] = aux_sym_long_str_literal_repeat1,
  [aux_sym_buffer_literal_repeat1] = aux_sym_buffer_literal_repeat1,
  [aux_sym_long_buffer_literal_repeat1] = aux_sym_long_buffer_literal_repeat1,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_str_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_long_str_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_buffer_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_long_buffer_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_nil_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_str_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_long_str_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_buffer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_long_buffer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_long_str_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_buffer_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_long_buffer_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 6,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 7,
  [15] = 15,
  [16] = 16,
  [17] = 8,
  [18] = 16,
  [19] = 19,
  [20] = 13,
  [21] = 19,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 26,
  [41] = 34,
  [42] = 29,
  [43] = 27,
  [44] = 30,
  [45] = 38,
  [46] = 37,
  [47] = 25,
  [48] = 48,
  [49] = 24,
  [50] = 36,
  [51] = 23,
  [52] = 35,
  [53] = 39,
  [54] = 28,
  [55] = 31,
  [56] = 32,
  [57] = 33,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 58,
  [66] = 59,
  [67] = 62,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 69,
  [74] = 68,
  [75] = 75,
  [76] = 71,
  [77] = 70,
  [78] = 78,
};

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '%'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c >= '-' && c <= '/')))
    : (c <= '?' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '%'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < '/'
        ? c == '-'
        : c <= '/')))
    : (c <= '?' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static inline bool sym_symbol_character_set_3(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '%'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < '/'
        ? c == '-'
        : c <= '9')))
    : (c <= '?' || (c < 'b'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static inline bool sym_symbol_character_set_4(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '%'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < '/'
        ? c == '-'
        : c <= '9')))
    : (c <= '?' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static inline bool sym_symbol_character_set_5(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '%'
        ? c == '!'
        : c <= '&')
      : (c <= '*' || c == '/'))
    : (c <= '?' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '@') ADVANCE(3);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(69);
      if (lookahead == '`') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '`') ADVANCE(37);
      if (lookahead == '{') ADVANCE(72);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '`') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '`') ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '`') ADVANCE(47);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == '`') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '`') ADVANCE(7);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(23);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 16:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(61);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(65);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_str_literal_token2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_AT_DQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_long_str_literal_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_long_str_literal_token1);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_long_str_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_AT_BQUOTE);
      if (lookahead == '`') ADVANCE(8);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_buffer_literal_token1);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\\' ||
          lookahead == '`') ADVANCE(65);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_buffer_literal_token1);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_buffer_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(6);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AT_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_long_buffer_literal_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_long_buffer_literal_token1);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_long_buffer_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(54);
      if (sym_symbol_character_set_3(lookahead)) ADVANCE(61);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(62);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(63);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(55);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(57);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(64);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(58);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(52);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(51);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (sym_symbol_character_set_5(lookahead)) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_nil_literal);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(61);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_str_literal_token2] = ACTIONS(1),
    [anon_sym_AT_DQUOTE] = ACTIONS(1),
    [anon_sym_AT_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_nil_literal] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(78),
    [sym__value] = STATE(12),
    [sym_str_literal] = STATE(12),
    [sym_long_str_literal] = STATE(12),
    [sym_buffer_literal] = STATE(12),
    [sym_long_buffer_literal] = STATE(12),
    [sym_bool_literal] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_array] = STATE(12),
    [sym_table] = STATE(12),
    [sym_struct] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_number_literal] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_AT_DQUOTE] = ACTIONS(11),
    [anon_sym_AT_BQUOTE] = ACTIONS(13),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(15),
    [sym_keyword] = ACTIONS(17),
    [sym_symbol] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_nil_literal] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACE] = ACTIONS(27),
  },
  [2] = {
    [sym__value] = STATE(2),
    [sym_str_literal] = STATE(2),
    [sym_long_str_literal] = STATE(2),
    [sym_buffer_literal] = STATE(2),
    [sym_long_buffer_literal] = STATE(2),
    [sym_bool_literal] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_array] = STATE(2),
    [sym_table] = STATE(2),
    [sym_struct] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_number_literal] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [anon_sym_AT_DQUOTE] = ACTIONS(35),
    [anon_sym_AT_BQUOTE] = ACTIONS(38),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(41),
    [sym_keyword] = ACTIONS(44),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_nil_literal] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_AT_LBRACE] = ACTIONS(61),
  },
  [3] = {
    [sym__value] = STATE(3),
    [sym_str_literal] = STATE(3),
    [sym_long_str_literal] = STATE(3),
    [sym_buffer_literal] = STATE(3),
    [sym_long_buffer_literal] = STATE(3),
    [sym_bool_literal] = STATE(3),
    [sym_tuple] = STATE(3),
    [sym_array] = STATE(3),
    [sym_table] = STATE(3),
    [sym_struct] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_number_literal] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_AT_DQUOTE] = ACTIONS(70),
    [anon_sym_AT_BQUOTE] = ACTIONS(73),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(76),
    [sym_keyword] = ACTIONS(79),
    [sym_symbol] = ACTIONS(64),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [sym_nil_literal] = ACTIONS(64),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_AT_LBRACE] = ACTIONS(94),
  },
  [4] = {
    [sym__value] = STATE(2),
    [sym_str_literal] = STATE(2),
    [sym_long_str_literal] = STATE(2),
    [sym_buffer_literal] = STATE(2),
    [sym_long_buffer_literal] = STATE(2),
    [sym_bool_literal] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_array] = STATE(2),
    [sym_table] = STATE(2),
    [sym_struct] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_number_literal] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(107),
    [sym_symbol] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [5] = {
    [sym__value] = STATE(2),
    [sym_str_literal] = STATE(2),
    [sym_long_str_literal] = STATE(2),
    [sym_buffer_literal] = STATE(2),
    [sym_long_buffer_literal] = STATE(2),
    [sym_bool_literal] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_array] = STATE(2),
    [sym_table] = STATE(2),
    [sym_struct] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_number_literal] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(107),
    [sym_symbol] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [6] = {
    [sym__value] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_long_str_literal] = STATE(22),
    [sym_buffer_literal] = STATE(22),
    [sym_long_buffer_literal] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_tuple] = STATE(22),
    [sym_array] = STATE(22),
    [sym_table] = STATE(22),
    [sym_struct] = STATE(22),
    [aux_sym_table_repeat1] = STATE(18),
    [sym_number_literal] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(125),
    [sym_symbol] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(123),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [7] = {
    [sym__value] = STATE(4),
    [sym_str_literal] = STATE(4),
    [sym_long_str_literal] = STATE(4),
    [sym_buffer_literal] = STATE(4),
    [sym_long_buffer_literal] = STATE(4),
    [sym_bool_literal] = STATE(4),
    [sym_tuple] = STATE(4),
    [sym_array] = STATE(4),
    [sym_table] = STATE(4),
    [sym_struct] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_number_literal] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(131),
    [sym_symbol] = ACTIONS(129),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(129),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [8] = {
    [sym__value] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_long_str_literal] = STATE(22),
    [sym_buffer_literal] = STATE(22),
    [sym_long_buffer_literal] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_tuple] = STATE(22),
    [sym_array] = STATE(22),
    [sym_table] = STATE(22),
    [sym_struct] = STATE(22),
    [aux_sym_table_repeat1] = STATE(15),
    [sym_number_literal] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(125),
    [sym_symbol] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(123),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [9] = {
    [sym__value] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_long_str_literal] = STATE(22),
    [sym_buffer_literal] = STATE(22),
    [sym_long_buffer_literal] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_tuple] = STATE(22),
    [sym_array] = STATE(22),
    [sym_table] = STATE(22),
    [sym_struct] = STATE(22),
    [aux_sym_table_repeat1] = STATE(17),
    [sym_number_literal] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(125),
    [sym_symbol] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(123),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [10] = {
    [sym__value] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_long_str_literal] = STATE(22),
    [sym_buffer_literal] = STATE(22),
    [sym_long_buffer_literal] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_tuple] = STATE(22),
    [sym_array] = STATE(22),
    [sym_table] = STATE(22),
    [sym_struct] = STATE(22),
    [aux_sym_table_repeat1] = STATE(16),
    [sym_number_literal] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(125),
    [sym_symbol] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(123),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [11] = {
    [sym__value] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_long_str_literal] = STATE(22),
    [sym_buffer_literal] = STATE(22),
    [sym_long_buffer_literal] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_tuple] = STATE(22),
    [sym_array] = STATE(22),
    [sym_table] = STATE(22),
    [sym_struct] = STATE(22),
    [aux_sym_table_repeat1] = STATE(8),
    [sym_number_literal] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(125),
    [sym_symbol] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(123),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [12] = {
    [sym__value] = STATE(3),
    [sym_str_literal] = STATE(3),
    [sym_long_str_literal] = STATE(3),
    [sym_buffer_literal] = STATE(3),
    [sym_long_buffer_literal] = STATE(3),
    [sym_bool_literal] = STATE(3),
    [sym_tuple] = STATE(3),
    [sym_array] = STATE(3),
    [sym_table] = STATE(3),
    [sym_struct] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_number_literal] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_AT_DQUOTE] = ACTIONS(11),
    [anon_sym_AT_BQUOTE] = ACTIONS(13),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(15),
    [sym_keyword] = ACTIONS(147),
    [sym_symbol] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_nil_literal] = ACTIONS(145),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACE] = ACTIONS(27),
  },
  [13] = {
    [sym__value] = STATE(21),
    [sym_str_literal] = STATE(21),
    [sym_long_str_literal] = STATE(21),
    [sym_buffer_literal] = STATE(21),
    [sym_long_buffer_literal] = STATE(21),
    [sym_bool_literal] = STATE(21),
    [sym_tuple] = STATE(21),
    [sym_array] = STATE(21),
    [sym_table] = STATE(21),
    [sym_struct] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(21),
    [sym_number_literal] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(151),
    [sym_symbol] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [14] = {
    [sym__value] = STATE(5),
    [sym_str_literal] = STATE(5),
    [sym_long_str_literal] = STATE(5),
    [sym_buffer_literal] = STATE(5),
    [sym_long_buffer_literal] = STATE(5),
    [sym_bool_literal] = STATE(5),
    [sym_tuple] = STATE(5),
    [sym_array] = STATE(5),
    [sym_table] = STATE(5),
    [sym_struct] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_number_literal] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(157),
    [sym_symbol] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [15] = {
    [sym__value] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_long_str_literal] = STATE(22),
    [sym_buffer_literal] = STATE(22),
    [sym_long_buffer_literal] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_tuple] = STATE(22),
    [sym_array] = STATE(22),
    [sym_table] = STATE(22),
    [sym_struct] = STATE(22),
    [aux_sym_table_repeat1] = STATE(15),
    [sym_number_literal] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_AT_DQUOTE] = ACTIONS(167),
    [anon_sym_AT_BQUOTE] = ACTIONS(170),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(173),
    [sym_keyword] = ACTIONS(176),
    [sym_symbol] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(179),
    [sym_nil_literal] = ACTIONS(161),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_AT_LBRACE] = ACTIONS(193),
  },
  [16] = {
    [sym__value] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_long_str_literal] = STATE(22),
    [sym_buffer_literal] = STATE(22),
    [sym_long_buffer_literal] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_tuple] = STATE(22),
    [sym_array] = STATE(22),
    [sym_table] = STATE(22),
    [sym_struct] = STATE(22),
    [aux_sym_table_repeat1] = STATE(15),
    [sym_number_literal] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(125),
    [sym_symbol] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(123),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(196),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [17] = {
    [sym__value] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_long_str_literal] = STATE(22),
    [sym_buffer_literal] = STATE(22),
    [sym_long_buffer_literal] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_tuple] = STATE(22),
    [sym_array] = STATE(22),
    [sym_table] = STATE(22),
    [sym_struct] = STATE(22),
    [aux_sym_table_repeat1] = STATE(15),
    [sym_number_literal] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(125),
    [sym_symbol] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(123),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(198),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [18] = {
    [sym__value] = STATE(22),
    [sym_str_literal] = STATE(22),
    [sym_long_str_literal] = STATE(22),
    [sym_buffer_literal] = STATE(22),
    [sym_long_buffer_literal] = STATE(22),
    [sym_bool_literal] = STATE(22),
    [sym_tuple] = STATE(22),
    [sym_array] = STATE(22),
    [sym_table] = STATE(22),
    [sym_struct] = STATE(22),
    [aux_sym_table_repeat1] = STATE(15),
    [sym_number_literal] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(125),
    [sym_symbol] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(123),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(200),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [19] = {
    [sym__value] = STATE(2),
    [sym_str_literal] = STATE(2),
    [sym_long_str_literal] = STATE(2),
    [sym_buffer_literal] = STATE(2),
    [sym_long_buffer_literal] = STATE(2),
    [sym_bool_literal] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_array] = STATE(2),
    [sym_table] = STATE(2),
    [sym_struct] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_number_literal] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(107),
    [sym_symbol] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [20] = {
    [sym__value] = STATE(19),
    [sym_str_literal] = STATE(19),
    [sym_long_str_literal] = STATE(19),
    [sym_buffer_literal] = STATE(19),
    [sym_long_buffer_literal] = STATE(19),
    [sym_bool_literal] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_array] = STATE(19),
    [sym_table] = STATE(19),
    [sym_struct] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [sym_number_literal] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(206),
    [sym_symbol] = ACTIONS(204),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(204),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [21] = {
    [sym__value] = STATE(2),
    [sym_str_literal] = STATE(2),
    [sym_long_str_literal] = STATE(2),
    [sym_buffer_literal] = STATE(2),
    [sym_long_buffer_literal] = STATE(2),
    [sym_bool_literal] = STATE(2),
    [sym_tuple] = STATE(2),
    [sym_array] = STATE(2),
    [sym_table] = STATE(2),
    [sym_struct] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_number_literal] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(107),
    [sym_symbol] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(210),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
  [22] = {
    [sym__value] = STATE(48),
    [sym_str_literal] = STATE(48),
    [sym_long_str_literal] = STATE(48),
    [sym_buffer_literal] = STATE(48),
    [sym_long_buffer_literal] = STATE(48),
    [sym_bool_literal] = STATE(48),
    [sym_tuple] = STATE(48),
    [sym_array] = STATE(48),
    [sym_table] = STATE(48),
    [sym_struct] = STATE(48),
    [sym_number_literal] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_AT_DQUOTE] = ACTIONS(101),
    [anon_sym_AT_BQUOTE] = ACTIONS(103),
    [anon_sym_AT_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(105),
    [sym_keyword] = ACTIONS(214),
    [sym_symbol] = ACTIONS(212),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_nil_literal] = ACTIONS(212),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_AT_LBRACE] = ACTIONS(119),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(216), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(218), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [25] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(220), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(222), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [50] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(226), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [75] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(230), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [100] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(234), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [125] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(236), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(238), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [150] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(242), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [175] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(246), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [200] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(250), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [225] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(254), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [250] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(258), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [275] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(262), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [300] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(266), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [325] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(268), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(270), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [350] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(274), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [375] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(276), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(278), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [400] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(282), 11,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [425] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(230), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [448] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(262), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [471] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(242), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [494] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(234), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [517] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(246), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [540] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(276), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(278), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [563] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(274), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [586] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(226), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [609] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(284), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(191), 9,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT_LBRACE,
  [632] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(220), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(222), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [655] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(268), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(270), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [678] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(216), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(218), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [701] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(266), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [724] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(282), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [747] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(236), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(238), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [770] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(250), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [793] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(254), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [816] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 6,
      sym_number_literal,
      anon_sym_AT_BQUOTE,
      sym_symbol,
      anon_sym_true,
      anon_sym_false,
      sym_nil_literal,
    ACTIONS(258), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_AT_DQUOTE,
      anon_sym_AT_BQUOTE_BQUOTE_BQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACE,
  [839] = 4,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      sym_line_comment,
    STATE(63), 1,
      aux_sym_str_literal_repeat1,
    ACTIONS(288), 2,
      aux_sym_str_literal_token1,
      aux_sym_str_literal_token2,
  [853] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_BQUOTE,
    STATE(64), 1,
      aux_sym_buffer_literal_repeat1,
    ACTIONS(292), 2,
      aux_sym_str_literal_token2,
      aux_sym_buffer_literal_token1,
  [867] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      aux_sym_str_literal_repeat1,
    ACTIONS(298), 2,
      aux_sym_str_literal_token1,
      aux_sym_str_literal_token2,
  [881] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      aux_sym_str_literal_repeat1,
    ACTIONS(302), 2,
      aux_sym_str_literal_token1,
      aux_sym_str_literal_token2,
  [895] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(306), 1,
      anon_sym_BQUOTE,
    STATE(66), 1,
      aux_sym_buffer_literal_repeat1,
    ACTIONS(304), 2,
      aux_sym_str_literal_token2,
      aux_sym_buffer_literal_token1,
  [909] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_str_literal_repeat1,
    ACTIONS(310), 2,
      aux_sym_str_literal_token1,
      aux_sym_str_literal_token2,
  [923] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_BQUOTE,
    STATE(64), 1,
      aux_sym_buffer_literal_repeat1,
    ACTIONS(313), 2,
      aux_sym_str_literal_token2,
      aux_sym_buffer_literal_token1,
  [937] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_str_literal_repeat1,
    ACTIONS(288), 2,
      aux_sym_str_literal_token1,
      aux_sym_str_literal_token2,
  [951] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(320), 1,
      anon_sym_BQUOTE,
    STATE(64), 1,
      aux_sym_buffer_literal_repeat1,
    ACTIONS(292), 2,
      aux_sym_str_literal_token2,
      aux_sym_buffer_literal_token1,
  [965] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(324), 1,
      anon_sym_BQUOTE,
    STATE(59), 1,
      aux_sym_buffer_literal_repeat1,
    ACTIONS(322), 2,
      aux_sym_str_literal_token2,
      aux_sym_buffer_literal_token1,
  [979] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(326), 1,
      aux_sym_long_buffer_literal_token1,
    ACTIONS(328), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(75), 1,
      aux_sym_long_buffer_literal_repeat1,
  [992] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      anon_sym_DQUOTE,
    ACTIONS(332), 1,
      aux_sym_long_str_literal_token1,
    STATE(72), 1,
      aux_sym_long_str_literal_repeat1,
  [1005] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    ACTIONS(336), 1,
      aux_sym_long_str_literal_token1,
    STATE(73), 1,
      aux_sym_long_str_literal_repeat1,
  [1018] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      aux_sym_long_buffer_literal_token1,
    ACTIONS(340), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(74), 1,
      aux_sym_long_buffer_literal_repeat1,
  [1031] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_long_str_literal_token1,
    STATE(72), 1,
      aux_sym_long_str_literal_repeat1,
  [1044] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      aux_sym_long_str_literal_token1,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym_long_str_literal_repeat1,
  [1057] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(326), 1,
      aux_sym_long_buffer_literal_token1,
    ACTIONS(349), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(75), 1,
      aux_sym_long_buffer_literal_repeat1,
  [1070] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(351), 1,
      aux_sym_long_buffer_literal_token1,
    ACTIONS(354), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(75), 1,
      aux_sym_long_buffer_literal_repeat1,
  [1083] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      aux_sym_long_buffer_literal_token1,
    ACTIONS(358), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(68), 1,
      aux_sym_long_buffer_literal_repeat1,
  [1096] = 4,
    ACTIONS(290), 1,
      sym_line_comment,
    ACTIONS(360), 1,
      anon_sym_DQUOTE,
    ACTIONS(362), 1,
      aux_sym_long_str_literal_token1,
    STATE(69), 1,
      aux_sym_long_str_literal_repeat1,
  [1109] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(23)] = 0,
  [SMALL_STATE(24)] = 25,
  [SMALL_STATE(25)] = 50,
  [SMALL_STATE(26)] = 75,
  [SMALL_STATE(27)] = 100,
  [SMALL_STATE(28)] = 125,
  [SMALL_STATE(29)] = 150,
  [SMALL_STATE(30)] = 175,
  [SMALL_STATE(31)] = 200,
  [SMALL_STATE(32)] = 225,
  [SMALL_STATE(33)] = 250,
  [SMALL_STATE(34)] = 275,
  [SMALL_STATE(35)] = 300,
  [SMALL_STATE(36)] = 325,
  [SMALL_STATE(37)] = 350,
  [SMALL_STATE(38)] = 375,
  [SMALL_STATE(39)] = 400,
  [SMALL_STATE(40)] = 425,
  [SMALL_STATE(41)] = 448,
  [SMALL_STATE(42)] = 471,
  [SMALL_STATE(43)] = 494,
  [SMALL_STATE(44)] = 517,
  [SMALL_STATE(45)] = 540,
  [SMALL_STATE(46)] = 563,
  [SMALL_STATE(47)] = 586,
  [SMALL_STATE(48)] = 609,
  [SMALL_STATE(49)] = 632,
  [SMALL_STATE(50)] = 655,
  [SMALL_STATE(51)] = 678,
  [SMALL_STATE(52)] = 701,
  [SMALL_STATE(53)] = 724,
  [SMALL_STATE(54)] = 747,
  [SMALL_STATE(55)] = 770,
  [SMALL_STATE(56)] = 793,
  [SMALL_STATE(57)] = 816,
  [SMALL_STATE(58)] = 839,
  [SMALL_STATE(59)] = 853,
  [SMALL_STATE(60)] = 867,
  [SMALL_STATE(61)] = 881,
  [SMALL_STATE(62)] = 895,
  [SMALL_STATE(63)] = 909,
  [SMALL_STATE(64)] = 923,
  [SMALL_STATE(65)] = 937,
  [SMALL_STATE(66)] = 951,
  [SMALL_STATE(67)] = 965,
  [SMALL_STATE(68)] = 979,
  [SMALL_STATE(69)] = 992,
  [SMALL_STATE(70)] = 1005,
  [SMALL_STATE(71)] = 1018,
  [SMALL_STATE(72)] = 1031,
  [SMALL_STATE(73)] = 1044,
  [SMALL_STATE(74)] = 1057,
  [SMALL_STATE(75)] = 1070,
  [SMALL_STATE(76)] = 1083,
  [SMALL_STATE(77)] = 1096,
  [SMALL_STATE(78)] = 1109,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(22),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(61),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(70),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(62),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(71),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(22),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(38),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(14),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(13),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(11),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(6),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_long_str_literal, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_str_literal, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_literal, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_literal, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_long_buffer_literal, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_buffer_literal, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_long_buffer_literal, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_buffer_literal, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_literal, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_literal, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_long_str_literal, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_str_literal, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_literal, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_literal, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_literal, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_literal, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_str_literal_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_str_literal_repeat1, 2), SHIFT_REPEAT(63),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_buffer_literal_repeat1, 2), SHIFT_REPEAT(64),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_buffer_literal_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_long_str_literal_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_long_str_literal_repeat1, 2), SHIFT_REPEAT(72),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_long_buffer_literal_repeat1, 2), SHIFT_REPEAT(75),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_long_buffer_literal_repeat1, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [364] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_janet(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
