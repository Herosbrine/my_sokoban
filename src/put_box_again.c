/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** put_box_again.c
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

int count_box(char *map)
{
    int i = 0;
    int r = 0;

    while (map[i] != '\0') {
        if (map[i] == 'X')
            r++;
        i++;
    }
    return (r);
}

int *position_box(int r, char *map)
{
    int k = 0;
    int i = 0;
    int *p_position = malloc(sizeof(int) * r);

    while (map[i] != '\0') {
        if (map[i] == 'X') {
            p_position[k] = i;
            k++;
        }
        i++;
    }
    return (p_position);
}

void put_box_again(int r, int *position_p, char *map)
{
    int i = 0;

    while (i < r) {
        if (map[position_p[i]] == ' ')
            map[position_p[i]] = 'X';
        i++;
    }
}