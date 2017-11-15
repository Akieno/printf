##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

CC      = gcc

RM      = rm -f

CFLAGS  = -I ./include -Wall -Werror -Wextra

NAME    =      libmy.a

SRCS    =       src/main.c		\
		src/sum_stdarg.c	\
		src/disp_stdarg.c	\

OBJS    = $(SRCS:.c=.o)


all:    $(NAME)

$(NAME): $(OBJS)
	$(CC)  $(OBJS) -o $(NAME) $(CFLAGS)
	ar rc  $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:     fclean all

.PHONY: all clean fclean re
