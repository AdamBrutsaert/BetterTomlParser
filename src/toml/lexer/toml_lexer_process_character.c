/*
** EPITECH PROJECT, 2023
** toml_lexer_process_character.c
** File description:
** toml_lexer_process_character.c
*/

#include "toml/lexer_impl.h"

static bool toml_lexer_process_character2(
    toml_lexer_t *lexer,
    reader_t *reader,
    char character
)
{
    if (character == '[')
        return toml_lexer_process_single_character(lexer, reader,
            TOML_TOKEN_LEFT_BRACKET);
    if (character == ']')
        return toml_lexer_process_single_character(lexer, reader,
            TOML_TOKEN_RIGHT_BRACKET);
    if (character == '.')
        return toml_lexer_process_single_character(lexer, reader,
            TOML_TOKEN_DOT);
    if (character == ',')
        return toml_lexer_process_single_character(lexer, reader,
            TOML_TOKEN_COMMA);
    if (character == '[')
        return toml_lexer_process_single_character(lexer, reader,
            TOML_TOKEN_LEFT_BRACKET);
    if (character == '=')
        return toml_lexer_process_single_character(lexer, reader,
            TOML_TOKEN_EQUAL);
    reader_next(reader);
    return true;
}

bool toml_lexer_process_character(
    toml_lexer_t *lexer,
    reader_t *reader
)
{
    char character = reader_peek(reader);

    if (toml_lexer_is_string_character(character))
        return toml_lexer_process_string(lexer, reader);
    if (toml_lexer_is_whitespace_character(character))
        return toml_lexer_process_whitespace(lexer, reader);
    if (character == '#')
        return toml_lexer_process_comment(lexer, reader);
    if (character == '\n')
        return toml_lexer_process_single_character(lexer, reader,
            TOML_TOKEN_NEWLINE);
    if (character == '{')
        return toml_lexer_process_single_character(lexer, reader,
            TOML_TOKEN_LEFT_BRACE);
    if (character == '}')
        return toml_lexer_process_single_character(lexer, reader,
            TOML_TOKEN_RIGHT_BRACE);
    return toml_lexer_process_character2(lexer, reader, character);
}
