/*
** EPITECH PROJECT, 2023
** reader_push_string.c
** File description:
** reader_push_string.c
*/

#include "my/reader_impl.h"
#include "my/string.h"
#include "my/memory.h"

static bool reserve_if_needed(reader_t *reader, size_t bytes_needed)
{
    size_t capacity = reader->capacity;

    if (capacity - reader->length >= bytes_needed)
        return true;
    if (capacity == 0)
        capacity = 1;
    while (capacity - reader->length < bytes_needed)
        capacity *= 2;
    return reader_reserve(reader, capacity);
}

bool reader_push_string(reader_t *reader, const char *string)
{
    size_t length = my_strlen(string);

    if (!reserve_if_needed(reader, length + 1))
        return false;
    my_memcpy(reader->buffer + reader->length, string, length);
    reader->length += length;
    reader->buffer[reader->length] = '\0';
    return true;
}
