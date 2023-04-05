/*
** EPITECH PROJECT, 2023
** variant_impl.h
** File description:
** variant_impl.h
*/

#pragma once

#include "variant.h"

struct toml_variant {
    toml_variant_type_t type;
    union {
        char *string;
        intmax_t integer;
        double floating;
        bool boolean;
    } value;
};

void toml_variant_delete_value(toml_variant_t *variant);
