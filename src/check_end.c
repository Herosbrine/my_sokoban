/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** check_end.c
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

int check_end(int a, int *position_o, char *map)
{
    int i = 0;
    int end = 0;

    while (i < a) {
        if (map[position_o[i]] == 'X')
            end++;
        i++;
        if (end == a)
            return(1);
    }
    return(0);
}