#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ISA = 1,
  anon_sym_IEA = 2,
  sym_segment_identifier = 3,
  sym_whitespace = 4,
  sym_segment_terminator = 5,
  sym_data_separator = 6,
  sym_component_separator = 7,
  sym_repetition_separator = 8,
  sym__not_terminator = 9,
  sym_source_file = 10,
  sym_transaction = 11,
  sym_isa_segment = 12,
  sym_iea_segment = 13,
  sym_segment = 14,
  sym_data_element = 15,
  sym_data_component = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_transaction_repeat1 = 18,
  aux_sym_isa_segment_repeat1 = 19,
  aux_sym_data_element_repeat1 = 20,
  aux_sym_data_component_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ISA] = "segment_identifier",
  [anon_sym_IEA] = "segment_identifier",
  [sym_segment_identifier] = "segment_identifier",
  [sym_whitespace] = "whitespace",
  [sym_segment_terminator] = "segment_terminator",
  [sym_data_separator] = "data_separator",
  [sym_component_separator] = "component_separator",
  [sym_repetition_separator] = "repetition_separator",
  [sym__not_terminator] = "_not_terminator",
  [sym_source_file] = "source_file",
  [sym_transaction] = "transaction",
  [sym_isa_segment] = "isa_segment",
  [sym_iea_segment] = "iea_segment",
  [sym_segment] = "segment",
  [sym_data_element] = "data_element",
  [sym_data_component] = "data_component",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
  [aux_sym_isa_segment_repeat1] = "isa_segment_repeat1",
  [aux_sym_data_element_repeat1] = "data_element_repeat1",
  [aux_sym_data_component_repeat1] = "data_component_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ISA] = sym_segment_identifier,
  [anon_sym_IEA] = sym_segment_identifier,
  [sym_segment_identifier] = sym_segment_identifier,
  [sym_whitespace] = sym_whitespace,
  [sym_segment_terminator] = sym_segment_terminator,
  [sym_data_separator] = sym_data_separator,
  [sym_component_separator] = sym_component_separator,
  [sym_repetition_separator] = sym_repetition_separator,
  [sym__not_terminator] = sym__not_terminator,
  [sym_source_file] = sym_source_file,
  [sym_transaction] = sym_transaction,
  [sym_isa_segment] = sym_isa_segment,
  [sym_iea_segment] = sym_iea_segment,
  [sym_segment] = sym_segment,
  [sym_data_element] = sym_data_element,
  [sym_data_component] = sym_data_component,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_transaction_repeat1] = aux_sym_transaction_repeat1,
  [aux_sym_isa_segment_repeat1] = aux_sym_isa_segment_repeat1,
  [aux_sym_data_element_repeat1] = aux_sym_data_element_repeat1,
  [aux_sym_data_component_repeat1] = aux_sym_data_component_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ISA] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_IEA] = {
    .visible = true,
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
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_isa_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_iea_segment] = {
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
  [aux_sym_transaction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_isa_segment_repeat1] = {
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == 'I') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'E') ADVANCE(13);
      if (lookahead == 'S') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'I') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'S') ADVANCE(1);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == 'I') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_ISA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_IEA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_segment_identifier);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_segment_identifier);
      if (lookahead == 'A') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_segment_identifier);
      if (lookahead == 'A') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_segment_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 6},
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
    [anon_sym_ISA] = ACTIONS(1),
    [anon_sym_IEA] = ACTIONS(1),
    [sym_segment_identifier] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(3),
    [sym_segment_terminator] = ACTIONS(1),
    [sym_data_separator] = ACTIONS(1),
    [sym_component_separator] = ACTIONS(1),
    [sym_repetition_separator] = ACTIONS(1),
    [sym__not_terminator] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym_transaction] = STATE(8),
    [sym_isa_segment] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(8),
    [anon_sym_ISA] = ACTIONS(5),
    [sym_whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(11), 1,
      sym__not_terminator,
    STATE(3), 1,
      aux_sym_data_element_repeat1,
    STATE(6), 1,
      aux_sym_data_component_repeat1,
    STATE(7), 1,
      sym_data_component,
    STATE(21), 1,
      sym_data_element,
    ACTIONS(7), 2,
      sym_segment_terminator,
      sym_data_separator,
    ACTIONS(9), 2,
      sym_component_separator,
      sym_repetition_separator,
  [27] = 7,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(11), 1,
      sym__not_terminator,
    STATE(4), 1,
      aux_sym_data_element_repeat1,
    STATE(6), 1,
      aux_sym_data_component_repeat1,
    STATE(7), 1,
      sym_data_component,
    ACTIONS(13), 2,
      sym_segment_terminator,
      sym_data_separator,
    ACTIONS(15), 2,
      sym_component_separator,
      sym_repetition_separator,
  [51] = 7,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(22), 1,
      sym__not_terminator,
    STATE(4), 1,
      aux_sym_data_element_repeat1,
    STATE(6), 1,
      aux_sym_data_component_repeat1,
    STATE(7), 1,
      sym_data_component,
    ACTIONS(17), 2,
      sym_segment_terminator,
      sym_data_separator,
    ACTIONS(19), 2,
      sym_component_separator,
      sym_repetition_separator,
  [75] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(27), 1,
      sym__not_terminator,
    STATE(5), 1,
      aux_sym_data_component_repeat1,
    ACTIONS(25), 4,
      sym_segment_terminator,
      sym_data_separator,
      sym_component_separator,
      sym_repetition_separator,
  [91] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(32), 1,
      sym__not_terminator,
    STATE(5), 1,
      aux_sym_data_component_repeat1,
    ACTIONS(30), 4,
      sym_segment_terminator,
      sym_data_separator,
      sym_component_separator,
      sym_repetition_separator,
  [107] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(36), 2,
      sym_component_separator,
      sym_repetition_separator,
    ACTIONS(34), 3,
      sym_segment_terminator,
      sym_data_separator,
      sym__not_terminator,
  [120] = 5,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(5), 1,
      anon_sym_ISA,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_isa_segment,
    STATE(11), 2,
      sym_transaction,
      aux_sym_source_file_repeat1,
  [137] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(17), 5,
      sym_segment_terminator,
      sym_data_separator,
      sym_component_separator,
      sym_repetition_separator,
      sym__not_terminator,
  [148] = 5,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(41), 1,
      anon_sym_IEA,
    ACTIONS(43), 1,
      sym_segment_identifier,
    STATE(23), 1,
      sym_iea_segment,
    STATE(12), 2,
      sym_segment,
      aux_sym_transaction_repeat1,
  [165] = 5,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_ISA,
    STATE(14), 1,
      sym_isa_segment,
    STATE(11), 2,
      sym_transaction,
      aux_sym_source_file_repeat1,
  [182] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(50), 1,
      anon_sym_IEA,
    ACTIONS(52), 1,
      sym_segment_identifier,
    STATE(12), 2,
      sym_segment,
      aux_sym_transaction_repeat1,
  [196] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(55), 1,
      sym_segment_terminator,
    ACTIONS(57), 1,
      sym_data_separator,
    STATE(19), 1,
      aux_sym_isa_segment_repeat1,
  [209] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(59), 1,
      sym_segment_identifier,
    STATE(10), 2,
      sym_segment,
      aux_sym_transaction_repeat1,
  [220] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(61), 1,
      sym_segment_terminator,
    ACTIONS(63), 1,
      sym_data_separator,
    STATE(15), 1,
      aux_sym_isa_segment_repeat1,
  [233] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(57), 1,
      sym_data_separator,
    ACTIONS(66), 1,
      sym_segment_terminator,
    STATE(15), 1,
      aux_sym_isa_segment_repeat1,
  [246] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(57), 1,
      sym_data_separator,
    ACTIONS(68), 1,
      sym_segment_terminator,
    STATE(20), 1,
      aux_sym_isa_segment_repeat1,
  [259] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(57), 1,
      sym_data_separator,
    ACTIONS(70), 1,
      sym_segment_terminator,
    STATE(16), 1,
      aux_sym_isa_segment_repeat1,
  [272] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(57), 1,
      sym_data_separator,
    ACTIONS(72), 1,
      sym_segment_terminator,
    STATE(15), 1,
      aux_sym_isa_segment_repeat1,
  [285] = 4,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(57), 1,
      sym_data_separator,
    ACTIONS(74), 1,
      sym_segment_terminator,
    STATE(15), 1,
      aux_sym_isa_segment_repeat1,
  [298] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(61), 2,
      sym_segment_terminator,
      sym_data_separator,
  [306] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(76), 1,
      anon_sym_IEA,
    ACTIONS(78), 1,
      sym_segment_identifier,
  [316] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_ISA,
  [324] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(82), 1,
      anon_sym_IEA,
    ACTIONS(84), 1,
      sym_segment_identifier,
  [334] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_ISA,
  [342] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_ISA,
  [350] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(90), 1,
      sym_segment_identifier,
  [357] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
  [364] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(94), 1,
      sym_segment_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 91,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 148,
  [SMALL_STATE(11)] = 165,
  [SMALL_STATE(12)] = 182,
  [SMALL_STATE(13)] = 196,
  [SMALL_STATE(14)] = 209,
  [SMALL_STATE(15)] = 220,
  [SMALL_STATE(16)] = 233,
  [SMALL_STATE(17)] = 246,
  [SMALL_STATE(18)] = 259,
  [SMALL_STATE(19)] = 272,
  [SMALL_STATE(20)] = 285,
  [SMALL_STATE(21)] = 298,
  [SMALL_STATE(22)] = 306,
  [SMALL_STATE(23)] = 316,
  [SMALL_STATE(24)] = 324,
  [SMALL_STATE(25)] = 334,
  [SMALL_STATE(26)] = 342,
  [SMALL_STATE(27)] = 350,
  [SMALL_STATE(28)] = 357,
  [SMALL_STATE(29)] = 364,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_isa_segment_repeat1, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_element, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_element_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_element_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_element_repeat1, 2), SHIFT_REPEAT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_component_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_component_repeat1, 2), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_component, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_element_repeat1, 1),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_element_repeat1, 1), SHIFT_REPEAT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_isa_segment_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_isa_segment_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iea_segment, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iea_segment, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_isa_segment, 3),
  [92] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_isa_segment, 2),
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
