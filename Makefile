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

SRCS    =	src/my_printf.c	\
		src/my_putchar.c \
		src/my_putnbr.c \
		src/my_putstr.c \
		src/my_putunsignednbr.c \
		src/my_putoct.c \
		src/my_puthex.c \
		src/my_puthexmaj.c

OBJS    = $(SRCS:.c=.o)


all:    $(NAME)

$(NAME): $(OBJS)
	ar -crus $@ $(OBJS)
	ranlib $(NAME)

./%o : ./%c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:     fclean all

.PHONY: all clean fclean re
