/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** count_nbr_y.c
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

int count_nbr_y(int y, char *buffer)
{
    int x = 0;

    while (buffer[x] != 'P') {
        if (buffer[x] == '\n')
            y = y + 1;
        x++;
    }
    buffer[x] = ' ';
    return (y);
}