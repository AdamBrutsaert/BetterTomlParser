/*
** EPITECH PROJECT, 2023
** toml_lexer_push_token.c
** File description:
** toml_lexer_push_token.c
*/

#include "toml/lexer_impl.h"
#include "my/memory.h"

#include <stdlib.h>

static bool grow(toml_lexer_t *lexer)
{
    size_t capacity = lexer->capacity * 2 + !lexer->capacity;
    toml_token_t **tokens = malloc(capacity * sizeof(toml_token_t *));

    if (tokens == NULL)
        return false;
    my_memcpy(tokens, lexer->tokens, lexer->length * sizeof(toml_token_t *));
    free(lexer->tokens);
    lexer->tokens = tokens;
    lexer->capacity = capacity;
    return true;
}

bool toml_lexer_push_token(
    toml_lexer_t *lexer,
    toml_token_type_t type,
    char *value
)
{
    if (lexer->length == lexer->capacity && !grow(lexer))
        return false;
    lexer->tokens[lexer->length] = toml_token_new(type, value);
    if (lexer->tokens[lexer->length] == NULL)
        return false;
    lexer->length++;
    return true;
}
