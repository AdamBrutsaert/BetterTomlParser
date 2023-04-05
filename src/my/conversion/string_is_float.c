/*
** EPITECH PROJECT, 2023
** string_is_float.c
** File description:
** string_is_float.c
*/

#include "my/conversion.h"

bool string_is_float(const char *string)
{
    if (*string == '-' || *string == '+')
        string++;
    while (*string >= '0' && *string <= '9')
        string++;
    if (*string == '.')
        string++;
    while (*string >= '0' && *string <= '9')
        string++;
    return *string == '\0';
}
