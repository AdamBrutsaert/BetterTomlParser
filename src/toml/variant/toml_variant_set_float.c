/*
** EPITECH PROJECT, 2023
** toml_variant_set_float.c
** File description:
** toml_variant_set_float.c
*/

#include "toml/variant_impl.h"

void toml_variant_set_float(toml_variant_t *variant, double value)
{
    toml_variant_delete_value(variant);
    variant->type = TOML_VARIANT_FLOAT;
    variant->value.floating = value;
}
