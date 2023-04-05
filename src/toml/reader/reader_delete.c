/*
** EPITECH PROJECT, 2023
** reader_delete.c
** File description:
** reader_delete.c
*/

#include "toml/reader_impl.h"

#include <unistd.h>
#include <stdlib.h>

void reader_delete(reader_t *reader)
{
    if (reader == NULL)
        return;
    if (reader->fd != -1)
        close(reader->fd);
    free(reader->content);
    free(reader);
}
