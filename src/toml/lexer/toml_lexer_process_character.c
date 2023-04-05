/*
** EPITECH PROJECT, 2023
** toml_lexer_process_character.c
** File description:
** toml_lexer_process_character.c
*/

#include "toml/lexer_impl.h"

bool toml_lexer_process_character(
    toml_lexer_t *lexer,
    reader_t *reader
)
{
    char character = reader_peek(reader);

    if (toml_lexer_is_string_character(character))
        return toml_lexer_process_string(lexer, reader);
    reader_next(reader);
    return true;
}
