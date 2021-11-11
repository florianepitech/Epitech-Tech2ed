/*
** EPITECH PROJECT, 2021
** my_array_str_print.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "my.h"

void my_array_str_print(char **array, int ln)
{
    int i = 0;

    while (i < my_array_str_len(array)) {
        my_putstr(array[i]);
        if (*array[i + 1] != 0)
            my_putstr(", ");
        i++;
    }
    if (ln == 1)
        my_putchar('\n');
}