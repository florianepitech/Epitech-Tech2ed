/*
** EPITECH PROJECT, 2021
** my_ls_all.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include "../include/dir_info.h"
#include "../include/myls.h"
#include "../include/my.h"

extern int R_OPTION;
extern int l_OPTION;
extern int a_OPTION;

static void my_ls_all_r(FileInfo file_info);
static void my_ls_all_R(FileInfo *files, int len);

int my_ls_all(void)
{
    FileInfo *files = get_files_info_in_dir(".");
    int len = array_files_len(files);

    my_ls_sort(files);
    my_ls_all_R(files, len);
    my_ls_print_files(files);

    if (R_OPTION) {
        for (int i = 0; i < len; i++) {
            my_ls_all_r(files[i]);
        }
    }
}

static void my_ls_all_R(FileInfo *files, int len)
{
    if (R_OPTION)
        my_putstr(".:\n");
    if (l_OPTION) {
        my_putstr("total ");
        my_putint(count_block_in_dir(files));
        my_putchar('\n');
    }
}

static void my_ls_all_r(FileInfo file_info)
{
    if (file_info.is_dir && file_info.name[0] != '.') {
        my_ls_rec(my_str_concat("./", file_info.name));
    }
}