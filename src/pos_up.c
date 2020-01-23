/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** new_pos.c
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

void pos_up(int *x, int *y, int *delay, char ch, char *map)
{
    int size = get_lenght_n(map);

    if (ch == (char)KEY_UP) {
        (*y)--;
        if (map[*x + *y * size] == '#')
            (*y)++;
        if (map[*x + *y * size] == 'B') {
            *delay = *delay - 50;
            map[*x + *y * size] = ' ';
        }
        if (map[*x + *y * size] == '.') {
            *delay = *delay + 35;
            map[*x + *y * size] = ' ';
        }
        if (map[*x + *y * size] == 'X' && map[*x + (*y-1) * size] != '#' &&
            map[*x + (*y-1) * size] != 'X') {
            map[*x + *y * size] = ' ';
            map[*x + (*y-1) * size] = 'X';
        }
        if ((map[*x + (*y-1) * size] == '#' && map[*x + *y * size] == 'X') ||
            (map[*x + (*y-1) * size] == 'X' && map[*x + *y * size] == 'X'))
            (*y)++;
        }
    pos_down(x, y, delay, ch, map);
}