/*
** EPITECH PROJECT, 2023
** parser.h
** File description:
** parser.h
*/

#pragma once

#include "table.h"
#include "variant.h"

typedef struct toml_parser toml_parser_t;

/**
 * @brief Allocate a new parser
 *
 * @return toml_parser_t* the new parser
 */
toml_parser_t *toml_parser_new(void);

/**
 * @brief Free a parser
 *
 * @param parser the parser to free
 */
void toml_parser_delete(toml_parser_t *parser);

/**
 * @brief Parse a file
 *
 * @param parser the parser
 * @param file the file
 * @return toml_table_t* the parsed table
 */
toml_table_t *toml_parser_process_file(toml_parser_t *parser, const char *file);
