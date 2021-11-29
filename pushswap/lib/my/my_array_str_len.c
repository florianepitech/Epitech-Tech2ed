/*
** EPITECH PROJECT, 2021
** my_array_str_len.c
** File description:
** Created by tanjiro on 11/8/21
*/

int my_array_str_len(char **str)
{
    int size = 0;
    while (str[size] != 0)
        size++;
    return size;
}