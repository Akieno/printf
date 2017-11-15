/*
** EPITECH PROJECT, 2017
** ex04
** File description:
** 
*/

#include <unistd.h>

void my_putchar(char c)
{
	write (1, &c, 1);
}

void print_ava(const char *s)
{
	int i = 0;
	while (s[i] != '\0') {
		if (s[i] == '%' && s[i + 1] == 's') {
			i = i + 2;
			my_putchar('A');
			my_putchar('v');
			my_putchar('a');
		}
		my_putchar(s[i]);
		i++;
	}
}
