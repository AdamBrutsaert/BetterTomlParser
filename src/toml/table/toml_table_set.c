/*
** EPITECH PROJECT, 2023
** toml_table_set.c
** File description:
** toml_table_set.c
*/

#include "toml/table_impl.h"
#include "my/string.h"

#include <stdlib.h>

static bool append(
    toml_table_t *table,
    const char *key,
    struct toml_variant *value
)
{
    toml_table_node_t *node = malloc(sizeof(toml_table_node_t));
    size_t hash;

    if (node == NULL)
        return false;
    node->key = my_strdup(key);
    if (node->key == NULL) {
        free(node);
        return false;
    }
    node->value = value;
    hash = my_strhash(key) % table->length;
    node->next = table->nodes[hash];
    table->nodes[hash] = node;
    return true;
}

bool toml_table_set(
    toml_table_t *table,
    const char *key,
    struct toml_variant *value
)
{
    toml_table_node_t *node = toml_table_get_node(table, key);

    if (node != NULL) {
        toml_variant_delete(node->value);
        node->value = value;
        return true;
    }
    return append(table, key, value);
}
