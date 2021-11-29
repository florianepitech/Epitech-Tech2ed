/*
** EPITECH PROJECT, 2021
** bubble_sort.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../include/sorter.h"

static void bubble_check(int *array, int size, int *swapped);

void bubble_sort(int *array, int size)
{
    int swapped = 1;
    while (swapped == 1) {
        swapped = 0;
        bubble_check(array, size, &swapped);
    }
}

static void bubble_check(int *array, int size, int *swapped)
{
    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i + 1]) {
            swap_element(array, i, i + 1);
            *swapped = 1;
        }
    }
}