/*
** EPITECH PROJECT, 2019
** src
** File description:
** my_sokoban.c
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

void print_map(char *map, int y, int x, int *ch)
{
        mvprintw(0, 0, "%s", map);
        mvprintw(y, x, "P");
        refresh();
        *ch = getch();
}

void checker(int a, int *o_position, char *map)
{
    check_o(a, o_position, map);
    if (check_end(a, o_position, map) == 1) {
            endwin();
            exit (0);
    }
}

char game_loop(int x, char *map)
{
    int y = 0, cp = count_p(map), *p_position = position_p(cp, map);
    int ch = 0, a = count_o(map),  *o_position = position_o(a, map);
    int r = count_box(map),  *box_position = position_box(r, map);

    x = find_p(map);
    y = count_nbr_y(y, map);
    while (1) {
        checker(a, o_position, map);
        print_map(map, y, x, &ch);
        pos_up(&x, &y, ch, map);
        if (ch == ' ') {
            put_p_again(cp, p_position, map);
            erase_pre_box(map);
            put_box_again(r, box_position, map);
            check_o(a, o_position, map);
            return (game_loop(x, map));
        }
    }
}