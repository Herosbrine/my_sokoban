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

int main(int ac, char **argv)
{
    char *map = NULL;
    int i = 0;

    if (ac != 2)
        return 84;
    map = read_map(argv[1]);
    if (map == NULL)
        return (84);
    if (error_management(map, argv) == 84)
        return (84);
    write(1, &map[i], my_strlen(&map[i]));
    return (0);
}
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