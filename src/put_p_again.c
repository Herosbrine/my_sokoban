/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** put_p_again.c
*/
#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

int count_p(char *map)
{
    int i = 0;
    int cp = 0;

    while (map[i] != '\0') {
        if (map[i] == 'P')
            cp++;
        i++;
    }
    return (cp);
}

int *position_p(int cp, char *map)
{
    int k = 0;
    int i = 0;
    int *p_position = malloc(sizeof(int) * cp);

    while (map[i] != '\0') {
        if (map[i] == 'P') {
            p_position[k] = i;
            k++;
        }
        i++;
    }
    return (p_position);
}

void put_p_again(int cp, int *position_p, char *map)
{
    int i = 0;

    while (i < cp) {
        if (map[position_p[i]] == ' ')
            map[position_p[i]] = 'P';
        i++;
    }
}