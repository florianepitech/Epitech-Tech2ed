/*
** EPITECH PROJECT, 2021
** print_file_info.h
** File description:
** print_file_info
*/

#ifndef HEADER_PRINT_FILE_INFO
#define HEADER_PRINT_FILE_INFO

int print_file_info(char *file_name);

void print_permission(struct stat *s);
void print_file_nlink(struct stat *s);
void print_user_owner(struct stat *s);
void print_file_size(struct stat *s);
void print_file_date(struct stat *s);

#endif
