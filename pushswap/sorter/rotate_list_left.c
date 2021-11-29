/*
** EPITECH PROJECT, 2021
** rotate_list_left.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../include/sorter.h"

void rotate_list_left(int *array, int len)
{
    for (int i = 1; i < len - 1; i++)
        swap_element(array, i, i + 1);
    swap_element(array, len - 1, 0);
}