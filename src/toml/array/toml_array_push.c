/*
** EPITECH PROJECT, 2023
** toml_array_push.c
** File description:
** toml_array_push.c
*/

#include "toml/array_impl.h"
#include "my/memory.h"

#include <stdlib.h>

static bool grow(toml_array_t *array)
{
    size_t capacity = array->capacity * 2 + !array->capacity;
    toml_variant_t **variants = malloc(capacity * sizeof(toml_variant_t *));

    if (variants == NULL)
        return false;
    my_memcpy(
        variants,
        array->variants,
        sizeof(toml_variant_t *) * array->length
    );
    free(array->variants);
    array->variants = variants;
    array->capacity = capacity;
    return true;
}

bool toml_array_push(toml_array_t *array, toml_variant_t *variant)
{
    if (array->length == array->capacity && !grow(array))
        return false;
    array->variants[array->length] = variant;
    array->length++;
    return true;
}
