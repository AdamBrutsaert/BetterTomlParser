/*
** EPITECH PROJECT, 2023
** toml_table_get.c
** File description:
** toml_table_get.c
*/

#include "toml/table_impl.h"

struct toml_variant *toml_table_get(toml_table_t *table, const char *key)
{
    toml_table_node_t *node = toml_table_get_node(table, key);

    if (node == NULL)
        return NULL;
    return node->value;
}
