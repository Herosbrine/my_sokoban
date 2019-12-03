/*
** EPITECH PROJECT, 2019
** src
** File description:
** my_sokoban.c
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

int count_nbr_y(int y, char *buffer)
{
    int x = 0;

    while (buffer[x] != 'P') {
        if (buffer[x] == '\n')
            y = y + 1;
        x++;
    }
    buffer[x] = ' ';
    return (y);
}

int find_p(int x, char *buffer)
{
    int x2 = 0;
    while (buffer[x2] != 'P') {
        if (buffer[x2] == '\n')
            x = -1;
        x = x + 1;
        x2++;
    }
    return (x);
}

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
        new_pos(&x, &y,getch(), map);
    }
}