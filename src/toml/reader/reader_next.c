/*
** EPITECH PROJECT, 2023
** reader_next.c
** File description:
** reader_next.c
*/

#include "toml/reader_impl.h"

char reader_next(reader_t *reader)
{
    char character;

    if (reader->current >= reader->length)
        return '\0';
    character = reader->content[reader->current];
    reader->current++;
    return character;
}
