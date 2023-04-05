/*
** EPITECH PROJECT, 2023
** toml_token_delete.c
** File description:
** toml_token_delete.c
*/

#include "toml/token_impl.h"

#include <stdlib.h>

void toml_token_delete(toml_token_t *token)
{
    if (token == NULL)
        return;
    free(token->value);
    free(token);
}
