/*
** EPITECH PROJECT, 2019
** src
** File description:
** error_management.c
*/

#include "my.h"

char error_management(char *map, char **argv)
{
    int i = 0;

    if (!my_strcmp(argv[1], "-h")) {
        my_putstr("USAGE\n");
        my_putstr("     ./my_sokoban map\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("     map  file representing the warehouse map"\
        " , containing '#' for walls,\n");
        my_putstr("          'P' for the player, 'X' for boxes"\
        " and '0' for storage locations.\n");
    }
    while (map[i] != '\0') {
        if (map[i] != '#' && map[i] != 'P' && map[i] != '\n' \
        && map[i] != 'O' && map[i] != 'X' && map[i] != ' ')
            return (84);
        i++;
    }
    return (0);

}