/*
** EPITECH PROJECT, 2023
** toml_lexer_process_string.c
** File description:
** toml_lexer_process_string.c
*/

#include "toml/lexer_impl.h"
#include "my/stdio.h"

bool toml_lexer_process_string(toml_lexer_t *lexer, reader_t *reader)
{
    size_t length = 0;
    char *value;

    while (toml_lexer_is_string_character(reader_peek(reader))) {
        reader_next(reader);
        length++;
    }
    value = reader_get_previous(reader, length);
    return value != NULL
        && toml_lexer_push_token(lexer, TOML_TOKEN_STRING, value);
}
