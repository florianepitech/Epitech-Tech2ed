/*
** EPITECH PROJECT, 2021
** my_ls_sort.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../include/file_info.h"

extern int r_OPTION;
extern int t_OPTION;

void my_ls_sort(FileInfo *files)
{
    sort_array_files_by_name(files);
    if (t_OPTION == 1)
        sort_array_files_by_time(files);
    if (r_OPTION == 1)
        reverse_array_files(files);
}