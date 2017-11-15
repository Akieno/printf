NAME		=		mouli

CFLAGS		+=		-W -Wall -Wextra -Werror

LDFLAGS		+=		-lcriterion

SRCDIR		=		exercises

EX01		=		$(SRCDIR)/ex01.c
EX02		=		$(SRCDIR)/ex02.c
EX03		=		$(SRCDIR)/ex03.c
EX04		=		$(SRCDIR)/ex04.c
EX05		=		$(SRCDIR)/ex05.c
EX06		=		$(SRCDIR)/ex06.c
EX07		=		$(SRCDIR)/ex07.c

TESTDIR		=		tests

MOULI01		=		$(TESTDIR)/mouli01.o
MOULI02		=		$(TESTDIR)/mouli02.o
MOULI03		=		$(TESTDIR)/mouli03.o
MOULI04		=		$(TESTDIR)/mouli04.o
MOULI05		=		$(TESTDIR)/mouli05.o
MOULI06		=		$(TESTDIR)/mouli06.o

BUILDDIR	=		build

OBJ1		=		$(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%.o,$(EX01))
OBJ2		=		$(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%.o,$(EX02))
OBJ3		=		$(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%.o,$(EX03))
OBJ4		=		$(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%.o,$(EX04))
OBJ5		=		$(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%.o,$(EX05))
OBJ6		=		$(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%.o,$(EX06))

CC			=		gcc

MKDIR		=		mkdir -p

RM			=		rm -rf

all: 				$(NAME)01 $(NAME)02 $(NAME)03 $(NAME)04 $(NAME)05 $(NAME)06 $(NAME)07

$(NAME)01: 			$(OBJ1) $(MOULI01)
					@$(MKDIR) $(BUILDDIR)
					$(CC) $(LDFLAGS) -o $@ $^
					@./$@

$(NAME)02: 			$(OBJ2) $(MOULI02)
					@$(MKDIR) $(BUILDDIR)
					$(CC) $(LDFLAGS) -o $@ $^
					@./$@

$(NAME)03: 			$(OBJ3) $(MOULI03)
					@$(MKDIR) $(BUILDDIR)
					$(CC) $(LDFLAGS) -o $@ $^
					@./$@

$(NAME)04: 			$(OBJ4) $(MOULI04)
					@$(MKDIR) $(BUILDDIR)
					$(CC) $(LDFLAGS) -o $@ $^
					@./$@

$(NAME)05: 			$(OBJ5) $(MOULI05)
					@$(MKDIR) $(BUILDDIR)
					$(CC) $(LDFLAGS) -o $@ $^
					@./$@

$(NAME)06: 			$(OBJ6) $(MOULI06)
					@$(MKDIR) $(BUILDDIR)
					$(CC) $(LDFLAGS) -o $@ $^
					@./$@

$(NAME)07:			$(SRCDIR)/Makefile $(MOULI06)
					$(RM) $(SRCDIR)/libmy.a
					@$(MKDIR) $(BUILDDIR)
					$(MAKE) -C $(SRCDIR)
					$(CC) $(LDFLAGS) -o $@ $(MOULI06) -lmy -L$(SRCDIR)
					@./$@

$(BUILDDIR)/%.o:	%.c
					@$(MKDIR) $(BUILDDIR)
					$(CC) $(CFLAGS) -o $@ -c $<

$(BUILDDIR)/%.o:	$(SRCDIR)/%.c
					@$(MKDIR) $(BUILDDIR)
					$(CC) $(CFLAGS) -o $@ -c $<

clean:
					$(RM) $(BUILDDIR)

fclean:				clean
					$(RM) $(NAME)01 $(NAME)02 $(NAME)03 $(NAME)03 $(NAME)04 $(NAME)05 $(NAME)06 $(NAME)07

re:					fclean all

.PHONY:				all clean fclean re
