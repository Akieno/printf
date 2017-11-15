/*
** EPITECH PROJECT, 2017
** ex06
** File description:
** 
*/

#include <stdarg.h>

int sum_params(const unsigned int nb, ...)
{
	unsigned int i;
	va_list va;
	va_start (va, nb);

	for (i = 0; i < nb; i++)
		int c = va_arg (va, int);
	va_end (va);
	return (nb);
}
