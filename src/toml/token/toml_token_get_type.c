/*
** EPITECH PROJECT, 2023
** toml_token_get_type.c
** File description:
** toml_token_get_type.c
*/

#include "toml/token_impl.h"

toml_token_type_t toml_token_get_type(toml_token_t *token)
{
    return token->type;
}
