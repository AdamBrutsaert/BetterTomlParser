/*
** EPITECH PROJECT, 2023
** reader.h
** File description:
** reader.h
*/

#pragma once

#include <stdbool.h>
#include <stddef.h>

typedef struct reader reader_t;

/**
 * @brief Allocate a new reader
 *
 * @return reader_t* The new reader
 */
reader_t *reader_new(void);

/**
 * @brief Free a reader
 *
 * @param reader The reader to free
 */
void reader_delete(reader_t *reader);

/**
 * @brief Reserve a minimal amount of bytes
 *
 * @param reader the reader
 * @param bytes the minimal amount of bytes
 * @return true if the reader was able to reserve the bytes
 * @return false if the reader was not able to reserve the bytes
 */
bool reader_reserve(reader_t *reader, size_t bytes);

/**
 * @brief Clear the content of the reader
 *
 * @param reader the reader
 */
void reader_clear(reader_t *reader);

/**
 * @brief Push a string into the reader
 *
 * @param reader the reader
 * @param str the string to push
 * @return true if the string was pushed successfully
 * @return false if an error occured
 */
bool reader_push_string(reader_t *reader, const char *string);

/**
 * @brief Read a file and push its content into the reader
 *
 * @param reader the reader
 * @param path the path of the file to read
 * @return true if the file was read successfully
 * @return false if an error occured
 */
bool reader_push_file(reader_t *reader, const char *path);

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
