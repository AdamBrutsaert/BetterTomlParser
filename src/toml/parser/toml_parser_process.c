/*
** EPITECH PROJECT, 2023
** toml_parser_process.c
** File description:
** toml_parser_process.c
*/

#include "toml/parser_impl.h"

toml_table_t *toml_parser_process(toml_parser_t *parser)
{
    parser->root = toml_table_new();
    parser->current = parser->root;
    if (parser->root == NULL)
        return NULL;
    while (toml_lexer_peek_type(parser->lexer) != TOML_TOKEN_NONE) {
        if (!toml_parser_process_key_value(parser))
            return NULL;
    }
    return parser->root;
}
