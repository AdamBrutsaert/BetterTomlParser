/*
** EPITECH PROJECT, 2023
** toml_lexer_is_whitespace_character.c
** File description:
** toml_lexer_is_whitespace_character.c
*/

#include "toml/lexer_impl.h"

bool toml_lexer_is_whitespace_character(char c)
{
    return c == ' ' || c == '\t' || c == '\r';
}
