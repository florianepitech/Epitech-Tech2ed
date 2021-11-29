/*
** EPITECH PROJECT, 2021
** pushswap_rr.c
** File description:
** Created by tanjiro on 11/11/21
*/

#include "include/my.h"
#include "include/sorter.h"
#include "include/pushswap.h"

/*
• ra : rotate l_a toward the beginning, the first element will become the last.
• rb : rotate l_b toward the beginning, the first element will become the last.
• rr : ra and rb at the same time.
 */

void pushswap_ra(int *array1, int len1)
{
    rotate_list_left(array1, len1);
    my_putstr(" ra");
}

void pushswap_rb(int *array2, int len2)
{
    rotate_list_left(array2, len2);
    my_putstr(" rb");
}

void pushswap_rr(int *array1, int *array2, int len1, int len2)
{
    rotate_list_left(array1, len1);
    rotate_list_left(array2, len2);
    my_putstr(" rr");
}