/*
** EPITECH PROJECT, 2023
** toml_table_delete.c
** File description:
** toml_table_delete.c
*/

#include "toml/table_impl.h"

#include <stdlib.h>

static void toml_table_node_delete(toml_table_node_t *node)
{
    if (node == NULL)
        return;
    toml_table_node_delete(node->next);
    toml_variant_delete(node->value);
    free(node->key);
    free(node);
}

void toml_table_delete(toml_table_t *table)
{
    if (table == NULL)
        return;
    for (size_t i = 0; i < table->length; i++)
        toml_table_node_delete(table->nodes[i]);
    free(table->nodes);
    free(table);
}
