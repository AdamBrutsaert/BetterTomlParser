/*
** EPITECH PROJECT, 2023
** toml_parser_process_value.c
** File description:
** toml_parser_process_value.c
*/

#include "toml/parser_impl.h"
#include "my/conversion.h"

bool toml_parser_process_value(toml_parser_t *parser)
{
    toml_token_t *token = toml_lexer_peek(parser->lexer);
    char *value = toml_token_get_value(token);

    if (string_is_integer(value))
        return toml_parser_process_integer(parser);
    if (string_is_float(value))
        return toml_parser_process_float(parser);
    if (string_is_boolean(value))
        return toml_parser_process_boolean(parser);
    return toml_parser_process_string(parser);
}
