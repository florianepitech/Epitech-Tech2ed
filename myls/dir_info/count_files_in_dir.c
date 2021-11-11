/*
** EPITECH PROJECT, 2021
** count_files_in_dir.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include <sys/stat.h>
#include <pwd.h>
#include <stdlib.h>
#include <dirent.h>

int count_files_in_dir(char *path)
{
    DIR *d = opendir(path);
    struct dirent *dir;
    int count = 0;

    if (d) {
        while ((dir = readdir(d)) != NULL)
            count++;
        closedir(d);
    }
    return count;
}
