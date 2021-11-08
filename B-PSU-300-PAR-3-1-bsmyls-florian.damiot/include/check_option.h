/*
** EPITECH PROJECT, 2021
** check_option.h
** File description:
** Created by tanjiro on 11/8/21
*/

#ifndef HEADER_CHECK_OPTION
#define HEADER_CHECK_OPTION

void check_option(char *option, int *option_int, int argc, char **argv);
void check_option_strict(char *option, int *option_int, int argc, char **argv);
void check_option_concat(char *option, int *option_int, int argc, char **argv);
int count_options(int argc, char **argv);
char **remove_options(int argc, char **argv);

#endif
