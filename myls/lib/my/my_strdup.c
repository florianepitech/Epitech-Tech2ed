/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char *src)
{
    int size = my_strlen(src);
    char *str = malloc(sizeof(char*) * (size + 1));
    for (int i = 0; i < size; i++) {
        str[i] = src[i];
    }
    str[size] = '\0';
    return str;
}