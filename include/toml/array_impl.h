/*
** EPITECH PROJECT, 2023
** array_impl.h
** File description:
** array_impl.h
*/

#pragma once

#include "array.h"
#include "variant.h"

struct toml_array {
    toml_variant_t **variants;
    size_t length;
    size_t capacity;
};
