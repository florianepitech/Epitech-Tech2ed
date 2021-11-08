/*
** EPITECH PROJECT, 2021
** print_file_info.c
** File description:
** print_file_info
*/

#include <sys/stat.h>

#include "../include/my.h"

void print_file_nlink(struct stat *s)
{
    my_putint(s->st_nlink);
}
