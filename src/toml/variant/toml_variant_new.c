/*
** EPITECH PROJECT, 2023
** toml_variant_new.c
** File description:
** toml_variant_new.c
*/

#include "toml/variant_impl.h"
#include "my/memory.h"

toml_variant_t *toml_variant_new(void)
{
    return my_calloc(sizeof(toml_variant_t));
}
