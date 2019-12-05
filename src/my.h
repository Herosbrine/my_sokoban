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
char game_loop(int x, char *map);
int count_nbr_y(int y, char *buffer);
int find_p(char *buffer);
void pos_up(int *x, int *y, char ch, char *map);
void pos_down(int *x, int *y, char ch, char *map);
void pos_right(int *x, int *y, char ch, char *map);
void pos_left(int *x, int *y, char ch, char *map);
int get_lenght_n(char *map);
void check_o(int a, int *position_o, char *map);
int *position_o(int a, char *map);
int count_o(char *map);
int check_end(int a, int *position_o, char *map);
int *position_p(int x, char *map);
void put_p_again(int x, int *position_p, char *map);
int count_p(char *map);
int count_box(char *map);
int *position_box(int r, char *map);
void put_box_again(int r, int *position_p, char *map);
void erase_pre_box(char *map);