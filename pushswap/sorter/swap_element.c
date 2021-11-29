/*
** EPITECH PROJECT, 2021
** swap_element.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../include/my.h"
#include "../include/sorter.h"

void swap_element(int *list, int index1, int index2)
{
    int cp_index1 = list[index1];
    list[index1] = list[index2];
    list[index2] = cp_index1;
}