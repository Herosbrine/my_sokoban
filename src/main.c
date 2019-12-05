/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** main.c
*/

#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <ncurses.h>

int main(int ac, char **argv)
{
    int x = 0;
    char *map = NULL;

    initscr();
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);

    if (ac != 2)
        return 84;
    map = read_map(argv[1]);
    if (map == NULL)
        return (84);
    if (error_management(map, argv) == 84)
        return (84);
    game_loop(x, map);
    return (0);
}