/*
** EPITECH PROJECT, 2019
** src
** File description:
** my_sokoban.c
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"
#include <unistd.h>

void print_map(char *map, int *delay, int y, int x)
{
    mvprintw(0, 0, "%s", map);
    mvprintw(y, x, "P");
    mvprintw(0, 35,"score : %d", *delay);
    mvprintw(1, 35,"score max : 100");
    mvprintw(2, 35,"record : 85");
    refresh();
}

void checker(int a, int *delay, int *o_position, char *map)
{
    check_o(a, o_position, map);
    if (check_end(a, o_position, map) == 1) {
        endwin();
        printf("WINNNNNNNNERRR !!!!\nnombre de coup : %d", *delay - 2);
        exit (0);
    }
}

void game_loop(int x, char *map)
{
    int y = 0, cp = count_p(map), *p_position = position_p(cp, map);
    int ch = 0, a = count_o(map), *o_position = position_o(a, map);
    int r = count_box(map), *box_position = position_box(r, map);
    int delay = 0;

    x = find_p(map);
    y = count_nbr_y(y, map);
    print_map(map, &delay, y, x);
    while (delay < 102) {
        checker(a, &delay, o_position, map);
        ch = getch();
        pos_up(&x, &y, &delay, ch, map);
        print_map(map, &delay, y, x);
        if (ch == ' ') {
            put_p_again(cp, p_position, map);
            erase_pre_box(map);
            put_box_again(r, box_position, map);
            check_o(a, o_position, map);
            return (game_loop(x, map));
        }
        delay++;
    }
        endwin();
        printf("LOSER !! hahahaha,\nnombre de coup : %d\n", delay - 2);
        exit (84);
}