/*
** EPITECH PROJECT, 2017
** my_puthexmaj
** File description:
** 
*/

#include "my.h"

int	my_puthexmaj(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 15) {
		i += my_putnbr(n / 16);
		i += my_putnbr(n % 16);
	} else {
		i++;
		my_putchar('0' + n);
	}
	return (i);
}
