/*
** EPITECH PROJECT, 2017
** ex02
** File description:
** 
*/

int check_flag(const char * const str, char c)
{
	if (str[0] == '%' && str[1] == c)
		return (1);
	else
		return (0);
}
