/*
** EPITECH PROJECT, 2021
** my_putnstr.c
** File description:
** my_putnstr
*/

#include <unistd.h>

int my_putnstr(char const *str, int n)
{
    int i;
    for (i = 0; str[i] != '\0' && i < n; i++) {
        char charAt = str[i];
        write(1, &charAt, 1);
    }
    return i;
}
