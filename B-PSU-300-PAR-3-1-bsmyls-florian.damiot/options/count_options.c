/*
** EPITECH PROJECT, 2021
** count_options.c
** File description:
** Created by tanjiro on 11/8/21
*/

int count_options(int argc, char **argv)
{
    int count = 0;
    for (int i = 1; i < argc; i++) {
        if (argv[i][0] == '-')
            count++;
    }
    return count;
}