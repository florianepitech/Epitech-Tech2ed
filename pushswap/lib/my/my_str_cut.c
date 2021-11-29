/*
** EPITECH PROJECT, 2021
** my_str_cut.c
** File description:
** my_str_cut
*/

#include <stdlib.h>

char *my_str_cut(char *str, int start, int end)
{
    if (end <= start)
        return "";
    char *result = malloc(sizeof(char) * (end - start + 1));
    for (int i = 0; i < (end - start); i++) {
        result[i] = str[start + i];
    }
    result[end - start] = '\0';
    return result;
}