/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** sokoban.c
*/

#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <ncurses.h>

char *read_map(char *filepath)
{
    int size = get_size(filepath);
    char *buffer = NULL;
    int fd = open(filepath, O_RDONLY);

    buffer = malloc(sizeof(char) * (size + 1));
    read(fd, buffer, size);
    close(fd);
    if (buffer == NULL)
        return (NULL);
    return (buffer);
}