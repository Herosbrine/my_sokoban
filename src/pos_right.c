/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** new_pos.c
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

void pos_right(int *x, int *y, char ch, char *map)
{
    int size = get_lenght_n(map);

    if (ch == (char)KEY_RIGHT) {
        (*x)++;
        if (map[*x + *y * size] == '#')
            (*x)--;
        if (map[*x + *y * size] == 'X' && map[(*x+1) + *y * size] != '#' &&
            map[(*x+1) + *y * size] != 'X') {
            map[*x + *y * size] = ' ';
            map[(*x+1) + *y * size] = 'X';
        }
        if ((map[(*x+1) + *y * size] == '#' && map[*x + *y * size] == 'X') ||
            (map[(*x+1) + *y * size] == 'X' && map[*x + *y * size] == 'X'))
            (*x)--;
    }
}