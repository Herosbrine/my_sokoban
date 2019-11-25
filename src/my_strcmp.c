/*
** EPITECH PROJECT, 2019
** src
** File description:
** my_strcmp.c
*/

#include "my.h"

int my_strcmp(char *str1, char *str2)
{
    int i = my_strlen(str1);
    int x = my_strlen(str2);

    if (i != x)
        return (i - x);
    for (int a = 0; a < i; a++)
        if (str1[a] != str2[a])
            return (str1[a] - str2[a]);
    return (0);
}