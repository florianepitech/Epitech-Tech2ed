/*
** EPITECH PROJECT, 2021
** b_myls.c
** File description:
** b_myls
*/

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>

#include "include/myls.h"
#include "include/print_file_info.h"
#include "include/check_option.h"
#include "include/my.h"

//Parameters
/*
 *  -l : use a long listing format
 *  -R : list subdirectories recursively
 *  -d : list directorie s themselves, not their contents
 *  -r : reverse order while sorting
 *  -t : sort by time, newest first; see --time
 */

int l_OPTION = 0;
int R_OPTION = 0;
int d_OPTION = 0;
int r_OPTION = 0;
int t_OPTION = 0;

int main(int argc, char **argv)
{
    check_option("-l", &l_OPTION, argc, argv);
    check_option("-R", &R_OPTION, argc, argv);
    check_option("-d", &d_OPTION, argc, argv);
    check_option("-r", &r_OPTION, argc, argv);
    check_option("-t", &t_OPTION, argc, argv);

    char **files = remove_options(argc, argv);
    int files_len = my_array_str_len(files);

    if (files_len == 0) {
        free(files);
        return my_ls();
    } else {
        return my_ls_files(files, files_len);
    }
}

int my_ls()
{
    DIR *d;
    struct dirent *dir;

    d = opendir(".");
    if (d) {
        int i = 0;
        while ((dir = readdir(d)) != NULL) {
            my_ls_file(dir->d_name, i);
            i++;
        }
        closedir(d);
    }
    my_putchar('\n');
    return 0;
}

int my_ls_files(char **files, int files_len)
{
    for (int i = 0; i < files_len; i++) {
        my_ls_file(files[i], i);
    }
    my_putchar('\n');
    return 1;
}

void my_ls_file(char *file_name, int i)
{
    if (file_name[0] == '.') return;
    if (!l_OPTION) {
        if (i != 0) my_putstr("  ");
        my_putstr(file_name);
    } else {
        print_file_info(file_name);
    }
}