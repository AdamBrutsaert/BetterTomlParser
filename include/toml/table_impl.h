/*
** EPITECH PROJECT, 2023
** table_impl.h
** File description:
** table_impl.h
*/

#pragma once

#include "table.h"
#include "variant.h"

typedef struct toml_table_node {
    char *key;
    toml_variant_t *value;
    struct toml_table_node *next;
} toml_table_node_t;

struct toml_table {
    toml_table_node_t **nodes;
    size_t length;
};

/**
 * @brief Get a node from a table
 *
 * @param table the table
 * @param key the key
 * @return toml_table_node_t* the node
 */
toml_table_node_t *toml_table_get_node(toml_table_t *table, const char *key);
