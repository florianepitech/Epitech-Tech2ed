/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** 
*/

#include <unistd.h>

int my_putstr(char const *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        char char_at = str[i];
        write(1, &char_at, 1);
    }
    return i;
}
