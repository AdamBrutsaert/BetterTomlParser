/*
** EPITECH PROJECT, 2023
** toml_variant_delete.c
** File description:
** toml_variant_delete.c
*/

#include "toml/variant_impl.h"

#include <stdlib.h>

void toml_variant_delete(toml_variant_t *variant)
{
    if (variant == NULL)
        return;
    toml_variant_delete_value(variant);
    free(variant);
}
