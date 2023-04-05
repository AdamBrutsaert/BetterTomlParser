/*
** EPITECH PROJECT, 2023
** toml_array_delete.c
** File description:
** toml_array_delete.c
*/

#include "toml/array_impl.h"
#include "toml/variant.h"

#include <stdlib.h>

void toml_array_delete(toml_array_t *array)
{
    if (array == NULL)
        return;
    for (size_t i = 0; i < array->length; i++)
        toml_variant_delete(array->variants[i]);
    free(array->variants);
    free(array);
}
