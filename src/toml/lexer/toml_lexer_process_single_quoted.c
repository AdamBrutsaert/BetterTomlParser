/*
** EPITECH PROJECT, 2023
** toml_lexer_process_single_quoted.c
** File description:
** toml_lexer_process_single_quoted.c
*/

#include "toml/lexer_impl.h"

bool toml_lexer_process_single_quoted_string(
    toml_lexer_t *lexer,
    reader_t *reader
)
{
    size_t length = 2;
    char *value;

    reader_next(reader);
    while (reader_peek(reader) != '\'' && reader_peek(reader) != '\0'
        && reader_peek(reader) != '\n') {
        reader_next(reader);
        length++;
    }
    if (reader_peek(reader) != '\'')
        return false;
    reader_next(reader);
    value = reader_get_previous(reader, length);
    return value != NULL
        && toml_lexer_push_token(lexer, TOML_TOKEN_SINGLE_QUOTED_STRING, value);
}
