/*
** EPITECH PROJECT, 2023
** toml_variant_set_array.c
** File description:
** toml_variant_set_array.c
*/

#include "toml/variant_impl.h"

void toml_variant_set_array(toml_variant_t *variant, toml_array_t *value)
{
    toml_variant_delete_value(variant);
    variant->type = TOML_VARIANT_ARRAY;
    variant->value.array = value;
}
