/*
** EPITECH PROJECT, 2021
** pushswap.c
** File description:
** Created by tanjiro on 11/9/21
*/

#include <stdlib.h>

#include "include/my.h"
#include "include/pushswap.h"

int main(int argc, char **argv)
{
    int *array = malloc(sizeof(int) * (argc - 1));
    for (int i = 1; i < argc; i++)
        array[i - 1] = my_strtoi(argv[i]);
    pushswap(array, argc - 1);
}