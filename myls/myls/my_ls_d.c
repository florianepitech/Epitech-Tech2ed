/*
** EPITECH PROJECT, 2021
** my_ls_d.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../include/my.h"
#include "../include/file_info.h"

extern int l_OPTION;

int my_ls_d(void)
{
    FileInfo fileInfo = get_file_info(".", ".");
    if (l_OPTION == 0)
        my_putstr(fileInfo.name);
    else
        print_file_info(fileInfo);
    my_putchar('\n');
    return 0;
}