/*
** EPITECH PROJECT, 2017
** my_putunsignednr
** File description:
** 
*/

#include "my.h"

int	my_putunsignednbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9) {
		i += my_putnbr(n / 10);
		i += my_putnbr(n % 10);
	} else {
		i++;
		my_putchar('0' + n);
	}
	return (i);
}
