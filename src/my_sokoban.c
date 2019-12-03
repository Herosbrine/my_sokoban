/*
** EPITECH PROJECT, 2019
** src
** File description:
** my_sokoban.c
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

int game_loop(char *map)
{
    int x = 0;
    int y = 0;

    initscr();
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    x = find_p(x, map);
    y = count_nbr_y(y, map);
    while (1) {
        mvprintw(0, 0, "%s", map);
        mvprintw(y, x, "P");
        refresh();
        pos_up(&x, &y, getch(), map);
    }
}