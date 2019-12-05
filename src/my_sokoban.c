/*
** EPITECH PROJECT, 2019
** src
** File description:
** my_sokoban.c
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

char game_loop(int x, char *map)
{
    int y = 0;
    int cp = count_p(map);
    int *p_position = position_p(cp, map);
    int a = count_o(map);
    int *o_position = position_o(a, map);
    int r = count_box(map);
    int *box_position = position_box(r, map);

    x = find_p(map);
    y = count_nbr_y(y, map);
    while (1) {
        check_o(a, o_position, map);
        mvprintw(0, 0, "%s", map);
        mvprintw(y, x, "P");
        refresh();
        pos_up(&x, &y, getch(), map);
        if (check_end(a, o_position, map) == 1) {
            put_p_again(cp, p_position, map);
            erase_pre_box(map);
            put_box_again(r, box_position, map);
            check_o(a, o_position, map);
            return (game_loop(x, map));
        }
    }
}