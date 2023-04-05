/*
** EPITECH PROJECT, 2023
** toml_token_get_value.c
** File description:
** toml_token_get_value.c
*/

#include "toml/token_impl.h"

char *toml_token_get_value(toml_token_t *token)
{
    return token->value;
}
