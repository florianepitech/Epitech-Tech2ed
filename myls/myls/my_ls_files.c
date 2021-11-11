/*
** EPITECH PROJECT, 2021
** my_ls_files.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include <stdlib.h>

#include "../include/my.h"
#include "../include/myls.h"
#include "../include/file_info.h"

int my_ls_files(char **files, int files_len)
{
    FileInfo *files_info = malloc(sizeof(FileInfo) * (files_len + 1));

    for (int i = 0; i < files_len; i++)
        files_info[i] = get_file_info(files[i], files[i]);
    files_info[files_len].name = 0;
    my_ls_sort(files_info);

    my_ls_print_files(files_info);

    return 0;
}