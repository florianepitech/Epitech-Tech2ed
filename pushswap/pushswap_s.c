/*
** EPITECH PROJECT, 2021
** pushswap_s.c
** File description:
** Created by tanjiro on 11/11/21
*/

#include "include/my.h"
#include "include/sorter.h"
#include "include/pushswap.h"

/*
• sa : swap the first two elements of l_a (nothing will happen if there aren’t enough elements).
• sb : swap the first two elements of l_b (nothing will happen if there aren’t enough elements).
• sc : sa and sb at the same time.
 */

void pushswap_sa(int *array1)
{
    swap_element(array1, 0, 1);
    my_putstr(" sa");
}

void pushswap_sb(int *array1)
{
    swap_element(array1, 0, 1);
    my_putstr(" sb");
}

void pushswap_sc(int *array1, int *array2)
{
    swap_element(array1, 0, 1);
    swap_element(array2, 0, 1);
    my_putstr(" ss");
}