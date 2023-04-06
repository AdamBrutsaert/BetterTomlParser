/*
** EPITECH PROJECT, 2023
** toml_parser_new.c
** File description:
** toml_parser_new.c
*/

#include "toml/parser_impl.h"
#include "my/memory.h"

toml_parser_t *toml_parser_new(void)
{
    toml_parser_t *parser = my_calloc(sizeof(toml_parser_t));

    if (parser == NULL)
        return NULL;
    parser->reader = reader_new();
    parser->lexer = toml_lexer_new();
    if (parser->reader == NULL || parser->lexer == NULL) {
        toml_parser_delete(parser);
        return NULL;
    }
    return parser;
}
