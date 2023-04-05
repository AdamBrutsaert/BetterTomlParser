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
 * @brief Process whitespace
 *
 * @param lexer the lexer
 * @param reader the reader
 * @return true if no error occured
 * @return false if an error occured
 */
bool toml_lexer_process_whitespace(toml_lexer_t *lexer, reader_t *reader);

/**
 * @brief Check whether a character is a whitespace character
 *
 * @param character the character
 * @return true if the character is a whitespace character
 * @return false if the character is not a whitespace character
 */
bool toml_lexer_is_whitespace_character(char character);

/**
 * @brief Process a comment
 *
 * @param lexer the lexer
 * @param reader the reader
 * @return true if no error occured
 * @return false if an error occured
 */
bool toml_lexer_process_comment(toml_lexer_t *lexer, reader_t *reader);

/**
 * @brief Process a single character
 *
 * @return true if no error occured
 * @return false if an error occured
 */
bool toml_lexer_process_single_character(
    toml_lexer_t *lexer,
    reader_t *reader,
    toml_token_type_t type
);

/**
 * @brief Process double quoted string
 *
 * @param lexer the lexer
 * @param reader the reader
 * @return true if no error occured
 * @return false if an error occured
 */
bool toml_lexer_process_double_quoted_string(
    toml_lexer_t *lexer,
    reader_t *reader
);

/**
 * @brief Process signle quoted string
 *
 * @param lexer the lexer
 * @param reader the reader
 * @return true if no error occured
 * @return false if an error occured
 */
bool toml_lexer_process_single_quoted_string(
    toml_lexer_t *lexer,
    reader_t *reader
);
