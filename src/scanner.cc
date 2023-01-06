#include <tree_sitter/parser.h>
#include <string>
#include <cwctype>

namespace {

  using std::string;

  enum TokenType {
    SEGMENT_TERMINATOR,
    DATA_SEPARATOR,
    COMPONENT_SEPARATOR,
    REPETITION_SEPARATOR,
    NOT_TERMINATOR,
  };

  struct State {
    int32_t segment_terminator;
    int32_t data_separator;
    int32_t component_separator;
    int32_t repetition_separator;
  };

  struct Scanner {
    void skip(TSLexer *lexer) {
      lexer->advance(lexer, true);
    }

    void advance(TSLexer *lexer) {
      lexer->advance(lexer, false);
    }

    unsigned serialize(char *buffer) {
      if (sizeof(struct State) > TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;

      State *buffer_state = (State *)buffer;
      buffer_state->segment_terminator = this->state.segment_terminator;
      buffer_state->data_separator = this->state.data_separator;
      buffer_state->component_separator = this->state.component_separator;
      buffer_state->repetition_separator = this->state.repetition_separator;

      return sizeof(struct State);
    }

    void deserialize(const char *buffer, unsigned length) {
      if (length == 0) {
        state.segment_terminator = 0;
        state.data_separator = 0;
        state.component_separator = 0;
        state.repetition_separator = 0;
      } else {
        const State *buffer_state = static_cast<State *>((void *) buffer);
        this->state.segment_terminator = buffer_state->segment_terminator;
        this->state.data_separator = buffer_state->data_separator;
        this->state.component_separator = buffer_state->component_separator;
        this->state.repetition_separator = buffer_state->repetition_separator;
      }
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols) {
      if(lexer->eof(lexer)) {
        return false;
      }
      if(this->state.segment_terminator == 0) {
        uint32_t col = lexer->get_column(lexer);
        if(col != 3) {
          return false;
        }

        this->state.data_separator = lexer->lookahead;
        advance(lexer);
        lexer->result_symbol = DATA_SEPARATOR;
        lexer->mark_end(lexer);

        while(col != 82) {
          advance(lexer);
          col = lexer->get_column(lexer);
        }
        this->state.repetition_separator = lexer->lookahead;

        while(col != 104) {
          advance(lexer);
          col = lexer->get_column(lexer);
        }
        this->state.component_separator = lexer->lookahead;

        advance(lexer);
        this->state.segment_terminator = lexer->lookahead;

        return true;
      }
      if (valid_symbols[NOT_TERMINATOR]) {
        int32_t x = lexer->lookahead;
        bool match = false;
        if (x != this->state.segment_terminator && x != this->state.data_separator && x != this->state.component_separator && x != this->state.repetition_separator) {
          advance(lexer);
          x = lexer->lookahead;
          match = true;
        }
        if (match) {
          lexer->result_symbol = NOT_TERMINATOR;
          lexer->mark_end(lexer);
          return true;
        }
      }

      if (valid_symbols[SEGMENT_TERMINATOR]) {
        if (lexer->lookahead == this->state.segment_terminator) {
          advance(lexer);
          lexer->mark_end(lexer);
          lexer->result_symbol = SEGMENT_TERMINATOR;
          return true;
        }
      }

      if (valid_symbols[DATA_SEPARATOR]) {
        if (lexer->lookahead == this->state.data_separator) {
          advance(lexer);
          lexer->mark_end(lexer);
          lexer->result_symbol = DATA_SEPARATOR;
          return true;
        }
      }

      if (valid_symbols[COMPONENT_SEPARATOR]) {
        if (lexer->lookahead == this->state.component_separator) {
          advance(lexer);
          lexer->mark_end(lexer);
          lexer->result_symbol = COMPONENT_SEPARATOR;
          return true;
        }
      }

      if (valid_symbols[REPETITION_SEPARATOR]) {
        if (lexer->lookahead == this->state.repetition_separator) {
          advance(lexer);
          lexer->mark_end(lexer);
          lexer->result_symbol = REPETITION_SEPARATOR;
          return true;
        }
      }


      return false;
    }

    State state;
  };

}

extern "C" {

  void *tree_sitter_x12_external_scanner_create() {
    return new Scanner();
  }

  bool tree_sitter_x12_external_scanner_scan(void *payload, TSLexer *lexer,
      const bool *valid_symbols) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
  }

  unsigned tree_sitter_x12_external_scanner_serialize(void *payload, char *state) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->serialize(state);
  }

  void tree_sitter_x12_external_scanner_deserialize(void *payload, const char *state, unsigned length) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    scanner->deserialize(state, length);
  }

  void tree_sitter_x12_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
  }

}
