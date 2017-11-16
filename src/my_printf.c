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
			if (format[i] == '%')
				my_putchar('%');
			else if (format[i] == 'd' || format[i] == 'i') {
				int num = va_arg(va, int);
				my_putnbr(num);
			}
			else if (format[i] == 's' || format[i] == 'S') {
				char *string = va_arg(va, char *);
				my_putstr(string);
			}
			else if (format[i] == 'c') {
				int c = va_arg(va, int);
				my_putchar(c);
			}
		} else {
			my_putchar(format[i]);
		}
		i++;
	}
	va_end (va);
	return (0);
}
