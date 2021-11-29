/*
** EPITECH PROJECT, 2021
** int_array_is_sort.c
** File description:
** Created by tanjiro on 11/10/21
*/

int int_array_is_sort(int *array, int len)
{
    for (int i = 0; i < len - 1; i++) {
        if (array[i] > array[i + 1])
            return 0;
    }
    return (1);
}