/*
** EPITECH PROJECT, 2019
** src
** File description:
** my_sokoban.c
*/

#include <ncurses.h>
#include <stdlib.h>

void Player_mvup(int x, int y)
{
    write(1, ' ', 1);
    y--;
    refresh();
}

void Player_mvdown(int x, int y)
{
    write(1, ' ', 1);
    y++;
    refresh();
}

void Player_mvleft(int x, int y)
{
    write(1, ' ', 1);
    x--;
    refresh();
}

void Player_right(int x, int y)
{
    write(1, ' ', 1);
    x++;
    refresh();
}

int move_p(int x, int y, char *buffer)
{
    while(1) {
        noecho();
        curs_set(FALSE);
    switch(getch()) {
        case 'z':
            Player_mvup(x, y);
        break;
        case 's':
            Player_mvdown(x, y);
            break;
        case 'q':
            Player_mvleft(x, y);
            break;
        case 'd':
            Player_right(x, y);
            break;
    }
    }
}

int count_nbr_y(int y, char *buffer)
{
    int x = 0;

    while (buffer[x] != 'P') {
        if (buffer[x] == '\n')
            y = y + 1;
        x++;
    }
    return (y);
}

int find_p(int x, char *buffer)
{
    while (buffer[x] != 'P') {
        x = x + 1;
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
    x = find_p(x, map);
    y = count_nbr_y(y, map);
    while (1) {
        mvprintw(0, 0, "%s", map);
        refresh();
        move_p(x, y, map);
    }
}