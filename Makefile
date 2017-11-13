##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

CC      = gcc

RM      = rm -f

CFLAGS  = -I ./include -Wall -Werror -Wextra

LDFLAGS =

NAME    =      my 

SRCS    =       main.c		\
		sum_stdarg.c	\
		disp_stdarg.c	\

OBJS    = $(SRCS:.c=.o)


all:    $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:     fclean all

.PHONY: all clean fclean re
