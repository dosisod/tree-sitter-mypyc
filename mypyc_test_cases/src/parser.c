#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  sym_identifier = 1,
  sym_case_label = 2,
  sym_file_label = 3,
  sym_out_label = 4,
  sym_rechecked_label = 5,
  sym_typing_label = 6,
  sym_delete_label = 7,
  sym_ir_label = 8,
  anon_sym_LBRACK = 9,
  aux_sym__opening_label_token1 = 10,
  anon_sym_RBRACK = 11,
  aux_sym_label_token1 = 12,
  aux_sym_line_token1 = 13,
  sym_comment = 14,
  sym_source_file = 15,
  sym_label_name = 16,
  sym__opening_label = 17,
  sym_label = 18,
  sym_line = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym__opening_label_repeat1 = 21,
  aux_sym_line_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_case_label] = "case_label",
  [sym_file_label] = "file_label",
  [sym_out_label] = "out_label",
  [sym_rechecked_label] = "rechecked_label",
  [sym_typing_label] = "typing_label",
  [sym_delete_label] = "delete_label",
  [sym_ir_label] = "ir_label",
  [anon_sym_LBRACK] = "[",
  [aux_sym__opening_label_token1] = "_opening_label_token1",
  [anon_sym_RBRACK] = "]",
  [aux_sym_label_token1] = "label_token1",
  [aux_sym_line_token1] = "line_token1",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_label_name] = "label_name",
  [sym__opening_label] = "label",
  [sym_label] = "label",
  [sym_line] = "line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__opening_label_repeat1] = "_opening_label_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_case_label] = sym_case_label,
  [sym_file_label] = sym_file_label,
  [sym_out_label] = sym_out_label,
  [sym_rechecked_label] = sym_rechecked_label,
  [sym_typing_label] = sym_typing_label,
  [sym_delete_label] = sym_delete_label,
  [sym_ir_label] = sym_ir_label,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym__opening_label_token1] = aux_sym__opening_label_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [aux_sym_line_token1] = aux_sym_line_token1,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_label_name] = sym_label_name,
  [sym__opening_label] = sym_label,
  [sym_label] = sym_label,
  [sym_line] = sym_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__opening_label_repeat1] = aux_sym__opening_label_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_case_label] = {
    .visible = true,
    .named = true,
  },
  [sym_file_label] = {
    .visible = true,
    .named = true,
  },
  [sym_out_label] = {
    .visible = true,
    .named = true,
  },
  [sym_rechecked_label] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_label] = {
    .visible = true,
    .named = true,
  },
  [sym_delete_label] = {
    .visible = true,
    .named = true,
  },
  [sym_ir_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__opening_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_label_name] = {
    .visible = true,
    .named = true,
  },
  [sym__opening_label] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__opening_label_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_lines = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_lines] = "lines",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_lines, 0, .inherited = true},
  [1] =
    {field_lines, 3},
  [2] =
    {field_lines, 4},
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
  [13] = 11,
  [14] = 14,
  [15] = 12,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__opening_label_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__opening_label_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_label_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_line_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_ir_label);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_out_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_case_label);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_file_label);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_out_label);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_delete_label);
      END_STATE();
    case 31:
      if (lookahead == 'k') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_typing_label);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_rechecked_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_rechecked_label);
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
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_case_label] = ACTIONS(1),
    [sym_file_label] = ACTIONS(1),
    [sym_out_label] = ACTIONS(1),
    [sym_rechecked_label] = ACTIONS(1),
    [sym_typing_label] = ACTIONS(1),
    [sym_delete_label] = ACTIONS(1),
    [sym_ir_label] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym__opening_label] = STATE(14),
    [sym_label] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_LBRACK] = ACTIONS(3),
    [aux_sym_label_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(16), 1,
      sym_label_name,
    ACTIONS(9), 7,
      sym_case_label,
      sym_file_label,
      sym_out_label,
      sym_rechecked_label,
      sym_typing_label,
      sym_delete_label,
      sym_ir_label,
  [13] = 2,
    STATE(17), 1,
      sym_label_name,
    ACTIONS(9), 7,
      sym_case_label,
      sym_file_label,
      sym_out_label,
      sym_rechecked_label,
      sym_typing_label,
      sym_delete_label,
      sym_ir_label,
  [26] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      aux_sym_line_token1,
    STATE(11), 1,
      aux_sym_line_repeat1,
    STATE(22), 1,
      sym_line,
    ACTIONS(13), 2,
      aux_sym_label_token1,
      sym_comment,
  [43] = 5,
    ACTIONS(15), 1,
      aux_sym_line_token1,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym_line_repeat1,
    STATE(21), 1,
      sym_line,
    ACTIONS(19), 2,
      aux_sym_label_token1,
      sym_comment,
  [60] = 4,
    ACTIONS(23), 1,
      aux_sym_line_token1,
    STATE(13), 1,
      aux_sym_line_repeat1,
    STATE(24), 1,
      sym_line,
    ACTIONS(21), 2,
      aux_sym_label_token1,
      sym_comment,
  [74] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym_label_token1,
    ACTIONS(29), 1,
      sym_comment,
    STATE(9), 2,
      sym_label,
      aux_sym_source_file_repeat1,
  [88] = 4,
    ACTIONS(27), 1,
      aux_sym_label_token1,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym_label,
      aux_sym_source_file_repeat1,
  [102] = 4,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_label_token1,
    ACTIONS(38), 1,
      sym_comment,
    STATE(9), 2,
      sym_label,
      aux_sym_source_file_repeat1,
  [116] = 4,
    ACTIONS(23), 1,
      aux_sym_line_token1,
    STATE(13), 1,
      aux_sym_line_repeat1,
    STATE(25), 1,
      sym_line,
    ACTIONS(41), 2,
      aux_sym_label_token1,
      sym_comment,
  [130] = 4,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_line_token1,
    STATE(12), 1,
      aux_sym_line_repeat1,
    ACTIONS(45), 2,
      aux_sym_label_token1,
      sym_comment,
  [144] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym_line_token1,
    STATE(12), 1,
      aux_sym_line_repeat1,
    ACTIONS(51), 2,
      aux_sym_label_token1,
      sym_comment,
  [158] = 3,
    ACTIONS(56), 1,
      aux_sym_line_token1,
    STATE(15), 1,
      aux_sym_line_repeat1,
    ACTIONS(45), 2,
      aux_sym_label_token1,
      sym_comment,
  [169] = 3,
    ACTIONS(27), 1,
      aux_sym_label_token1,
    ACTIONS(58), 1,
      sym_comment,
    STATE(8), 2,
      sym_label,
      aux_sym_source_file_repeat1,
  [180] = 3,
    ACTIONS(60), 1,
      aux_sym_line_token1,
    STATE(15), 1,
      aux_sym_line_repeat1,
    ACTIONS(51), 2,
      aux_sym_label_token1,
      sym_comment,
  [191] = 3,
    ACTIONS(63), 1,
      aux_sym__opening_label_token1,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym__opening_label_repeat1,
  [201] = 3,
    ACTIONS(67), 1,
      aux_sym__opening_label_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym__opening_label_repeat1,
  [211] = 3,
    ACTIONS(71), 1,
      aux_sym__opening_label_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym__opening_label_repeat1,
  [221] = 3,
    ACTIONS(71), 1,
      aux_sym__opening_label_token1,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym__opening_label_repeat1,
  [231] = 3,
    ACTIONS(77), 1,
      aux_sym__opening_label_token1,
    ACTIONS(80), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym__opening_label_repeat1,
  [241] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      aux_sym_label_token1,
      sym_comment,
  [247] = 1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      aux_sym_label_token1,
      sym_comment,
  [253] = 2,
    ACTIONS(86), 1,
      aux_sym__opening_label_token1,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
  [260] = 1,
    ACTIONS(90), 2,
      aux_sym_label_token1,
      sym_comment,
  [265] = 1,
    ACTIONS(92), 2,
      aux_sym_label_token1,
      sym_comment,
  [270] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 43,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 74,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 102,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 130,
  [SMALL_STATE(12)] = 144,
  [SMALL_STATE(13)] = 158,
  [SMALL_STATE(14)] = 169,
  [SMALL_STATE(15)] = 180,
  [SMALL_STATE(16)] = 191,
  [SMALL_STATE(17)] = 201,
  [SMALL_STATE(18)] = 211,
  [SMALL_STATE(19)] = 221,
  [SMALL_STATE(20)] = 231,
  [SMALL_STATE(21)] = 241,
  [SMALL_STATE(22)] = 247,
  [SMALL_STATE(23)] = 253,
  [SMALL_STATE(24)] = 260,
  [SMALL_STATE(25)] = 265,
  [SMALL_STATE(26)] = 270,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__opening_label, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__opening_label, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(12),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__opening_label_repeat1, 2), SHIFT_REPEAT(20),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__opening_label_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4, .production_id = 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, .production_id = 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_name, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_name, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opening_label, 4, .production_id = 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opening_label, 5, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mypyc_test_cases(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
