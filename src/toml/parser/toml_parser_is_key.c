/*
** EPITECH PROJECT, 2023
** toml_parser_is_key.c
** File description:
** toml_parser_is_key.c
*/

#include "toml/parser_impl.h"

bool toml_parser_is_key(toml_parser_t *parser)
{
    toml_token_type_t type = toml_lexer_peek_type(parser->lexer);

    return type == TOML_TOKEN_STRING;
}
