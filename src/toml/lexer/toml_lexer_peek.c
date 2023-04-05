/*
** EPITECH PROJECT, 2023
** toml_lexer_peek.c
** File description:
** toml_lexer_peek.c
*/

#include "toml/lexer_impl.h"

toml_token_t *toml_lexer_peek(toml_lexer_t *lexer)
{
    if (lexer->cursor >= lexer->length)
        return NULL;
    return lexer->tokens[lexer->cursor];
}
