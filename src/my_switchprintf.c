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
		switch (format[i] == '%') {
			i++;
			case '%':
				my_putchar('%');
				break;
			case 'd'/*i*/:
				int num = va_arg(va, int);
				my_putnbr(num);
				break;
			case 's'/*S*/:
				char *string = va_arg(va, char *);
				my_putstr(string);
				break;
			case 'c':
				int c = va_arg(va, int);
				my_putchar(c);
				break;
		}
		default:
			my_putchar(format[i]);
			break;
		i++;
	}
	va_end (va);
	return (i);
}
