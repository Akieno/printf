/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** 
*/

#include "my.h"

int my_printf(const char *format, ...)
{
	int i = 0;
	va_list va;
	va_start (va, format);

	while (format[i] != '\0') {
		if (format[i] == '%') {
			i++;
			if (format[i] == '%') {
				my_putchar('\n');
				return (0);
			}
			else if (format[i] == 'd' || format[i] == 'i') {
				int c = va_arg(va, int);
				my_putnbr(c);
			}
			else if (format[i] == 's') {
				char *string = va_arg(va, char *);
				my_putstr(string);
			}
		} else {
			my_putchar(format[i]);
		}
		i++;
	}
	va_end (va);
	return (0);
}
