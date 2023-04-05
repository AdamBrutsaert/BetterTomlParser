/*
** EPITECH PROJECT, 2023
** string_to_float.c
** File description:
** string_to_float.c
*/

#include "my/conversion.h"

double string_to_float(const char *string)
{
    double integer_part = 0;
    double decimal_part = 0;
    double decimal_power = 10;
    int8_t sign = 1;

    if (*string == '-' || *string == '+') {
        sign -= 2 * (*string == '-');
        string++;
    }
    for (; *string >= '0' && *string <= '9'; string++)
        integer_part = integer_part * 10 + sign * (*string - '0');
    if (*string == '.') {
        string++;
        for (; *string >= '0' && *string <= '9'; string++) {
            decimal_part = decimal_part + ((*string - '0') / decimal_power);
            decimal_power *= 10;
        }
    }
    return integer_part + decimal_part;
}
