/*
** EPITECH PROJECT, 2023
** toml_variant_get_string.c
** File description:
** toml_variant_get_string.c
*/

#include "toml/variant_impl.h"

char *toml_variant_get_string(toml_variant_t *variant)
{
    return variant->value.string;
}
