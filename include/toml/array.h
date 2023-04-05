/*
** EPITECH PROJECT, 2023
** array.h
** File description:
** array.h
*/

#pragma once

#include <stddef.h>
#include <stdbool.h>

typedef struct toml_array toml_array_t;

struct toml_variant;

/**
 * @brief Allocate a new array
 *
 * @return toml_array_t* the new array
 */
toml_array_t *toml_array_new(void);

/**
 * @brief Free an array
 *
 * @param array the array to free
 */
void toml_array_delete(toml_array_t *array);

/**
 * @brief Get the length of an array
 *
 * @param array the array
 * @return size_t the length of the array
 */
size_t toml_array_get_length(toml_array_t *array);

/**
 * @brief Get the variant at a given index
 *
 * @param array the array
 * @param index the index
 * @return struct toml_variant* the variant at the given index
 */
struct toml_variant *toml_array_get(toml_array_t *array, size_t index);

/**
 * @brief Push a variant
 *
 * @param array the array
 * @param variant the variant to push
 * @return true if the variant was pushed
 * @return false if the variant was not pushed
 *
 * @warning the array will free the variant
 */
bool toml_array_push(toml_array_t *array, struct toml_variant *variant);
