/*
** EPITECH PROJECT, 2017
** disp_str
** File description:
** 
*/

#include <unistd.h>
#include <stdio.h>
void my_putchar(char c);

int disp_str(char *str)
{
	int counter = 0;

	while (str[counter] != '\0') {
		my_putchar(str[counter]);
		counter++;
	}
	return (0);
}
