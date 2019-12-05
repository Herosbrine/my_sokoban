/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** count_o.c
*/
#include <stdlib.h>
#include <stdlib.h>
#include "my.h"

int count_o(char *map)
{
    int i = 0;
    int a = 0;

    while (map[i] != '\0'){
        if (map[i] == 'O')
            a++;
        i++;
    }
    return (a);
}

int *position_o(int a, char *map)
{
    int k = 0;
    int i = 0;
    int *o_position = malloc(sizeof(int) * a);

    while (map[i] != '\0'){
        if (map[i] == 'O'){
            o_position[k] = i;
            k++;
        }
        i++;
    }
    return (o_position);
}

void check_o(int a, int *position_o, char *map)
{
    int i = 0;

    while (i < a) {
        if (map[position_o[i]] == ' ')
            map[position_o[i]] = 'O';
        i++;
    }
}