/*
** EPITECH PROJECT, 2021
** my_str_contain_char.c
** File description:
** my_str_contain_char
*/

#include "my.h"

int my_str_contain_char(char *str, char c)
{
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] == c)
            return 1;
    }
    return 0;
}