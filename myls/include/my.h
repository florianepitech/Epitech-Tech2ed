/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my
*/

#ifndef HEADER_MY
#define HEADER_MY

#define COLOR_RED   "\x1B[31m"
#define COLOR_GREEN   "\x1B[32m"
#define COLOR_YELLOW   "\x1B[33m"
#define COLOR_BLUE   "\x1B[34m"
#define COLOR_MAGENTA   "\x1B[35m"
#define COLOR_CYAN   "\x1B[36m"
#define COLOR_WHITE   "\x1B[37m"
#define COLOR_RESET "\x1B[0m"

int my_strlen(char *str);
void my_putchar(char c);
int my_putint(int in);
void my_putstr(char *str);
void my_putnstr(char *str, int n);
char *my_strdup(char *src);
char *my_str_concat(char *str1, char *str2);
char *my_strcat(char *dest, char *src);

char *my_str_cut(char *str, int start, int end);
int my_str_equals(char *str1, char *str2);
int my_str_contain_char(char *str, char c);
int my_array_str_len(char **str);
int my_str_compare(char *str1, char *str2);
char *my_str_to_lowercase(char *str);
char *my_str_to_uppercase(char *str);

void my_array_str_swap(char **array, int index1, int index2);
void my_array_str_sort(char **array);
void my_array_str_print(char **array, int ln);

int my_char_type(char c);

#endif
