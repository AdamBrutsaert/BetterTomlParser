/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main.c
*/

#include "my/reader.h"
#include "my/stdio.h"

int main(void)
{
    reader_t *reader = reader_new();

    if (!reader_push_string(reader, "Hello world!\n")) {
        reader_delete(reader);
        return 84;
    }
    if (!reader_push_file(reader, "test.toml")) {
        reader_delete(reader);
        return 84;
    }
    while (reader_peek(reader) != '\0')
        my_putc(reader_next(reader));
    reader_delete(reader);
    return 0;
}
