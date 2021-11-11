/*
** EPITECH PROJECT, 2021
** array_files_swap.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../../include/file_info.h"

void array_files_swap(FileInfo *filesInfo, int index1, int index2)
{
    FileInfo cp_index1 = filesInfo[index1];
    filesInfo[index1] = filesInfo[index2];
    filesInfo[index2] = cp_index1;
}