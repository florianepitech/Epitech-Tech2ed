/*
** EPITECH PROJECT, 2021
** remove_options.c
** File description:
** Created by tanjiro on 11/8/21
*/

#include <stdlib.h>
#include "../include/options.h"

char **remove_options(int argc, char **argv)
{
    int total_options = count_options(argc, argv);
    char **result = malloc((sizeof(char*) * (argc - total_options + 1)));
    int count = 0;

    for (int i = 1; i < argc; i++) {
        if (argv[i][0] != '-') {
            result[count] = argv[i];
            count++;
        }
    }
    result[count] = 0;
    return result;
}
