/*
** EPITECH PROJECT, 2021
** array_files_len.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../include/file_info.h"

int array_files_len(FileInfo *files)
{
    int c = 0;

    while (files[c].name != 0)
        c++;
    return (c);
}