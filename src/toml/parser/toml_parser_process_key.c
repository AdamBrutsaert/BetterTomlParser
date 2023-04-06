/*
** EPITECH PROJECT, 2023
** toml_parser_process_key.c
** File description:
** toml_parser_process_key.c
*/

#include "toml/parser_impl.h"

static bool create_table(toml_parser_t *parser)
{
    toml_table_t *table = toml_table_new();
    toml_variant_t *variant = toml_variant_new();

    if (table == NULL || variant == NULL) {
        toml_table_delete(table);
        toml_variant_delete(variant);
        return false;
    }
    toml_variant_set_table(variant, table);
    if (!toml_table_set(parser->current, parser->current_key, variant)) {
        toml_variant_delete(variant);
        toml_table_delete(table);
        return false;
    }
    parser->current = table;
    return true;
}

bool toml_parser_process_key(toml_parser_t *parser)
{
    toml_token_t *token = toml_lexer_next(parser->lexer);

    if (token == NULL)
        return false;
    parser->current_key = toml_token_get_value(token);
    while (toml_lexer_peek_type(parser->lexer) == TOML_TOKEN_DOT) {
        toml_lexer_next(parser->lexer);
        if (!toml_parser_is_key(parser))
            return false;
        token = toml_lexer_next(parser->lexer);
        if (!create_table(parser))
            return false;
        parser->current_key = toml_token_get_value(token);
    }
    return true;
}
