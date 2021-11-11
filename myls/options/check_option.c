/*
** EPITECH PROJECT, 2021
** check_option.c
** File description:
** Created by tanjiro on 11/8/21
*/

#include "../include/options.h"

void check_option(char *option, int *option_int, int argc, char **argv)
{
    check_option_strict(option, option_int, argc, argv);
    if (*option_int == 0)
        check_option_concat(option, option_int, argc, argv);
}