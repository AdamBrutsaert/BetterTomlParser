/*
** EPITECH PROJECT, 2023
** reader_clear.c
** File description:
** reader_clear.c
*/

#include "my/reader_impl.h"

#include <stdlib.h>

void reader_clear(reader_t *reader)
{
    reader->length = 0;
    reader->cursor = 0;
}
