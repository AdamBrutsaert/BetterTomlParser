/*
** EPITECH PROJECT, 2023
** reader_new.c
** File description:
** reader_new.c
*/

#include "toml/reader_impl.h"
#include "my/memory.h"

#include <fcntl.h>

reader_t *reader_new(const char *path)
{
    reader_t *reader = my_calloc(sizeof(reader_t));

    if (reader == NULL)
        return NULL;
    reader->fd = open(path, O_RDONLY);
    if (reader->fd == -1) {
        reader_delete(reader);
        return NULL;
    }
    if (!reader_read_content(reader)) {
        reader_delete(reader);
        return NULL;
    }
    return reader;
}
