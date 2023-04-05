/*
** EPITECH PROJECT, 2023
** reader_new.c
** File description:
** reader_new.c
*/

#include "my/reader_impl.h"
#include "my/memory.h"

#include <fcntl.h>

reader_t *reader_new(void)
{
    return my_calloc(sizeof(reader_t));
}
