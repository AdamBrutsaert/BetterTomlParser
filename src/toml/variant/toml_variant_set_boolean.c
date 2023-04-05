/*
** EPITECH PROJECT, 2023
** toml_variant_set_boolean.c
** File description:
** toml_variant_set_boolean.c
*/

#include "toml/variant_impl.h"

void toml_variant_set_boolean(toml_variant_t *variant, bool value)
{
    toml_variant_delete_value(variant);
    variant->type = TOML_VARIANT_BOOLEAN;
    variant->value.boolean = value;
}
