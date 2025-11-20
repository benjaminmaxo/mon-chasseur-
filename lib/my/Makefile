##
## EPITECH PROJECT, 2025
## Makefiles
## File description:
## nico said ...
##

SRC = $(wildcard *.c)

CFLAGS	+=	-Wall -Wextra -Wconversion -Wno-unused-parameter

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp my.h ../../include/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../libmy.a

re: fclean all

auteur:
	echo $(USER) > auteur

debug: CFLAGS += -g3
debug: $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp my.h ../../include/
