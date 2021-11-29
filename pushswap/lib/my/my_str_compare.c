/*
** EPITECH PROJECT, 2021
** my_str_compare.c
** File description:
** Created by tanjiro on 11/8/21
*/

int my_str_compare(char const *s1 , char const *s2)
{
    int i = 0;
    while (s1[i] != '\0') {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return 0;
}
