/*
** EPITECH PROJECT, 2023
** toml_variant_get_table.c
** File description:
** toml_variant_get_table.c
*/

#include "toml/variant_impl.h"

toml_table_t *toml_variant_get_table(toml_variant_t *variant)
{
    return variant->value.table;
}
