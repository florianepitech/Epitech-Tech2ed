/*
** EPITECH PROJECT, 2021
** print_file_date.c
** File description:
** print_file_date
*/

#include <sys/stat.h>
#include <stdlib.h>
#include <time.h>

#include "../include/print_file_info.h"
#include "../include/my.h"

void print_file_date(struct stat *s)
{
    long date = s->st_atim.tv_sec;
    char *str_date = my_str_cut(ctime(&date), 4, 16);
    my_putnstr(str_date,16);
    free(str_date);
}