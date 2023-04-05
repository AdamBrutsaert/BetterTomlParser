/*
** EPITECH PROJECT, 2023
** toml_array_get.c
** File description:
** toml_array_get.c
*/

#include "toml/array_impl.h"

toml_variant_t *toml_array_get(toml_array_t *array, size_t index)
{
    return array->variants[index];
}
