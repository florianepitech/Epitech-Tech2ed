/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "my.h"

char *my_strcat(char *dest, char *src)
{
    int size_dest = my_strlen(dest);
    int size_src = my_strlen(src);
    for (int i = 0; i < size_src; i++) {
        dest[size_dest + i] = src[i];
    }
    dest[size_dest + size_src] = '\0';
    return dest;
}