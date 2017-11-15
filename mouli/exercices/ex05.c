/*
** EPITECH PROJECT, 2017
** ex05
** File description:
** 
*/

#include <unistd.h>

void my_putchar(char c)
{
	write (1, &c, 1);
}

void my_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
}

void print_ape(const char *s)
{
	int i = 0;
	while (s[i] != '\0') {
		if (s[i] == '%') {
			i++;
			if (s[i] == 's') {
				i++;
				my_putstr("Ava");
			}
			else if (s[i] == 'd') {
				i++;
				my_putstr("Bastien");
			}
			else if (s[i] == 'c') {
				i++;
				my_putstr("Jojo");
			}
			else if (s[i] == 'p') {
				i++;
				my_putstr("Seb");
			}
			else if (s[i] == '%') {
				i++;
				my_putstr("Pierre");
			}
		}
		my_putchar(s[i]);
		i++;
	}
}
