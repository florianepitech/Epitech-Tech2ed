/*
** EPITECH PROJECT, 2021
** check_option_concat.c
** File description:
** Created by tanjiro on 11/8/21
*/

#include "../include/my.h"

void check_option_concat(char *option, int *option_int, int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        if (argv[i][0] == '-') {
            if (my_str_contain_char(argv[i], option[1]))
                *option_int = 1;
        }
    }
}