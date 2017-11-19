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
		char *buff = NULL;
		if (format[i] == '%') {
			i++;
			switch (format[i]) {
				case '%':
					my_putchar('%');
					break;
				case 'd':
				case 'i':
					my_putnbr(va_arg(va, int));
					break;
				case 's':
				case 'S':
					buff = va_arg(va, char *);
					if (buff == NULL)
						my_putstr("(null)");
					else
						my_putstr(buff);
					break;
				case 'c':
					my_putchar(va_arg(va, int));
					break;
				case 'u':
					my_putbase(va_arg(va, unsigned int), 10);
					break;
				case 'o':
					my_putbase(va_arg(va, unsigned int), 8);
					break;
				case 'x':
					my_putbasemin(va_arg(va, unsigned int), 16);
					break;
				case 'X':
					my_putbase(va_arg(va, unsigned int), 16);
					break;
				case 'b':
					my_putbase(va_arg(va, unsigned int), 2);
					break;
			}
		} else {
			my_putchar(format[i]);
		}
		i++;
	}
	va_end (va);
	return (i);
}
