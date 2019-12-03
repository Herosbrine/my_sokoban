/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** new_pos.c
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

int get_lenght_n(char *map)
{
    int i = 0;

    for (; map[i] != '\n'; i++);
    return (i+1);
}

void new_pos2(int *x, int *y, char ch, char *map)
{
    int size = get_lenght_n(map);
    if (ch == (char)KEY_UP) {
        (*y)--;
        if (map[*x+*y*size] == '#')
            (*y)++;
    }
    if (ch == (char)KEY_DOWN) {
        (*y)++;
        if (map[*x+*y*size] == '#')
            (*y)--;
    }
}

void new_pos(int *x, int *y, char ch, char *map)
{
    int size = get_lenght_n(map);

    if (ch == (char)KEY_LEFT) {
        (*x)--;
        if (map[*x+*y*size] == '#')
            (*x)++;
    }
    if (ch == (char)KEY_RIGHT) {
        (*x)++;
        if (map[*x+*y*size] == '#')
            (*x)--;
    }
    new_pos2(x, y, ch, map);
}