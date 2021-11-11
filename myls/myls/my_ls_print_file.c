/*
** EPITECH PROJECT, 2021
** my_ls_print_file.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../include/myls.h"
#include "../include/my.h"

extern int a_OPTION;
extern int l_OPTION;

void my_ls_print_file(FileInfo file_info)
{
    if (file_info.name[0] != '.' || a_OPTION == 1) {
        if (!l_OPTION)
            my_putstr(file_info.name);
        else
            print_file_info(file_info);
        my_putchar('\n');
    }
}