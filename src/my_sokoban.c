/*
** EPITECH PROJECT, 2019
** src
** File description:
** my_sokoban.c
*/

#include <ncurses.h>
#include <stdlib.h>
/*
char my_sokoban(char *map, char **argv)
{
    int i = 0;
}
*/
int move_p(int *x, int *y, char *p)
{
    while (true) {
        noecho();
        curs_set(FALSE);
        mvprintw(*y, *x, "%s", p);
        //refresh();
        switch (getch())
        {
        case 'd':
            x++;
        break;
        case 'q':
            x--;
        break;
        case 'z':
            y--;
        break;
        case 's':
            y++;
        break;
    default:
        break;
        }
        clear();
    }
    return (0);
}
char find_p(int x, int y, char *str)
{
    char *p = 0;
    p = malloc(sizeof(*p));
    while (str[x] != '\0') {
        if (str[x] == '\n')
            y = y + 1;
        if (str[x] == 'P') {
            p[0] = str[x];
            move_p(&x, &y, p);
        }
        x++;
    }
    return (0);
}
int game_loop(char *map)
{
    int x = 0;
    int y = 0;

    initscr();
    noecho();
    curs_set(FALSE);
    while (1) {
        mvprintw(0, 0, "%s", map);
        refresh();
        find_p(x, y, map);
        //move_p(&x, &y, map);
    }
}