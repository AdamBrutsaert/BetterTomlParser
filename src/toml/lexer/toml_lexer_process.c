/*
** EPITECH PROJECT, 2023
** toml_lexer_process.c
** File description:
** toml_lexer_process.c
*/

#include "toml/lexer_impl.h"

bool toml_lexer_process(toml_lexer_t *lexer, reader_t *reader)
{
    while (reader_peek(reader) != '\0') {
        if (!toml_lexer_process_character(lexer, reader)) {
            toml_lexer_clear(lexer);
            return false;
        }
    }
    return true;
}
