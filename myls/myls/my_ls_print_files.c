/*
** EPITECH PROJECT, 2021
** my_ls_print_files.cpp
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../include/myls.h"

void my_ls_print_files(FileInfo *files)
{
    for (int i = 0; files[i].name != 0; i++)
        my_ls_print_file(files[i]);
}
