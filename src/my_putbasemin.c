/*
** EPITECH PROJECT, 2017
** my_putbasemin
** File description:
** 
*/

#include "my.h"

int	my_putbasemin(unsigned int n, unsigned int b)
{
	int	i;

	if (b < 2)
		return (0);
	i = 0;
	if (n > b - 1) {
		i += my_putbasemin(n / b, b);
		i += my_putbasemin(n % b, b);
	} else {
		i++;
		if (n > 9)
			my_putchar('a' + n - 10);
		else
			my_putchar('0' + n);
	}
	return (i);
}
