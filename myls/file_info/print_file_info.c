/*
** EPITECH PROJECT, 2021
** print_file_info.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../include/my.h"
#include "../include/file_info.h"

extern int s_OPTION;

void print_file_info(FileInfo fileInfo)
{
    if (s_OPTION) {
        my_putint(fileInfo.block_size);
        my_putchar(' ');
    }
    my_putstr(fileInfo.permission);
    my_putstr(" ");
    my_putint(fileInfo.nlink);
    my_putstr(" ");
    my_putstr(fileInfo.gr_name);
    my_putstr(" ");
    my_putstr(fileInfo.pw_name);
    my_putstr(" ");
    my_putint(fileInfo.size);
    my_putstr(" ");
    my_putstr(fileInfo.date);
    my_putstr(" ");
    my_putstr(fileInfo.name);
}