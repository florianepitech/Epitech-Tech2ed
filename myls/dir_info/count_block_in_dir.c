/*
** EPITECH PROJECT, 2021
** count_block_in_dir.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../include/file_info.h"
#include "../include/dir_info.h"

extern int a_OPTION;

int count_block_in_dir(FileInfo *files)
{
    int size = 0;

    for (int i = 0; i < array_files_len(files); i++) {
        if (!a_OPTION && files[i].name[0] == '.')
            continue;
        size += files[i].block_size;
    }

    return (size);
}