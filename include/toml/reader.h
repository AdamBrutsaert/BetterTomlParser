/*
** EPITECH PROJECT, 2023
** reader.h
** File description:
** reader.h
*/

#pragma once

typedef struct reader reader_t;

/**
 * @brief Allocate a new reader
 *
 * @param path Path to the file to read
 * @return reader_t* The new reader
 */
reader_t *reader_new(const char *path);

/**
 * @brief Free a reader
 *
 * @param reader The reader to free
 */
void reader_delete(reader_t *reader);

/**
 * @brief Get the next character and move the cursor forward
 *
 * @param reader The reader
 * @return char The next character
 */
char reader_next(reader_t *reader);

/**
 * @brief get the next character
 *
 * @param reader The reader
 * @return char The next character
 */
char reader_peek(reader_t *reader);
