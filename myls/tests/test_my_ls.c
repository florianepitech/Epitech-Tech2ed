/*
** EPITECH PROJECT, 2021
** test_my_ls.c
** File description:
** Created by tanjiro on 11/11/21
*/

#include <criterion/criterion.h>
#include "../include/dir_info.h"
#include "../include/file_info.h"
#include "../include/myls.h"

Test(test1, test1)
{
    get_files_info_in_dir("../");
}