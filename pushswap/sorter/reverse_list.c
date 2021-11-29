/*
** EPITECH PROJECT, 2021
** reverse_list.c
** File description:
** Created by tanjiro on 11/10/21
*/

#include "../include/sorter.h"

void reverse_list(int *array, int len)
{
    for (int i = 0; i < (len / 2); i++)
        swap_element(array, i, len - i - 1);
}