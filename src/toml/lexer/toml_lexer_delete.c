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
    free(lexer->tokens);
    free(lexer);
}
