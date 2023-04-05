/*
** EPITECH PROJECT, 2023
** toml_array_get_length.c
** File description:
** toml_array_get_length.c
*/

#include "toml/array_impl.h"

size_t toml_array_get_length(toml_array_t *array)
{
    return array->length;
}
