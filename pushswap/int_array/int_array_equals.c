/*
** EPITECH PROJECT, 2021
** int_array_equals.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../include/int_array.h"

int int_array_equals(int *array1, int *array2, int len1, int len2)
{
    if (len1 != len2)
        return (0);

    for (int i = 0; i < len1; i++) {
        if (array1[i] != array2[i])
            return (0);
    }
    return (1);
}