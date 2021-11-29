/*
** EPITECH PROJECT, 2021
** print_int_array.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../include/my.h"

void print_int_array(int *array, int len, int ln)
{
    int i = 0;

    while (i < len) {
        my_putint(array[i]);
        if (i != len - 1)
            my_putstr(", ");
        i++;
    }
    if (ln == 1)
        my_putchar('\n');
}