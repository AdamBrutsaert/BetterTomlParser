/*
** EPITECH PROJECT, 2023
** reader_impl.h
** File description:
** reader_impl.h
*/

#pragma once

#include "reader.h"

#include <stddef.h>
#include <stdbool.h>

struct reader {
    int fd;
    char *content;
    size_t length;
    size_t capacity;
    size_t current;
};

/**
 * @brief Read the content of the file
 *
 * @param reader The reader
 * @return true If the file was read successfully
 * @return false If the file could not be read
 */
bool reader_read_content(reader_t *reader);
