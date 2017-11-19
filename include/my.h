#ifndef MY
# define MY

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int my_printf(const char *format, ...);
int my_putnbr(int n);
int my_putstr(char *str);
int my_putbase(unsigned int n, unsigned int b);
int my_putbasemin(unsigned int n, unsigned int b);
void my_putchar(char c);

#endif
