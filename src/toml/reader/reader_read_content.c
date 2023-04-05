/*
** EPITECH PROJECT, 2023
** reader_read_content.c
** File description:
** reader_read_content.c
*/

#include "toml/reader_impl.h"
#include "my/memory.h"

#include <unistd.h>
#include <stdlib.h>

static bool grow(reader_t *reader)
{
    size_t capacity = reader->capacity * 2 + !reader->capacity;
    char *content = malloc(capacity + 1);

    if (content == NULL)
        return false;
    my_memcpy(content, reader->content, reader->length);
    free(reader->content);
    reader->content = content;
    reader->capacity = capacity;
    return true;
}

bool reader_read_content(reader_t *reader)
{
    ssize_t bytes_read = 0;

    do {
        reader->length += bytes_read;
        if (reader->length == reader->capacity && !grow(reader)) {
            free(reader->content);
            return false;
        }
        bytes_read = read(
            reader->fd,
            reader->content + reader->length,
            reader->capacity - reader->length
        );
    } while (bytes_read > 0);
    if (bytes_read == -1) {
        free(reader->content);
        return false;
    }
    reader->content[reader->length] = '\0';
    return true;
}
