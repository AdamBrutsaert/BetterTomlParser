/*
** EPITECH PROJECT, 2023
** toml_lexer_delete.c
** File description:
** toml_lexer_delete.c
*/

#include "toml/lexer_impl.h"

#include <stdlib.h>

void toml_lexer_delete(toml_lexer_t *lexer)
{
    if (lexer == NULL)
        return;
    for (size_t i = 0; i < lexer->length; i++)
        toml_token_delete(lexer->tokens[i]);
    free(lexer->tokens);
    free(lexer);
}
