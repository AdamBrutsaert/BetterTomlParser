/*
** EPITECH PROJECT, 2023
** lexer_impl.h
** File description:
** lexer_impl.h
*/

#pragma once

#include "lexer.h"

struct toml_lexer {
    toml_token_t *tokens;
    size_t length;
    size_t capacity;
    size_t cursor;
};

bool toml_lexer_process_character(
    toml_lexer_t *lexer,
    reader_t *reader,
    char character
);
