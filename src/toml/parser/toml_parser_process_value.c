/*
** EPITECH PROJECT, 2023
** toml_parser_process_value.c
** File description:
** toml_parser_process_value.c
*/

#include "toml/parser_impl.h"
#include "my/string.h"

bool toml_parser_process_value(toml_parser_t *parser)
{
    toml_token_t *token = toml_lexer_next(parser->lexer);

    parser->current_value = toml_variant_new();
    if (parser->current_value == NULL)
        return false;
    toml_variant_set_string(
        parser->current_value,
        my_strdup(toml_token_get_value(token))
    );
    return true;
}
