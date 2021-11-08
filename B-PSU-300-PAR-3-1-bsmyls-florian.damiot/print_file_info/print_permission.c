/*
** EPITECH PROJECT, 2021
** print_permission.c
** File description:
** print_permission
*/

#include <stdio.h>
#include <sys/stat.h>

#include "../include/print_file_info.h"
#include "../include/my.h"

void print_permission(struct stat *s)
{
    my_putstr( (S_ISDIR(s->st_mode)) ? "d" : "-");
    my_putstr( (s->st_mode & S_IRUSR) ? "r" : "-");
    my_putstr( (s->st_mode & S_IWUSR) ? "w" : "-");
    my_putstr( (s->st_mode & S_IXUSR) ? "x" : "-");
    my_putstr( (s->st_mode & S_IRGRP) ? "r" : "-");
    my_putstr( (s->st_mode & S_IWGRP) ? "w" : "-");
    my_putstr( (s->st_mode & S_IXGRP) ? "x" : "-");
    my_putstr( (s->st_mode & S_IROTH) ? "r" : "-");
    my_putstr( (s->st_mode & S_IWOTH) ? "w" : "-");
    my_putstr( (s->st_mode & S_IXOTH) ? "x" : "-");
}