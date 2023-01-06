#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_segment_identifier = 1,
  sym_whitespace = 2,
  sym_segment_terminator = 3,
  sym_data_separator = 4,
  sym_component_separator = 5,
  sym_repetition_separator = 6,
  sym__not_terminator = 7,
  sym_source_file = 8,
  sym_segment = 9,
  sym_data_element = 10,
  sym_data_component = 11,
  aux_sym_source_file_repeat1 = 12,
  aux_sym_segment_repeat1 = 13,
  aux_sym_data_element_repeat1 = 14,
  aux_sym_data_component_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_segment_identifier] = "segment_identifier",
  [sym_whitespace] = "whitespace",
  [sym_segment_terminator] = "segment_terminator",
  [sym_data_separator] = "data_separator",
  [sym_component_separator] = "component_separator",
  [sym_repetition_separator] = "repetition_separator",
  [sym__not_terminator] = "_not_terminator",
  [sym_source_file] = "source_file",
  [sym_segment] = "segment",
  [sym_data_element] = "data_element",
  [sym_data_component] = "data_component",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_segment_repeat1] = "segment_repeat1",
  [aux_sym_data_element_repeat1] = "data_element_repeat1",
  [aux_sym_data_component_repeat1] = "data_component_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_segment_identifier] = sym_segment_identifier,
  [sym_whitespace] = sym_whitespace,
  [sym_segment_terminator] = sym_segment_terminator,
  [sym_data_separator] = sym_data_separator,
  [sym_component_separator] = sym_component_separator,
  [sym_repetition_separator] = sym_repetition_separator,
  [sym__not_terminator] = sym__not_terminator,
  [sym_source_file] = sym_source_file,
  [sym_segment] = sym_segment,
  [sym_data_element] = sym_data_element,
  [sym_data_component] = sym_data_component,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_segment_repeat1] = aux_sym_segment_repeat1,
  [aux_sym_data_element_repeat1] = aux_sym_data_element_repeat1,
  [aux_sym_data_component_repeat1] = aux_sym_data_component_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_segment_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_segment_terminator] = {
    .visible = true,
    .named = true,
  },
  [sym_data_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_component_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_repetition_separator] = {
    .visible = true,
    .named = true,
  },
  [sym__not_terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_data_element] = {
    .visible = true,
    .named = true,
  },
  [sym_data_component] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_segment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_component_repeat1] = {
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1);
      END_STATE();
    case 1:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(4);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_segment_identifier);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_segment_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(3);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
};

