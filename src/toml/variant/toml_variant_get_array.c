/*
** EPITECH PROJECT, 2023
** toml_variant_get_array.c
** File description:
** toml_variant_get_array.c
*/

#include "toml/variant_impl.h"

toml_array_t *toml_variant_get_array(toml_variant_t *variant)
{
    return variant->value.array;
}
