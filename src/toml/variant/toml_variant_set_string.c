/*
** EPITECH PROJECT, 2023
** toml_variant_set_string.c
** File description:
** toml_variant_set_string.c
*/

#include "toml/variant_impl.h"

void toml_variant_set_string(toml_variant_t *variant, char *value)
{
    toml_variant_delete_value(variant);
    variant->type = TOML_VARIANT_STRING;
    variant->value.string = value;
}
