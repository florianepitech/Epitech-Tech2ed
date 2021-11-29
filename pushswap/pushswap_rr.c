/*
** EPITECH PROJECT, 2021
** pushswap_r.c
** File description:
** Created by tanjiro on 11/11/21
*/

#include "include/my.h"
#include "include/sorter.h"
#include "include/pushswap.h"

/*
• rra : rotate l_a toward the end, the last element will become the first.
• rrb : rotate l_b toward the end, the last element will become the first.
• rrr : rra and rrb at the same time.
 */

void pushswap_rra(int *array1, int len1)
{
    rotate_list_right(array1, len1);
    my_putstr(" rra");
}

void pushswap_rrb(int *array2, int len2)
{
    rotate_list_right(array2, len2);
    my_putstr(" rrb");
}

void pushswap_rrr(int *array1, int *array2, int len1, int len2)
{
    rotate_list_right(array1, len1);
    rotate_list_right(array2, len2);
    my_putstr(" rrr");
}