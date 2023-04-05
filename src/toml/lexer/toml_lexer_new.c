/*
** EPITECH PROJECT, 2023
** toml_lexer_new.c
** File description:
** toml_lexer_new.c
*/

#include "toml/lexer_impl.h"
#include "my/memory.h"

toml_lexer_t *toml_lexer_new(void)
{
    return my_calloc(sizeof(toml_lexer_t));
}
