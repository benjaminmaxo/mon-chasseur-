##
## EPITECH PROJECT, 2025
## for
## File description:
## ceci
##

SRC = 	main.c\
	eventhandler.c

OBJ = $(SRC:.c=.o)

NAME = my_hunter

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	epiclang -o $(NAME) $(OBJ) -L lib/ -lmy -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -lcsfml-network

re: clean all

clean:
	make -C lib/my clean
	rm -f $(NAME)
	rm -f $(OBJ)

fclean: clean
	make -C lib/my fclean

debug:
	cc -o $(NAME) $(SRC) -L lib/ -lmy -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -lcsfml-network -g3
