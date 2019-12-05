/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** help_option.c
*/
#include <stdlib.h>
#include "my.h"

int help_option(char **argv)
{
    if (!my_strcmp(argv[1], "-h")) {
        my_putstr("USAGE\n");
        my_putstr("     ./my_sokoban map\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("     map  file representing the warehouse map"\
        " , containing '#' for walls,\n");
        my_putstr("          'P' for the player, 'X' for boxes"\
        " and '0' for storage locations.\n");
        exit (0);
    }
    return (0);
}