enum {
  ts_external_token_segment_terminator = 0,
  ts_external_token_data_separator = 1,
  ts_external_token_component_separator = 2,
  ts_external_token_repetition_separator = 3,
  ts_external_token__not_terminator = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_segment_terminator] = sym_segment_terminator,
  [ts_external_token_data_separator] = sym_data_separator,
  [ts_external_token_component_separator] = sym_component_separator,
  [ts_external_token_repetition_separator] = sym_repetition_separator,
  [ts_external_token__not_terminator] = sym__not_terminator,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_segment_terminator] = true,
    [ts_external_token_data_separator] = true,
    [ts_external_token_component_separator] = true,
    [ts_external_token_repetition_separator] = true,
    [ts_external_token__not_terminator] = true,
  },
  [2] = {
    [ts_external_token_segment_terminator] = true,
    [ts_external_token_data_separator] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_segment_identifier] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(3),
    [sym_segment_terminator] = ACTIONS(1),
    [sym_data_separator] = ACTIONS(1),
    [sym_component_separator] = ACTIONS(1),
    [sym_repetition_separator] = ACTIONS(1),
    [sym__not_terminator] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym_segment] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_segment_identifier] = ACTIONS(5),
    [sym_whitespace] = ACTIONS(3),
  },
  [2] = {
    [sym_data_element] = STATE(15),
    [sym_data_component] = STATE(7),
    [aux_sym_data_element_repeat1] = STATE(3),
    [aux_sym_data_component_repeat1] = STATE(5),
    [sym_whitespace] = ACTIONS(3),
    [sym_segment_terminator] = ACTIONS(7),
    [sym_data_separator] = ACTIONS(7),
    [sym_component_separator] = ACTIONS(9),
    [sym_repetition_separator] = ACTIONS(9),
    [sym__not_terminator] = ACTIONS(11),
  },
  [3] = {
    [sym_data_component] = STATE(7),
    [aux_sym_data_element_repeat1] = STATE(4),
    [aux_sym_data_component_repeat1] = STATE(5),
    [sym_whitespace] = ACTIONS(3),
    [sym_segment_terminator] = ACTIONS(13),
    [sym_data_separator] = ACTIONS(13),
    [sym_component_separator] = ACTIONS(15),
    [sym_repetition_separator] = ACTIONS(15),
    [sym__not_terminator] = ACTIONS(11),
  },
  [4] = {
    [sym_data_component] = STATE(7),
    [aux_sym_data_element_repeat1] = STATE(4),
    [aux_sym_data_component_repeat1] = STATE(5),
    [sym_whitespace] = ACTIONS(3),
    [sym_segment_terminator] = ACTIONS(17),
    [sym_data_separator] = ACTIONS(17),
    [sym_component_separator] = ACTIONS(19),
    [sym_repetition_separator] = ACTIONS(19),
    [sym__not_terminator] = ACTIONS(22),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(27), 1,
      sym__not_terminator,
    STATE(6), 1,
      aux_sym_data_component_repeat1,
    ACTIONS(25), 4,
      sym_segment_terminator,
      sym_data_separator,
      sym_component_separator,
      sym_repetition_separator,
  [16] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(31), 1,
      sym__not_terminator,
    STATE(6), 1,
      aux_sym_data_component_repeat1,
    ACTIONS(29), 4,
      sym_segment_terminator,
      sym_data_separator,
      sym_component_separator,
      sym_repetition_separator,
  [32] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(36), 2,
      sym_component_separator,
      sym_repetition_separator,
    ACTIONS(34), 3,
      sym_segment_terminator,
      sym_data_separator,
      sym__not_terminator,
  [45] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(17), 5,
      sym_segment_terminator,
      sym_data_separator,
      sym_component_separator,
      sym_repetition_separator,
      sym__not_terminator,
  [56] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(5), 1,
      sym_segment_identifier,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym_segment,
      aux_sym_source_file_repeat1,
  [70] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym_segment_identifier,
    STATE(10), 2,
      sym_segment,
      aux_sym_source_file_repeat1,
  [84] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(46), 1,
      sym_segment_terminator,
    ACTIONS(48), 1,
      sym_data_separator,
    STATE(12), 1,
      aux_sym_segment_repeat1,
  [97] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(48), 1,
      sym_data_separator,
    ACTIONS(50), 1,
      sym_segment_terminator,
    STATE(13), 1,
      aux_sym_segment_repeat1,
  [110] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(52), 1,
      sym_segment_terminator,
    ACTIONS(54), 1,
      sym_data_separator,
    STATE(13), 1,
      aux_sym_segment_repeat1,
  [123] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_segment_identifier,
  [131] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(52), 2,
      sym_segment_terminator,
      sym_data_separator,
  [139] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_segment_identifier,
  [147] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 16,
  [SMALL_STATE(7)] = 32,
  [SMALL_STATE(8)] = 45,
  [SMALL_STATE(9)] = 56,
  [SMALL_STATE(10)] = 70,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 97,
  [SMALL_STATE(13)] = 110,
  [SMALL_STATE(14)] = 123,
  [SMALL_STATE(15)] = 131,
  [SMALL_STATE(16)] = 139,
  [SMALL_STATE(17)] = 147,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_segment_repeat1, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_element, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_element_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_element_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_element_repeat1, 2), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_component, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_component_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_component_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_element_repeat1, 1),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_element_repeat1, 1), SHIFT_REPEAT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_segment_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_segment_repeat1, 2), SHIFT_REPEAT(2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 3),
  [61] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_x12_external_scanner_create(void);
void tree_sitter_x12_external_scanner_destroy(void *);
bool tree_sitter_x12_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_x12_external_scanner_serialize(void *, char *);
void tree_sitter_x12_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_x12(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_x12_external_scanner_create,
      tree_sitter_x12_external_scanner_destroy,
      tree_sitter_x12_external_scanner_scan,
      tree_sitter_x12_external_scanner_serialize,
      tree_sitter_x12_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
