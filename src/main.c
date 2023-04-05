/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main.c
*/

#include "my/reader.h"
#include "toml/lexer.h"
#include "my/stdio.h"

static void print_lexer(toml_lexer_t *lexer)
{
    toml_token_t *token = toml_lexer_next(lexer);
    char *value;

    while (token != NULL) {
        my_putc('[');
        my_putu(toml_token_get_type(token));
        my_puts("] ");
        value = toml_token_get_value(token);
        if (value[0] == '\n') {
            my_puts("\\n");
        } else {
            my_puts(toml_token_get_value(token));
        }
        my_putc('\n');
        token = toml_lexer_next(lexer);
    }
}

int main(void)
{
    reader_t *reader = reader_new();
    toml_lexer_t *lexer = toml_lexer_new();

    if (reader == NULL || lexer == NULL) {
        reader_delete(reader);
        toml_lexer_delete(lexer);
        return 84;
    }
    if (!reader_push_file(reader, "test.toml")
        || !toml_lexer_process(lexer, reader)) {
        toml_lexer_delete(lexer);
        reader_delete(reader);
        return 84;
    }
    print_lexer(lexer);
    reader_delete(reader);
    toml_lexer_delete(lexer);
    return 0;
}
