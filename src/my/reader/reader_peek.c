/*
** EPITECH PROJECT, 2023
** reader_peek.c
** File description:
** reader_peek.c
*/

#include "my/reader_impl.h"

char reader_peek(reader_t *reader)
{
    if (reader->cursor >= reader->length)
        return '\0';
    return reader->buffer[reader->cursor];
}
