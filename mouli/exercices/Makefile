##
## EPITECH PROJECT, 2017
## Day10 Makefile
## File description:
## 
##

CFLAGS  = -Wall -Werror -Wextra

SRC	=	ex06.c

OBJ	=	$(SRC: .c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ) -o $(NAME) $(CFLAGS)
	ar rc	$(NAME)	$(OBJ)
	ranlib	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
