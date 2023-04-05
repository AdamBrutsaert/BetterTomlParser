/*
** EPITECH PROJECT, 2023
** string_is_boolean.c
** File description:
** string_is_boolean.c
*/

#include "my/conversion.h"
#include "my/string.h"

bool string_is_boolean(const char *string)
{
    return !my_strcmp(string, "true") || !my_strcmp(string, "false");
}
