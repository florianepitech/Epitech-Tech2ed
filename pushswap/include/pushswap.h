/*
** EPITECH PROJECT, 2021
** pushswap.h
** File description:
** Created by tanjiro on 11/9/21
*/

#ifndef HEADER_PUSHSWAP
#define HEADER_PUSHSWAP

int main(int argc, char **argv);
void pushswap(int *array, int len);

void pushswap_sa(int *array1);
void pushswap_sb(int *array2);
void pushswap_sc(int *array1, int *array2);

void pushswap_pa(int *array1, int *array2, int *len1, int *len2);
void pushswap_pb(int *array1, int *array2, int *len1, int *len2);

void pushswap_rr(int *array1, int *array2, int len1, int len2);
void pushswap_ra(int *array1, int len1);
void pushswap_rb(int *array2, int len2);

void pushswap_rrr(int *array1, int *array2, int len1, int len2);
void pushswap_rra(int *array1, int len1);
void pushswap_rrb(int *array2, int len2);

#endif
