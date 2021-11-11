/*
** EPITECH PROJECT, 2021
** sort_array_files_by_name.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../../include/file_info.h"
#include "../../include/my.h"

void sort_array_files_by_name(FileInfo *array)
{
    int swapped = 1;

    while (swapped == 1) {
        swapped = 0;
        for (int i = 0; i < array_files_len(array) - 1; i++) {
            if (my_str_compare(array[i].na_name, array[i + 1].na_name) > 0) {
                array_files_swap(array, i, i + 1);
                swapped = 1;
            }
        }
    }
}