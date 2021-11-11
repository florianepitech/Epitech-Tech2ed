/*
** EPITECH PROJECT, 2021
** check_option_strict.c
** File description:
** Created by tanjiro on 11/8/21
*/

#include "../include/my.h"

void check_option_strict(char *option, int *option_int, int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        if (my_str_equals(option, argv[i])) {
            *option_int = 1;
            break;
        }
    }
}
