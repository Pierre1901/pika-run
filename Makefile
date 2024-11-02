##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC =   main.c\
		window.c\
		creator.c\
		handle_event.c\
		init_rec.c

OBJ = $(SRC:.c=.o)

NAME = pika_run

CC = gcc

CFLAGS = -g

RM = rm -f

all: $(NAME)

$(NAME):$(OBJ)
		$(CC) $(OBJ) -o $(NAME) -lcsfml-graphics -lcsfml-window -lcsfml-system -lm
clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
