/*
** EPITECH PROJECT, 2021
** print_file_size.c
** File description:
** print_file_size
*/

#include <stdio.h>
#include <sys/stat.h>

#include "../include/print_file_info.h"
#include "../include/my.h"

void print_file_size(struct stat *s)
{
    my_putint(s->st_size);
}