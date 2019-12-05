/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** put_p_again.c
*/
#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

void erase_pre_box(char *map)
{
    int i = 0;

    while (map[i] != '\0') {
        if (map[i] == 'X')
            map[i] = ' ';
        i++;
    }
}