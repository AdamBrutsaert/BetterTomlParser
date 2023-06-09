/*
** EPITECH PROJECT, 2023
** lexer.h
** File description:
** lexer.h
*/

#pragma once

#include "my/reader.h"
#include "toml/token.h"

typedef struct toml_lexer toml_lexer_t;

/**
 * @brief Allocate a new lexer
 *
 * @param reader a reader
 * @return toml_lexer_t* the new lexer
 */
toml_lexer_t *toml_lexer_new(void);

/**
 * @brief Free a lexer
 *
 * @param lexer the lexer to free
 */
void toml_lexer_delete(toml_lexer_t *lexer);

/**
 * @brief Clear a lexer
 *
 * @param lexer the lexer to free
 */
void toml_lexer_clear(toml_lexer_t *lexer);

/**
 * @brief Tokenize content of a reader
 *
 * @param lexer the lexer
 * @param reader the reader
 */
bool toml_lexer_process(toml_lexer_t *lexer, reader_t *reader);

/**
 * @brief Get the next token and move the cursor forward
 *
 * @param lexer the lexer
 * @return toml_token_t* the next token
 */
toml_token_t *toml_lexer_next(toml_lexer_t *lexer);

/**
 * @brief Get the next token
 *
 * @param lexer the lexer
 * @return toml_token_t* the next token
 */
toml_token_t *toml_lexer_peek(toml_lexer_t *lexer);

/**
 * @brief Get the next token type
 *
 * @param lexer the lexer
 * @return toml_token_type_t the next token type
 */
toml_token_type_t toml_lexer_peek_type(toml_lexer_t *lexer);
