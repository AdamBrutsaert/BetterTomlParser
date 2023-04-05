/*
** EPITECH PROJECT, 2023
** toml_lexer_process_comment.c
** File description:
** toml_lexer_process_comment.c
*/

#include "toml/lexer_impl.h"

bool toml_lexer_process_comment(
    __attribute__((unused)) toml_lexer_t *lexer,
    reader_t *reader)
{
    while (reader_peek(reader) != '\n' && reader_peek(reader) != '\0')
        reader_next(reader);
    return true;
}
