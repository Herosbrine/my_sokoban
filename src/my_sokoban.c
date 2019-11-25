/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** my_sokoban.c
*/

#include "my.h"

int main(int ac, char **argv)
{
    if (ac != 2)
        return (84);
    error_management(argv);
    return (0);
}