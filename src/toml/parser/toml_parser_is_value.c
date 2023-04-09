/*
** EPITECH PROJECT, 2023
** toml_parser_is_value.c
** File description:
** toml_parser_is_value.c
*/

#include "toml/parser_impl.h"
#include "my/conversion.h"

bool toml_parser_is_value(toml_parser_t *parser)
{
    toml_token_t *token = toml_lexer_peek(parser->lexer);
    toml_token_type_t type;
    char *value;

    if (token == NULL)
        return false;
    type = toml_token_get_type(token);
    value = toml_token_get_value(token);
    return type == TOML_TOKEN_SINGLE_QUOTED_STRING
        || type == TOML_TOKEN_DOUBLE_QUOTED_STRING
        || (type == TOML_TOKEN_STRING
            && (string_is_integer(value)
                || string_is_float(value)
                || string_is_boolean(value)));
}
