/*
** EPITECH PROJECT, 2023
** toml_table_get_node.c
** File description:
** toml_table_get_node.c
*/

#include "toml/table_impl.h"
#include "my/string.h"

toml_table_node_t *toml_table_get_node(toml_table_t *table, const char *key)
{
    size_t hash = my_strhash(key) % table->length;
    toml_table_node_t *node = table->nodes[hash];

    while (node != NULL) {
        if (!my_strcmp(node->key, key))
            return node;
        node = node->next;
    }
    return NULL;
}
