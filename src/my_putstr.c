/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** 
*/

#include "my.h"

int my_putstr(char *str)
{
	int counter = 0;

	while (str[counter] != '\0') {
		my_putchar(str[counter]);
		counter++;
	}
	return (counter);
}
