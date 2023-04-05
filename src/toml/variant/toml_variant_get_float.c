/*
** EPITECH PROJECT, 2023
** toml_variant_get_float.c
** File description:
** toml_variant_get_float.c
*/

#include "toml/variant_impl.h"

double toml_variant_get_float(toml_variant_t *variant)
{
    return variant->value.floating;
}
