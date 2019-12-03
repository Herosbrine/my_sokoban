/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** get_lenght_n.c
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