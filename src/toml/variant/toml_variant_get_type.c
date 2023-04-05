/*
** EPITECH PROJECT, 2023
** toml_variant_get_type.c
** File description:
** toml_variant_get_type.c
*/

#include "toml/variant_impl.h"

toml_variant_type_t toml_variant_get_type(toml_variant_t *variant)
{
    return variant->type;
}
