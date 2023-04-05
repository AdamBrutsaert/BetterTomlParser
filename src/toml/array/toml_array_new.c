/*
** EPITECH PROJECT, 2023
** toml_array_new.c
** File description:
** toml_array_new.c
*/

#include "toml/array_impl.h"
#include "my/memory.h"

toml_array_t *toml_array_new(void)
{
    return my_calloc(sizeof(toml_array_t));
}
