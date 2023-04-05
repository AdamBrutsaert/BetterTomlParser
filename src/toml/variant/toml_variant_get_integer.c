/*
** EPITECH PROJECT, 2023
** toml_variant_get_integer.c
** File description:
** toml_variant_get_integer.c
*/

#include "toml/variant_impl.h"

intmax_t toml_variant_get_integer(toml_variant_t *variant)
{
    return variant->value.integer;
}
