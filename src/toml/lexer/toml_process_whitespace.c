/*
** EPITECH PROJECT, 2023
** toml_process_whitespace.c
** File description:
** toml_process_whitespace.c
*/

#include "toml/lexer_impl.h"

bool toml_lexer_process_whitespace(
    __attribute__((unused)) toml_lexer_t *lexer,
    reader_t *reader
)
{
    while (toml_lexer_is_whitespace_character(reader_peek(reader)))
        reader_next(reader);
    return true;
}
