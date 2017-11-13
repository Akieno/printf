/*
** EPITECH PROJECT, 2017
** disp_stdarg
** File description:
** 
*/

#include <unistd.h>

void my_putchar(char c);

int disp_stdrag(char *s)
{
	int counter = 0;
	int i = 1;

	while (argv[i][counter] != '\0') {
		while (argv[i][counter] != '\0') {
			if (s == argv)
				my_putchar(argv[i][counter]);
			counter++;
		}
		my_putchar('\n');
		i++;
	}
	return (0);
}
