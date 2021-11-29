/*
** EPITECH PROJECT, 2021
** my_str_equals.c
** File description:
** my_str_equals
*/

#include "my.h"

int my_str_equals(char *str1, char *str2)
{
    if (my_strlen(str1) != my_strlen(str2))
        return 0;
    for (int i = 0; i < my_strlen(str1); i++) {
        if (str1[i] != str2[i])
            return 0;
    }
    return 1;
}