/*
** EPITECH PROJECT, 2021
** pushswap_p.c
** File description:
** Created by tanjiro on 11/11/21
*/

#include "include/my.h"
#include "include/sorter.h"
#include "include/pushswap.h"

/*
• pa : take the first element from l_b and move it to the first position on the l_a list (nothing will happen if l_b is empty).
• pb : take the first element from l_a and move it to the first position on the l_b list (nothing will happen if l_a is empty).
 */

void pushswap_pb(int *array1, int *array2, int *len1, int *len2)
{
    array2[*len2] = 0;
    *len2 = *len2 + 1;
    rotate_list_right(array2, *len2);
    array2[0] = array1[0];
    rotate_list_left(array1, *len1);
    *len1 = *len1 - 1;
    my_putstr(" pb");
}

void pushswap_pa(int *array1, int *array2, int *len1, int *len2)
{
    array1[*len1] = 0;
    *len1 = *len1 + 1;
    rotate_list_right(array1, *len1);
    array1[0] = array2[0];
    rotate_list_left(array2, *len2);
    *len2 = *len2 - 1;
    my_putstr(" pa");
}