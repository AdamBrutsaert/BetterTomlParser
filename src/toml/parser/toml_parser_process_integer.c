/*
** EPITECH PROJECT, 2023
** toml_parser_process_integer.c
** File description:
** toml_parser_process_integer.c
*/

#include "toml/parser_impl.h"
#include "my/conversion.h"

bool toml_parser_process_integer(toml_parser_t *parser)
{
    toml_token_t *token = toml_lexer_next(parser->lexer);
    parser->current_value = toml_variant_new();

    if (parser->current_value == NULL)
        return false;
    toml_variant_set_integer(
        parser->current_value,
        string_to_integer(toml_token_get_value(token))
    );
    return true;
}
