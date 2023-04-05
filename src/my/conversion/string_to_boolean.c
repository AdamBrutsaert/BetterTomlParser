/*
** EPITECH PROJECT, 2023
** string_to_boolean.c
** File description:
** string_to_boolean.c
*/

#include "my/conversion.h"
#include "my/string.h"

bool string_to_boolean(const char *string)
{
    return !my_strcmp(string, "true");
}
