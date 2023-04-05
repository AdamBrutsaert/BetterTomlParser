/*
** EPITECH PROJECT, 2023
** toml_lexer_process_single_character.c
** File description:
** toml_lexer_process_single_character.c
*/

#include "toml/lexer_impl.h"

bool toml_lexer_process_single_character(
    toml_lexer_t *lexer,
    reader_t *reader,
    toml_token_type_t type
)
{
    char *value;

    reader_next(reader);
    value = reader_get_previous(reader, 1);
    return value != NULL && toml_lexer_push_token(lexer, type, value);
}
