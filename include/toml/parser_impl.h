/*
** EPITECH PROJECT, 2023
** parser_impl.h
** File description:
** parser_impl.h
*/

#pragma once

#include "parser.h"
#include "my/reader.h"
#include "lexer.h"
#include "variant.h"

struct toml_parser {
    reader_t *reader;
    toml_lexer_t *lexer;

    toml_table_t *root;
    toml_table_t *current;

    char *current_key;
    toml_variant_t *current_value;
};

toml_table_t *toml_parser_process(toml_parser_t *parser);

bool toml_parser_process_key_value(toml_parser_t *parser);
bool toml_parser_process_key(toml_parser_t *parser);
bool toml_parser_process_value(toml_parser_t *parser);

// Values
bool toml_parser_process_integer(toml_parser_t *parser);
bool toml_parser_process_float(toml_parser_t *parser);
bool toml_parser_process_boolean(toml_parser_t *parser);
bool toml_parser_process_string(toml_parser_t *parser);

// Checkers
bool toml_parser_is_key(toml_parser_t *parser);
bool toml_parser_is_value(toml_parser_t *parser);
