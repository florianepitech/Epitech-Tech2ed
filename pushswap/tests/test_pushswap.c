/*
** EPITECH PROJECT, 2021
** test_pushswap.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include <criterion/criterion.h>
#include "../include/int_array.h"
#include "../include/sorter.h"

Test (swap_element, index1_greater_than_index2)
{
    int array [6] = { 1 , 2 , 3 , 4 , 5 , 6 };
    int index1 = 2;
    int index2 = 4;
    swap_element(array, index1, index2);
    cr_assert_eq(array[index1], 5);
    cr_assert_eq(array[index2], 3);
}

Test (bubble_sort, little_array)
{
    int array[] = { 8 , 7 , 0 , 9 , 4 , 3 };
    int array_sorted[] = { 0 , 3 , 4 , 7 , 8 , 9 };
    bubble_sort(array, 6);
    cr_assert(int_array_equals(array, array_sorted, 6, 6) == 1);
}