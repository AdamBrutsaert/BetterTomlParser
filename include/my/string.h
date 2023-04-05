/*
** EPITECH PROJECT, 2023
** string.h
** File description:
** string.h
*/

#pragma once

#include <stddef.h>

size_t my_strlen(const char *string);
char *my_strncpy(char *dest, const char *src, size_t bytes);
char *my_strndup(const char *string, size_t bytes);
char *my_strcpy(char *dest, const char *src);
char *my_strdup(const char *string);
