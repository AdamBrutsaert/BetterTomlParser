/*
** EPITECH PROJECT, 2023
** toml_token_new.c
** File description:
** toml_token_new.c
*/

#include "toml/token_impl.h"
#include "my/memory.h"

toml_token_t *toml_token_new(toml_token_type_t type, char *value)
{
    toml_token_t *token = my_calloc(sizeof(toml_token_t));

    if (token == NULL)
        return NULL;
    token->type = type;
    token->value = value;
    return token;
}
