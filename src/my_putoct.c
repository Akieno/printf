/*
** EPITECH PROJECT, 2017
** my_putoct
** File description:
** 
*/

#include "my.h"

int	my_putoct(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 7) {
		i += my_putnbr(n / 8);
		i += my_putnbr(n % 8);
	} else {
		i++;
		my_putchar('0' + n);
	}
	return (i);
}
