/*
** EPITECH PROJECT, 2017
** ex01
** File description:
** 
*/

int check_mod(const char * const str)
{
	if (str[0] == '%')
		return (1);
	else
		return (0);
}
