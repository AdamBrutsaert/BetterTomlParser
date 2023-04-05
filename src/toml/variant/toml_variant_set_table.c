/*
** EPITECH PROJECT, 2023
** toml_variant_set_table.c
** File description:
** toml_variant_set_table.c
*/

#include "toml/variant_impl.h"

void toml_variant_set_table(toml_variant_t *variant, toml_table_t *table)
{
    toml_variant_delete_value(variant);
    variant->type = TOML_VARIANT_TABLE;
    variant->value.table = table;
}
