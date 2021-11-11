/*
** EPITECH PROJECT, 2021
** dir_info.h
** File description:
** Created by tanjiro on 11/9/21
*/

#ifndef HEADER_DIRINFO
#define HEADER_DIRINFO

#include "file_info.h"

int count_files_in_dir(char *path);
int count_block_in_dir(FileInfo *files);
FileInfo *get_files_info_in_dir(char *str);

#endif
