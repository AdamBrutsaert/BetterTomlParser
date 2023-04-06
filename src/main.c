/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main.c
*/

#include "toml/parser.h"

int main(void)
{
    toml_parser_t *parser = toml_parser_new();
    toml_table_t *table;

    if (!parser)
        return 84;
    table = toml_parser_process_file(parser, "test.toml");
    if (!table)
        return 84;
    printf("%s\n", toml_variant_get_string(toml_table_get(table, "value")));
    toml_table_delete(table);
    toml_parser_delete(parser);
    return 0;
}
