/*
** EPITECH PROJECT, 2023
** toml_lexer_is_string_character.c
** File description:
** toml_lexer_is_string_character.c
*/

#include "toml/lexer_impl.h"

bool toml_lexer_is_string_character(char character)
{
    return (character >= 'A' && character <= 'Z')
        || (character >= 'a' && character <= 'z')
        || (character >= '0' && character <= '9')
        || character == '_'
        || character == '-';
}
