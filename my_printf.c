/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** 
*/

#include <unistd.h>
#include <stdio.h>

int disp_str(char *str);

int my_printf(const char *format, char *argument)
{
	if (format == "%%") {
		ft_putchar('\n');
		return (0);
	}
	if (format == 

	disp_str(argument);
}

int main(void)
{
	my_printf(0, "Test");
	return (0);
}
