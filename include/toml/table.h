/*
** EPITECH PROJECT, 2023
** table.h
** File description:
** table.h
*/

#pragma once

#include <stdbool.h>

typedef struct toml_table toml_table_t;

struct toml_variant;

/**
 * @brief Allocate a new table
 *
 * @return toml_table_t* the new table
 */
toml_table_t *toml_table_new(void);

/**
 * @brief Free a table
 *
 * @param table the table to free
 */
void toml_table_delete(toml_table_t *table);

/**
 * @brief Set a key
 *
 * @param table the table
 * @param key the key
 * @param value the value
 *
 * @warning the table will free the value
 */
bool toml_table_set(
    toml_table_t *table,
    const char *key,
    struct toml_variant *value
);

/**
 * @brief Get a value
 *
 * @param table the table
 * @param key the key
 * @return struct toml_variant* the value
 */
struct toml_variant *toml_table_get(toml_table_t *table, const char *key);
