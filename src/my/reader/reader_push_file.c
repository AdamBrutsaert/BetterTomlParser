/*
** EPITECH PROJECT, 2023
** reader_push_file.c
** File description:
** reader_push_file.c
*/

#include "my/reader_impl.h"
#include "my/memory.h"

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

static bool grow_buffer(char **buffer, size_t *capacity)
{
    size_t new_capacity = *capacity * 2 + !(*capacity);
    char *new_buffer = malloc(new_capacity + 1);

    if (new_buffer == NULL)
        return false;
    my_memcpy(new_buffer, *buffer, *capacity);
    free(*buffer);
    *buffer = new_buffer;
    *capacity = new_capacity;
    return true;
}

static char *read_file_content(int fd)
{
    char *buffer = NULL;
    size_t length = 0;
    size_t capacity = 0;
    ssize_t bytes_read = 0;

    do {
        length += bytes_read;
        if (length == capacity && !grow_buffer(&buffer, &capacity)) {
            free(buffer);
            return NULL;
        }
        bytes_read = read(fd, buffer + length, capacity - length);
    } while (bytes_read > 0);
    if (bytes_read == -1) {
        free(buffer);
        return NULL;
    }
    buffer[length] = '\0';
    return buffer;
}

bool reader_push_file(reader_t *reader, const char *path)
{
    int fd = open(path, O_RDONLY);
    char *content;

    if (fd == -1)
        return false;
    content = read_file_content(fd);
    if (content == NULL) {
        close(fd);
        return false;
    }
    if (!reader_push_string(reader, content)) {
        free(content);
        close(fd);
        return false;
    }
    free(content);
    close(fd);
    return true;
}
