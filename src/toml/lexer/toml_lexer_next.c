/*
** EPITECH PROJECT, 2023
** toml_lexer_next.c
** File description:
** toml_lexer_next.c
*/

#include "toml/lexer_impl.h"

toml_token_t *toml_lexer_next(toml_lexer_t *lexer)
{
    if (lexer->cursor >= lexer->length)
        return NULL;
    lexer->cursor++;
    return lexer->tokens[lexer->cursor - 1];
}
