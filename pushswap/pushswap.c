/*
** EPITECH PROJECT, 2021
** pushswap.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include <stdlib.h>
#include <stdio.h>

#include "include/my.h"
#include "include/sorter.h"
#include "include/int_array.h"
#include "include/pushswap.h"

/*
• sa : swap the first two elements of l_a (nothing will happen if there aren’t enough elements).
• sb : swap the first two elements of l_b (nothing will happen if there aren’t enough elements).
• sc : sa and sb at the same time.

• pa : take the first element from l_b and move it to the first position on the l_a list (nothing will happen if l_b is empty).
• pb : take the first element from l_a and move it to the first position on the l_b list (nothing will happen if l_a is empty).

• ra : rotate l_a toward the beginning, the first element will become the last.
• rb : rotate l_b toward the beginning, the first element will become the last.
• rr : ra and rb at the same time.

• rra : rotate l_a toward the end, the last element will become the first.
• rrb : rotate l_b toward the end, the last element will become the first.
• rrr : rra and rrb at the same time.
 */

static void pushswap_sorter(int *array1, int *array2, int *len1, int *len2);

static void rrr(int *array1, int *array2, int len);

void pushswap(int *array1, int len1)
{
    int final_len = len1;
    int len2 = 0;
    int *array2 = malloc(sizeof (int) * len1);

    if (int_array_is_sort(array1, len1)) {
        my_putchar('\n');
        return;
    }

    my_putstr("sb");
    while (len1 != 0)
        pushswap_sorter(array1, array2, &len1, &len2);

    for (int i = 0; i < final_len; i++)
        pushswap_pa(array1, array2, &len1, &len2);

    my_putchar('\n');
    free(array1);
    free(array2);
}

static void pushswap_sorter(int *array1, int *array2, int *len1, int *len2)
{
    int index_min = 0;

    for (int i = 1; i < *len1; i++) {
        if (array1[i] < array1[index_min])
            index_min = i;
    }
    for (int i = 0; i < index_min; i++)
        pushswap_ra(array1, *len1);
    pushswap_pb(array1, array2, len1, len2);
}