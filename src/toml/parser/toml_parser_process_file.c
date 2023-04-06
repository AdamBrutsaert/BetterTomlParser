/*
** EPITECH PROJECT, 2023
** toml_parser_process_file.c
** File description:
** toml_parser_process_file.c
*/

#include "toml/parser_impl.h"

toml_table_t *toml_parser_process_file(toml_parser_t *parser, const char *file)
{
    reader_clear(parser->reader);
    toml_lexer_clear(parser->lexer);
    if (!reader_push_file(parser->reader, file))
        return NULL;
    if (!toml_lexer_process(parser->lexer, parser->reader))
        return NULL;
    return toml_parser_process(parser);
}
