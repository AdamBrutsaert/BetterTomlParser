/*
** EPITECH PROJECT, 2023
** toml_parser_process_key_value.c
** File description:
** toml_parser_process_key_value.c
*/

#include "toml/parser_impl.h"
#include "my/string.h"

bool toml_parser_process_key_value(toml_parser_t *parser)
{
    toml_table_t *current = parser->current;

    if (!toml_parser_process_key(parser))
        return false;
    if (toml_lexer_peek_type(parser->lexer) != TOML_TOKEN_EQUAL)
        return false;
    toml_lexer_next(parser->lexer);
    if (!toml_parser_is_value(parser) || !toml_parser_process_value(parser)) {
        parser->current = current;
        return false;
    }
    if (toml_lexer_peek_type(parser->lexer) != TOML_TOKEN_NEWLINE
        && toml_lexer_peek_type(parser->lexer) != TOML_TOKEN_NONE) {
        parser->current = current;
        return false;
    }
    toml_lexer_next(parser->lexer);
    toml_table_set(parser->current, parser->current_key, parser->current_value);
    parser->current = current;
    return true;
}
