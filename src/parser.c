#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_boundary_delimiter = 1,
  anon_sym_COLON = 2,
  sym_header_name = 3,
  sym_header_value = 4,
  sym__whitespace = 5,
  sym__newline = 6,
  sym__data = 7,
  sym_source_file = 8,
  sym_header = 9,
  sym_body = 10,
  aux_sym_source_file_repeat1 = 11,
  aux_sym_source_file_repeat2 = 12,
  aux_sym_body_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_boundary_delimiter] = "boundary_delimiter",
  [anon_sym_COLON] = ":",
  [sym_header_name] = "header_name",
  [sym_header_value] = "header_value",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym__data] = "_data",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_body] = "body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_body_repeat1] = "body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_boundary_delimiter] = sym_boundary_delimiter,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_header_name] = sym_header_name,
  [sym_header_value] = sym_header_value,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym__data] = sym__data,
  [sym_source_file] = sym_source_file,
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
  [sym_boundary_delimiter] = {
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 3:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 4:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(14);
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
      ACCEPT_TOKEN(sym_boundary_delimiter);
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
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
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
    [sym_source_file] = STATE(16),
    [aux_sym_source_file_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_boundary_delimiter] = ACTIONS(5),
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
    STATE(3), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [14] = 3,
    ACTIONS(9), 1,
      sym_header_name,
    ACTIONS(13), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [25] = 3,
    ACTIONS(9), 1,
      sym_header_name,
    ACTIONS(11), 1,
      sym__newline,
    STATE(3), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [36] = 4,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      sym__data,
    STATE(6), 1,
      aux_sym_body_repeat1,
    STATE(19), 1,
      sym_body,
  [49] = 4,
    ACTIONS(19), 1,
      sym_boundary_delimiter,
    ACTIONS(21), 1,
      sym__newline,
    ACTIONS(23), 1,
      sym__data,
    STATE(9), 1,
      aux_sym_body_repeat1,
  [62] = 4,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      sym__data,
    STATE(6), 1,
      aux_sym_body_repeat1,
    STATE(21), 1,
      sym_body,
  [75] = 3,
    ACTIONS(25), 1,
      sym_header_name,
    ACTIONS(28), 1,
      sym__newline,
    STATE(8), 2,
      sym_header,
      aux_sym_source_file_repeat1,
  [86] = 4,
    ACTIONS(30), 1,
      sym_boundary_delimiter,
    ACTIONS(32), 1,
      sym__newline,
    ACTIONS(35), 1,
      sym__data,
    STATE(9), 1,
      aux_sym_body_repeat1,
  [99] = 3,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      sym__newline,
    ACTIONS(42), 1,
      sym__data,
  [109] = 2,
    ACTIONS(44), 1,
      sym_boundary_delimiter,
    STATE(12), 1,
      aux_sym_source_file_repeat2,
  [116] = 2,
    ACTIONS(46), 1,
      sym_boundary_delimiter,
    STATE(12), 1,
      aux_sym_source_file_repeat2,
  [123] = 1,
    ACTIONS(49), 2,
      sym_header_name,
      sym__newline,
  [128] = 1,
    ACTIONS(51), 1,
      anon_sym_COLON,
  [132] = 1,
    ACTIONS(53), 1,
      sym__newline,
  [136] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
  [140] = 1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
  [144] = 1,
    ACTIONS(57), 1,
      sym__whitespace,
  [148] = 1,
    ACTIONS(59), 1,
      sym_boundary_delimiter,
  [152] = 1,
    ACTIONS(61), 1,
      sym_header_value,
  [156] = 1,
    ACTIONS(63), 1,
      sym_boundary_delimiter,
  [160] = 1,
    ACTIONS(65), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 25,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 49,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 75,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 99,
  [SMALL_STATE(11)] = 109,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 123,
  [SMALL_STATE(14)] = 128,
  [SMALL_STATE(15)] = 132,
  [SMALL_STATE(16)] = 136,
  [SMALL_STATE(17)] = 140,
  [SMALL_STATE(18)] = 144,
  [SMALL_STATE(19)] = 148,
  [SMALL_STATE(20)] = 152,
  [SMALL_STATE(21)] = 156,
  [SMALL_STATE(22)] = 160,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(15),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
