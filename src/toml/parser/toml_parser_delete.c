/*
** EPITECH PROJECT, 2023
** toml_parser_delete.c
** File description:
** toml_parser_delete.c
*/

#include "toml/parser_impl.h"

#include <stdlib.h>

void toml_parser_delete(toml_parser_t *parser)
{
    if (parser == NULL)
        return;
    toml_lexer_delete(parser->lexer);
    reader_delete(parser->reader);
    free(parser);
}
