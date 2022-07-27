#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_delimiter = 1,
  anon_sym_COLON = 2,
  sym_header_name = 3,
  sym_header_value = 4,
  sym__whitespace = 5,
  sym__newline = 6,
  sym__data = 7,
  sym_source_file = 8,
  sym_delimiter_line = 9,
  sym_header = 10,
  sym_body = 11,
  aux_sym_source_file_repeat1 = 12,
  aux_sym_source_file_repeat2 = 13,
  aux_sym_body_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_delimiter] = "delimiter",
  [anon_sym_COLON] = ":",
  [sym_header_name] = "header_name",
  [sym_header_value] = "header_value",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym__data] = "_data",
  [sym_source_file] = "source_file",
  [sym_delimiter_line] = "delimiter_line",
  [sym_header] = "header",
  [sym_body] = "body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_body_repeat1] = "body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_delimiter] = sym_delimiter,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_header_name] = sym_header_name,
  [sym_header_value] = sym_header_value,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym__data] = sym__data,
  [sym_source_file] = sym_source_file,
  [sym_delimiter_line] = sym_delimiter_line,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_header_name] = {
    .visible = true,
    .named = true,
  },
  [sym_header_value] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__data] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter_line] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 4:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_delimiter);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_header_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__data);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__data);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__data);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__data);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_header_name] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_delimiter_line] = STATE(5),
    [aux_sym_source_file_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_delimiter] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      sym_header_name,
    ACTIONS(11), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [14] = 4,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(15), 1,
      sym__data,
    STATE(9), 1,
      aux_sym_body_repeat1,
    STATE(20), 1,
      sym_body,
  [27] = 4,
    ACTIONS(17), 1,
      sym_delimiter,
    ACTIONS(19), 1,
      sym__newline,
    ACTIONS(22), 1,
      sym__data,
    STATE(4), 1,
      aux_sym_body_repeat1,
  [40] = 3,
    ACTIONS(9), 1,
      sym_header_name,
    ACTIONS(11), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [51] = 3,
    ACTIONS(25), 1,
      sym_header_name,
    ACTIONS(28), 1,
      sym__newline,
    STATE(6), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [62] = 4,
    ACTIONS(13), 1,
      sym__newline,
    ACTIONS(15), 1,
      sym__data,
    STATE(9), 1,
      aux_sym_body_repeat1,
    STATE(16), 1,
      sym_body,
  [75] = 3,
    ACTIONS(9), 1,
      sym_header_name,
    ACTIONS(30), 1,
      sym__newline,
    STATE(6), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [86] = 4,
    ACTIONS(32), 1,
      sym_delimiter,
    ACTIONS(34), 1,
      sym__newline,
    ACTIONS(36), 1,
      sym__data,
    STATE(4), 1,
      aux_sym_body_repeat1,
  [99] = 1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      sym_header_name,
      sym__newline,
  [105] = 3,
    ACTIONS(40), 1,
      sym_delimiter,
    STATE(2), 1,
      sym_delimiter_line,
    STATE(12), 1,
      aux_sym_source_file_repeat2,
  [115] = 3,
    ACTIONS(42), 1,
      sym_delimiter,
    STATE(5), 1,
      sym_delimiter_line,
    STATE(12), 1,
      aux_sym_source_file_repeat2,
  [125] = 1,
    ACTIONS(38), 2,
      sym_header_name,
      sym__newline,
  [130] = 1,
    ACTIONS(45), 2,
      sym_header_name,
      sym__newline,
  [135] = 1,
    ACTIONS(47), 1,
      sym__whitespace,
  [139] = 1,
    ACTIONS(49), 1,
      sym_delimiter,
  [143] = 1,
    ACTIONS(51), 1,
      sym__newline,
  [147] = 1,
    ACTIONS(53), 1,
      sym_header_value,
  [151] = 1,
    ACTIONS(55), 1,
      anon_sym_COLON,
  [155] = 1,
    ACTIONS(57), 1,
      sym_delimiter,
  [159] = 1,
    ACTIONS(59), 1,
      sym__newline,
  [163] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
  [167] = 1,
    ACTIONS(63), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 27,
  [SMALL_STATE(5)] = 40,
  [SMALL_STATE(6)] = 51,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 75,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 99,
  [SMALL_STATE(11)] = 105,
  [SMALL_STATE(12)] = 115,
  [SMALL_STATE(13)] = 125,
  [SMALL_STATE(14)] = 130,
  [SMALL_STATE(15)] = 135,
  [SMALL_STATE(16)] = 139,
  [SMALL_STATE(17)] = 143,
  [SMALL_STATE(18)] = 147,
  [SMALL_STATE(19)] = 151,
  [SMALL_STATE(20)] = 155,
  [SMALL_STATE(21)] = 159,
  [SMALL_STATE(22)] = 163,
  [SMALL_STATE(23)] = 167,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter_line, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_multipart(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
