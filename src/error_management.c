/*
** EPITECH PROJECT, 2019
** src
** File description:
** error_management.c
*/

#include "my.h"

char error_management(char *map)
{
    int i = 0;

    while (map[i] != '\0') {
        if (map[i] != '#' && map[i] != 'P' && map[i] != '\n' &&
            map[i] != 'O' && map[i] != 'X' && map[i] != ' ')
            return (84);
        i++;
    }
    return (0);
}