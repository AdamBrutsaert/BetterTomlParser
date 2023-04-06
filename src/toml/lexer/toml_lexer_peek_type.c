/*
** EPITECH PROJECT, 2023
** toml_lexer_peek_type.c
** File description:
** toml_lexer_peek_type.c
*/

#include "toml/lexer_impl.h"

toml_token_type_t toml_lexer_peek_type(toml_lexer_t *lexer)
{
    toml_token_t *token = toml_lexer_peek(lexer);

    if (token == NULL)
        return TOML_TOKEN_NONE;
    return toml_token_get_type(token);
}
