/*
** EPITECH PROJECT, 2017
** my_putbase
** File description:
** 
*/

#include "my.h"

int	my_putbase(unsigned int n, unsigned int b)
{
	int	i;

	if (b < 2)
		return (0);
	i = 0;
	if (n > b - 1) {
		i += my_putbase(n / b, b);
		i += my_putbase(n % b, b);
	} else {
		i++;
		if (n > 9)
			my_putchar('A' + n - 10);
		else
			my_putchar('0' + n);
	}
	return (i);
}
