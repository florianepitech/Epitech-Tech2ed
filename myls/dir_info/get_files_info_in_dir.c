/*
** EPITECH PROJECT, 2021
** get_files_info_in_dir.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include <pwd.h>
#include <stdlib.h>
#include <dirent.h>

#include "../include/my.h"
#include "../include/file_info.h"
#include "../include/dir_info.h"

static char *get_sub_path(char *path, char *file_name);

FileInfo *get_files_info_in_dir(char *path)
{
    int count = count_files_in_dir(path);
    FileInfo *files_info = malloc(sizeof (FileInfo) * (count + 1));

    DIR *d = opendir(path);
    struct dirent *dir;
    int i = 0;

    if (d) {
        while ((dir = readdir(d)) != NULL) {
            char *sub_path = get_sub_path(path, dir->d_name);
            files_info[i] = get_file_info(dir->d_name, sub_path);
            i++;
        }
        closedir(d);
    }
    files_info[count].name = 0;
    sort_array_files_by_name(files_info);
    return files_info;
}


static char *get_sub_path(char *path, char *file_name)
{
    if (my_str_equals(".", path))
        return my_str_concat("./", file_name);

    return my_str_concat(path, my_str_concat("/", file_name));
}