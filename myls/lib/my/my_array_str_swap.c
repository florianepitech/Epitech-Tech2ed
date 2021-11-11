/*
** EPITECH PROJECT, 2021
** my_array_str_swap.c
** File description:
** Created by tanjiro on 11/9/21
*/

void my_array_str_swap(char **array, int index1, int index2)
{
    char *cp_index1 = array[index1];
    array[index1] = array[index2];
    array[index2] = cp_index1;
}