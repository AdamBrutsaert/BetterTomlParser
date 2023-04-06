/*
** EPITECH PROJECT, 2023
** toml_lexer_clear.c
** File description:
** toml_lexer_clear.c
*/

#include "toml/lexer_impl.h"

void toml_lexer_clear(toml_lexer_t *lexer)
{
    for (size_t i = 0; i < lexer->length; i++)
        toml_token_delete(lexer->tokens[i]);
    lexer->length = 0;
    lexer->cursor = 0;
}
