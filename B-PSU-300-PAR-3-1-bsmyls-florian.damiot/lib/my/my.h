/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my
*/

#ifndef HEADER_MY
#define HEADER_MY

int my_strlen(char *str);
void my_putchar(char c);
int my_putint(int in);
void my_putstr(char *str);
void my_putnstr(char *str, int n);

char *my_str_cut(char *str, int start, int end);
int my_str_equals(char *str1, char *str2);
int my_str_contain_char(char *str, char c);
int my_array_str_len(char **str);
int my_str_compare(char *str1, char *str2);

#endif
