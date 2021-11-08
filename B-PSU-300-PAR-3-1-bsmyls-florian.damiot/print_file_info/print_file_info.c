/*
** EPITECH PROJECT, 2021
** print_file_info.c
** File description:
** Created by tanjiro on 11/8/21
*/

#include <stdlib.h>
#include <sys/stat.h>

#include "../include/print_file_info.h"
#include "../include/my.h"

int print_file_info(char *file_name)
{
    struct stat *s = malloc(sizeof(struct stat));

    lstat(file_name, s);
    print_permission(s);
    my_putstr(" ");
    print_file_nlink(s);
    my_putstr(" ");
    print_user_owner(s);
    my_putstr(" ");
    print_file_size(s);
    my_putstr(" ");
    print_file_date(s);
    my_putstr(" ");
    my_putstr(file_name);
    my_putstr("\n");
    free(s);
    return 0;
}