/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** get_size.c
*/

#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <ncurses.h>

int get_size(char *filepath)
{
    int size = 0;
    struct stat *memory = NULL;

    memory = malloc(sizeof(struct stat));
    stat(filepath, memory);
    size = memory->st_size;
    free(memory);
    return (size);
}