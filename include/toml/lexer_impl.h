/*
** EPITECH PROJECT, 2023
** lexer_impl.h
** File description:
** lexer_impl.h
*/

#pragma once

#include "lexer.h"

struct toml_lexer {
    toml_token_t **tokens;
    size_t length;
    size_t capacity;
    size_t cursor;
};

/**
 * @brief Process a character
 *
 * @param lexer the lexer
 * @param reader the reader
 * @return true if no error occured
 * @return false if an error occured
 */
bool toml_lexer_process_character(toml_lexer_t *lexer, reader_t *reader);

/**
 * @brief Process a string
 *
 * @param lexer the lexer
 * @param reader the reader
 * @return true if no error occured
 * @return false if an error occured
 */
bool toml_lexer_process_string(toml_lexer_t *lexer, reader_t *reader);

/**
 * @brief Check whether a character is a string character
 *
 * @param character the character
 * @return true if the character is a string character
 * @return false if the character is not a string character
 */
bool toml_lexer_is_string_character(char character);

/**
 * @brief Push a token
 *
 * @param lexer the lexer
 * @param type the token type
 * @param value the token value
 * @return true if the token was pushed
 * @return false if the token was not pushed
 */
bool toml_lexer_push_token(
    toml_lexer_t *lexer,
    toml_token_type_t type,
    char *value
);
