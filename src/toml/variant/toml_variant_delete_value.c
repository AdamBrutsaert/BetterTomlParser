/*
** EPITECH PROJECT, 2023
** toml_variant_delete_value.c
** File description:
** toml_variant_delete_value.c
*/

#include "toml/variant_impl.h"

#include <stdlib.h>

void toml_variant_delete_value(toml_variant_t *variant)
{
    if (variant->type == TOML_VARIANT_STRING)
        free(variant->value.string);
}
