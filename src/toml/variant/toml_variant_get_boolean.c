/*
** EPITECH PROJECT, 2023
** toml_variant_get_boolean.c
** File description:
** toml_variant_get_boolean.c
*/

#include "toml/variant_impl.h"

bool toml_variant_get_boolean(toml_variant_t *variant)
{
    return variant->value.boolean;
}
