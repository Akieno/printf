/*
** EPITECH PROJECT, 2017
** sum_stdarg
** File description:
** 
*/

#include <unistd.h>

int sum_stdarg(int i, int nb)
{
	if (i == 1) {
		while (argv[nb][0] != '\0')
			nb++;
		return ((nb * 2) + 1);
	}
	if (i == 0) {
		while (argv[nb][0] != '\0')
			nb++;
		return (nb + 1);
	}
	else
		return (84);
}
