/*
** EPITECH PROJECT, 2023
** toml_parser_process_string.c
** File description:
** toml_parser_process_string.c
*/

#include "toml/parser_impl.h"
#include "my/string.h"

#include <stdlib.h>

bool toml_parser_process_string(toml_parser_t *parser)
{
    toml_token_t *token = toml_lexer_next(parser->lexer);
    parser->current_value = toml_variant_new();
    char *copy = my_strdup(toml_token_get_value(token));

    if (parser->current_value == NULL || copy == NULL) {
        toml_variant_delete(parser->current_value);
        parser->current_value = NULL;
        free(copy);
        return false;
    }
    toml_variant_set_string(
        parser->current_value,
        copy
    );
    return true;
}
