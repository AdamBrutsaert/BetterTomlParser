/*
** EPITECH PROJECT, 2023
** toml_variant_set_integer.c
** File description:
** toml_variant_set_integer.c
*/

#include "toml/variant_impl.h"

void toml_variant_set_integer(toml_variant_t *variant, intmax_t value)
{
    toml_variant_delete_value(variant);
    variant->type = TOML_VARIANT_INTEGER;
    variant->value.integer = value;
}
