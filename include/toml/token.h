/*
** EPITECH PROJECT, 2023
** token.h
** File description:
** token.h
*/

#pragma once

typedef struct toml_token toml_token_t;

typedef enum {
    // Symbols
    TOML_TOKEN_EQUAL,
    TOML_TOKEN_COMMA,
    TOML_TOKEN_DOT,
    TOML_TOKEN_LEFT_BRACKET,
    TOML_TOKEN_RIGHT_BRACKET,
    TOML_TOKEN_LEFT_BRACE,
    TOML_TOKEN_RIGHT_BRACE,
    TOML_TOKEN_NEWLINE,

    // Values
    TOML_TOKEN_STRING,
    TOML_TOKEN_DOUBLE_QUOTED_STRING,
    TOML_TOKEN_SINGLE_QUOTED_STRING,
} toml_token_type_t;

/**
 * @brief Allocate a new token
 *
 * @param type the type
 * @param value the value
 * @return token_t* the new token
 */
toml_token_t *toml_token_new(toml_token_type_t type, char *value);

/**
 * @brief Free a token
 *
 * @param token the token
 */
void toml_token_delete(toml_token_t *token);

/**
 * @brief Get the type of a token
 *
 * @param token the token
 * @return toml_token_type_t the type
 */
toml_token_type_t toml_token_get_type(toml_token_t *token);

/**
 * @brief Get the value of a token
 *
 * @param token the token
 * @return char* the value
 */
char *toml_token_get_value(toml_token_t *token);
