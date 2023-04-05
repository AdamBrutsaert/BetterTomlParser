/*
** EPITECH PROJECT, 2023
** conversion.h
** File description:
** conversion.h
*/

#pragma once

#include <stdbool.h>
#include <stdint.h>

bool string_is_integer(const char *string);
intmax_t string_to_integer(const char *string);

bool string_is_float(const char *string);
double string_to_float(const char *string);

bool string_is_boolean(const char *string);
bool string_to_boolean(const char *string);
