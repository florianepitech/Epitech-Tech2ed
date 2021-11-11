/*
** EPITECH PROJECT, 2021
** my_char_type.c
** File description:
** Created by tanjiro on 11/9/21
*/

int my_char_type(char c)
{
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else if (c >= 'A' && c <= 'Z') {
        return 2;
    } else if (c >= '0' && c <= '9') {
        return 3;
    }
    return 4;
}