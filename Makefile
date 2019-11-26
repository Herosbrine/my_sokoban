##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc -lncurses

RM	=	 rm -rf

CFLAGS = -W -Wall -Wextra

NAME = my_sokoban

SRC = src/error_management.c  \
	  src/my_putstr.c  \
	  src/my_sokoban.c  \
	  src/my_strcmp.c  \
	  src/my_strlen.c  \
	  src/my_getnbr.c	\
	  src/read_map.c

OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
	rm -f *.g*
	rm -f unit_test

fclean: clean
	rm -f $(NAME)

re:	fclean all