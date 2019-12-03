/*
** EPITECH PROJECT, 2019
** src
** File description:
** my.h
*/

char error_management(char *map, char **argv);
int my_putstr(char const *str);
void my_putchar(char c);
int my_strcmp(char *str1, char *str2);
int my_strlen(char const *str);
char*read_map(char *filepath);
int get_size(char *filepath);
int	my_getnbr(char *str);
int game_loop(char *map);
int count_nbr_y(int y, char *buffer);
int find_p(int x, char *buffer);
void pos_up(int *x, int *y, char ch, char *map);
void pos_down(int *x, int *y, char ch, char *map);
void pos_right(int *x, int *y, char ch, char *map);
void pos_left(int *x, int *y, char ch, char *map);
int get_lenght_n(char *map);