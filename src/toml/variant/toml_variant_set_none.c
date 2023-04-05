/*
** EPITECH PROJECT, 2023
** toml_variant_set_none.c
** File description:
** toml_variant_set_none.c
*/

#include "toml/variant_impl.h"

void toml_variant_set_none(toml_variant_t *variant)
{
    toml_variant_delete_value(variant);
    variant->type = TOML_VARIANT_NONE;
}
