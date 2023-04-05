/*
** EPITECH PROJECT, 2023
** variant.h
** File description:
** variant.h
*/

#pragma once

#include "array.h"
#include "table.h"

#include <stdint.h>

typedef struct toml_variant toml_variant_t;

typedef enum {
    TOML_VARIANT_NONE = 0,
    TOML_VARIANT_STRING,
    TOML_VARIANT_INTEGER,
    TOML_VARIANT_FLOAT,
    TOML_VARIANT_BOOLEAN,
    TOML_VARIANT_ARRAY,
    TOML_VARIANT_TABLE
} toml_variant_type_t;

/**
 * @brief Allocate a new variant
 *
 * @return toml_variant_t* the new variant
 */
toml_variant_t *toml_variant_new(void);

/**
 * @brief Free a variant
 *
 * @param variant the variant to free
 */
void toml_variant_delete(toml_variant_t *variant);

/**
 * @brief Get the type of a variant
 *
 * @param variant the variant
 * @return toml_variant_type_t the type of the variant
 */
toml_variant_type_t toml_variant_get_type(toml_variant_t *variant);

/**
 * @brief Set the variant to none
 *
 * @param variant the variant
 */
void toml_variant_set_none(toml_variant_t *variant);

/**
 * @brief Set the variant to an integer
 *
 * @param variant the variant
 * @param value the value
 */
void toml_variant_set_integer(toml_variant_t *variant, intmax_t value);

/**
 * @brief Set the variant to a float
 *
 * @param variant the variant
 * @param value the value
 */
void toml_variant_set_float(toml_variant_t *variant, double value);

/**
 * @brief Set the variant to a boolean
 *
 * @param variant the variant
 * @param value the value
 */
void toml_variant_set_boolean(toml_variant_t *variant, bool value);

/**
 * @brief Set the variant to a heap-allocated string
 *
 * @param variant the variant
 * @param value the value
 *
 * @warning the variant will free the string
 */
void toml_variant_set_string(toml_variant_t *variant, char *value);

/**
 * @brief Set the variant to an array
 *
 * @param variant the variant
 * @param array the array
 *
 * @warning the variant will free the array
 */
void toml_variant_set_array(toml_variant_t *variant, toml_array_t *array);

/**
 * @brief Set the variant to a table
 *
 * @param variant the variant
 * @param table the table
 *
 * @warning the variant will free the table
 */
void toml_variant_set_table(toml_variant_t *variant, toml_table_t *table);

/**
 * @brief Get the integer value of a variant
 *
 * @param variant the variant
 * @return intmax_t the value
 */
intmax_t toml_variant_get_integer(toml_variant_t *variant);

/**
 * @brief Get the float value of a variant
 *
 * @param variant the variant
 * @return double the value
 */
double toml_variant_get_float(toml_variant_t *variant);

/**
 * @brief Get the boolean value of a variant
 *
 * @param variant the variant
 * @return bool the value
 */
bool toml_variant_get_boolean(toml_variant_t *variant);

/**
 * @brief Get the string value of a variant
 *
 * @param variant the variant
 * @return char* the value
 */
char *toml_variant_get_string(toml_variant_t *variant);

/**
 * @brief Get the array value of a variant
 *
 * @param variant the variant
 * @return toml_array_t* the value
 */
toml_array_t *toml_variant_get_array(toml_variant_t *variant);

/**
 * @brief Get the table value of a variant
 *
 * @param variant the variant
 * @return toml_table_t* the value
 */
toml_table_t *toml_variant_get_table(toml_variant_t *variant);
