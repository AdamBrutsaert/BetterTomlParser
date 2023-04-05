/*
** EPITECH PROJECT, 2023
** reader_get_previous.c
** File description:
** reader_get_previous.c
*/

#include "my/reader_impl.h"
#include "my/string.h"

char *reader_get_previous(reader_t *reader, size_t bytes)
{
    if (reader->cursor < bytes)
        return NULL;
    return my_strndup(reader->buffer + reader->cursor - bytes, bytes);
}
