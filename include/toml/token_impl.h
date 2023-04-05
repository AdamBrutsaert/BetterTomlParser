/*
** EPITECH PROJECT, 2023
** token_impl.h
** File description:
** token_impl.h
*/

#pragma once

#include "token.h"

struct toml_token {
    toml_token_type_t type;
    char *value;
};
