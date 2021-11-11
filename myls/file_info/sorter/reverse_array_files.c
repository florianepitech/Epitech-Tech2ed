/*
** EPITECH PROJECT, 2021
** reverse_array_files.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../../include/file_info.h"

void reverse_array_files(FileInfo *files)
{
    int len = array_files_len(files);

    for (int i = 0; i < (len / 2); i++)
        array_files_swap(files, i, len - i - 1);
}