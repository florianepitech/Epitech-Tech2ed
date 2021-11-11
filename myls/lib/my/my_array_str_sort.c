/*
** EPITECH PROJECT, 2021
** my_array_str_sort.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "my.h"

void my_array_str_sort(char **array)
{
    int swapped = 1;
    while (swapped == 1) {
        swapped = 0;
        for (int i = 0; i < my_array_str_len(array) - 1; i++) {
            if (my_str_compare(array[i], array[i + 1]) > 0) {
                my_array_str_swap(array, i, i + 1);
                swapped = 1;
            }
        }
    }
}