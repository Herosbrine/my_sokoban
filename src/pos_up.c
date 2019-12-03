/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** new_pos.c
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

void pos_up(int *x, int *y, char ch, char *map)
{
    int size = get_lenght_n(map);

    if (ch == (char)KEY_UP) {
        (*y)--;
        if (map[*x + *y * size] == '#')
            (*y)++;
        if (map[*x + *y * size] == 'X' && map[*x + (*y-1) * size] != '#' &&
            map[*x + (*y-1) * size] != 'X') {
            map[*x + *y * size] = ' ';
            map[*x + (*y-1) * size] = 'X';
        }
        if ((map[*x + (*y-1) * size] == '#' && map[*x + *y * size] == 'X') ||
            (map[*x + (*y-1) * size] == 'X' && map[*x + *y * size] == 'X'))
            (*y)++;
        }
    pos_down(x, y, ch, map);
}