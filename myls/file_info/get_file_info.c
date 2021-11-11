/*
** EPITECH PROJECT, 2021
** get_file_info.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include <stdlib.h>
#include <time.h>
#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>

#include "../include/my.h"
#include "../include/file_info.h"

FileInfo get_file_info(char *file_name, char *path)
{
    struct stat *s = malloc(sizeof(struct stat));
    FileInfo result;

    lstat(file_name, s);
    result.name = my_strdup(file_name);
    result.name_lower = my_str_to_lowercase(file_name);
    result.path = my_strdup(path);
    result.nlink = s->st_nlink;
    result.size = s->st_size;
    result.block_size = s->st_blocks / 2;
    result.date = parse_date(s);
    result.time = s->st_atim.tv_sec;
    result.gr_name = parse_gr_name(s);
    result.pw_name = parse_pw_name(s);
    result.permission = parse_permission(s);
    result.na_name = result.name_lower;
    result.is_dir = ((s->st_mode & S_IFMT) == S_IFDIR) ? 1 : 0;
    result.type = s->st_mode & S_IFMT;

    if (file_name[0] == '.')
        result.na_name = my_str_cut(result.na_name, 1, my_strlen(file_name));
    free(s);
    return result;
}

char *parse_gr_name(struct stat *s)
{
    struct group *grp = getgrgid(s->st_gid);
    return (grp->gr_name);
}

char *parse_pw_name(struct stat *s)
{
    struct passwd *pwd = getpwuid(s->st_gid);
    return (pwd->pw_name);
}

char *parse_date(struct stat *s)
{
    long date = s->st_ctim.tv_sec;
    return my_str_cut(ctime(&date), 4, 16);
}