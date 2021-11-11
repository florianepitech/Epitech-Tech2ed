/*
** EPITECH PROJECT, 2021
** parse_permission.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include <stdlib.h>
#include <sys/stat.h>

#include "../include/file_info.h"

char *parse_permission(struct stat *s)
{
    char *result = malloc(sizeof(char*) * (10 + 1));
    result[0] = (S_ISDIR(s->st_mode)) ? 'd' : '-';
    result[1] = (s->st_mode & S_IRUSR) ? 'r' : '-';
    result[2] = (s->st_mode & S_IWUSR) ? 'w' : '-';
    result[3] = (s->st_mode & S_IXUSR) ? 'x' : '-';
    result[4] = (s->st_mode & S_IRGRP) ? 'r' : '-';
    result[5] = (s->st_mode & S_IWGRP) ? 'w' : '-';
    result[6] = (s->st_mode & S_IXGRP) ? 'x' : '-';
    result[7] = (s->st_mode & S_IROTH) ? 'r' : '-';
    result[8] = (s->st_mode & S_IWOTH) ? 'w' : '-';
    result[9] = (s->st_mode & S_IXOTH) ? 'x' : '-';
    result[10] = 0;
    return result;
}