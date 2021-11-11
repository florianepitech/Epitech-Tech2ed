/*
** EPITECH PROJECT, 2021
** my_ls_rec.c
** File description:
** Created by tanjiro on 11/10/21
*/

#include <stdlib.h>
#include <dirent.h>

#include "../include/my.h"
#include "../include/myls.h"
#include "../include/dir_info.h"

static int path_is_dir(char *path);

void my_ls_rec(char *path)
{
    FileInfo *fileInfo = get_files_info_in_dir(path);
    int len = array_files_len(fileInfo);

    my_putchar('\n');
    my_putstr(path);
    my_putstr("\ntotal ");
    my_putint(count_block_in_dir(fileInfo));
    my_putchar('\n');

    for (int i = 0; i < len; i++) {
        FileInfo file_temp = fileInfo[i];

        if (file_temp.is_dir && file_temp.name[0] != '.') {
            print_file_info(file_temp);
            my_putchar('\n');
        }
    }
    for (int i = 0; i < len; i++) {
        if (path_is_dir(fileInfo[i].path) == 1)
            my_ls_rec(fileInfo[i].path);
    }
}
static int path_is_dir(char *path)
{
    int len = my_strlen(path);
    DIR* dir = opendir(path);

    if (path[len - 1] == '.' && path[len - 1] == '/')
        return 0;
    if (path[len - 1] == '.' && path[len - 1] == '.')
        return 0;

    if (dir) {
        closedir(dir);
        return 1;
    }
    return 0;
}
