/*
** EPITECH PROJECT, 2023
** reader_next.c
** File description:
** reader_next.c
*/

#include "my/reader_impl.h"

char reader_next(reader_t *reader)
{
    if (reader->cursor >= reader->length)
        return '\0';
    reader->cursor++;
    return reader->buffer[reader->cursor - 1];
}
