/*
** EPITECH PROJECT, 2023
** reader_reserve.c
** File description:
** reader_reserve.c
*/

#include "my/reader_impl.h"
#include "my/memory.h"

#include <stdlib.h>

static bool reallocate(reader_t *reader, size_t bytes)
{
    char *buffer = malloc(bytes);

    if (buffer == NULL)
        return false;
    my_memcpy(buffer, reader->buffer, reader->length);
    free(reader->buffer);
    reader->buffer = buffer;
    reader->capacity = bytes;
    return true;
}

bool reader_reserve(reader_t *reader, size_t bytes)
{
    if (reader->capacity >= bytes)
        return true;
    return reallocate(reader, bytes);
}
