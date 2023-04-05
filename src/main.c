/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main.c
*/

#include "my/reader.h"
#include "toml/lexer.h"

int main(void)
{
    reader_t *reader = reader_new();
    toml_lexer_t *lexer = toml_lexer_new();

    if (reader == NULL || lexer == NULL) {
        reader_delete(reader);
        toml_lexer_delete(lexer);
        return false;
    }
    if (!reader_push_file(reader, "test.toml")
        || !toml_lexer_process(lexer, reader)) {
        toml_lexer_delete(lexer);
        reader_delete(reader);
        return 84;
    }
    reader_delete(reader);
    toml_lexer_delete(lexer);
    return 0;
}
