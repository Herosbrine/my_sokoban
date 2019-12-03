/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** find_p.c
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

int find_p(int x, char *buffer)
{
    int x2 = 0;
    while (buffer[x2] != 'P') {
        if (buffer[x2] == '\n')
            x = -1;
        x = x + 1;
        x2++;
    }
    return (x);
}