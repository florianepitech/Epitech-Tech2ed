/*
** EPITECH PROJECT, 2021
** rotate_list_right.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../include/sorter.h"

void rotate_list_right(int *array, int len)
{
    for (int i = len - 1; i > 0; i--)
        swap_element(array, i, i - 1);
}