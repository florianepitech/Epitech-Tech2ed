/*
** EPITECH PROJECT, 2021
** my_str_to_lowercase.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "my.h"

char *my_str_to_lowercase(char *str)
{
    char *result = my_strdup(str);
    for (int i = 0; i < my_strlen(result); i++) {
        if (my_char_type(result[i]) == 2)
            result[i] = result[i] + 32;
    }
    return result;
}