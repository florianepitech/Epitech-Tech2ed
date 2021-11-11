/*
** EPITECH PROJECT, 2021
** my_str_concat.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include <stdlib.h>

#include "my.h"

char *my_str_concat(char *str1, char *str2)
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);
    char *result = malloc(sizeof(char) * (len1 + len2 + 1));

    for (int i = 0; i < len1; i++)
        result[i] = str1[i];
    for (int i = 0; i < len2; i++)
        result[len1 + i] = str2[i];
    result[len1 + len2] = 0;

    return (result);
}