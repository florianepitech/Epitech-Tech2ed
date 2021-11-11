/*
** EPITECH PROJECT, 2021
** file_info.h
** File description:
** Created by tanjiro on 11/9/21
*/

#ifndef HEADER_FILEINFO
#define HEADER_FILEINFO

#include <sys/stat.h>

typedef struct file_info {
    char    *permission;
    int     nlink;
    char    *gr_name;
    char    *pw_name;
    int     size;
    int     block_size;
    char    *date;
    long    time;
    char    *name;
    char    *na_name;
    char    *name_lower;
    char    *path;
    int     is_dir;
    int     type;
} FileInfo;

FileInfo get_file_info(char *file_name, char *path);

void print_file_info(FileInfo fileInfo);
int array_files_len(FileInfo *files);

char *parse_permission(struct stat *s);
char *parse_date(struct stat *s);
char *parse_gr_name(struct stat *s);
char *parse_pw_name(struct stat *s);

//sorter
void array_files_swap(FileInfo *filesInfo, int index1, int index2);
void reverse_array_files(FileInfo *files);
void sort_array_files_by_name(FileInfo *array);
void sort_array_files_by_time(FileInfo *array);

#endif