/*
** EPITECH PROJECT, 2019
** my_str_to_world_array.c
** File description:
** change a str to an array of word
*/

#include <stdlib.h>

static int is_not_alphanum(char c)
{
    if (!(c > 47 && c < 58)) {
        if (!(c > 64 && c < 91) && !(c > 96 && c < 123)) {
            return (1);
        }
    }
    return (0);
}

static char **put_word_in_array(char **array, char const *str, int nb_wd)
{
    int word_length = 0;
    int cursor = 0;

    for (int i = 0; i < nb_wd; i++) {
        for (int j = cursor; is_not_alphanum(str[j]); j++) {
            word_length++;
        }
        word_length++;
        array[i] = malloc(sizeof(char) * word_length);
        for (int j = 0; !is_not_alphanum(str[cursor]); j++, cursor++) {
            array[i][j] = str[cursor];
        }
        cursor++;
    }
    return (array);
}

char **my_str_to_word_array(char const *str)
{
    int nbr_word = 0;
    char **array;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_not_alphanum(str[i])) {
            nbr_word++;
        }
    }
    nbr_word++;
    array = malloc(sizeof(char*) * nbr_word + 1);
    return (put_word_in_array(array, str, nbr_word));
}