/*
** EPITECH PROJECT, 2021
** b_myls.h
** File description:
** b_myls
*/

#ifndef HEADER_MYLS
#define HEADER_MYLS

#include "file_info.h"

int main(int argc, char **argv);

int my_ls_d(void);
int my_ls_all(void);
void my_ls_rec(char *path);
int my_ls_files(char **files, int files_len);

void my_ls_sort(FileInfo *files);
void my_ls_print_file(FileInfo file_info);
void my_ls_print_files(FileInfo *files);

#endif
