#ifndef MY
# define MY

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int my_printf(const char *format, ...);
int my_putnbr(int n);
int my_putunsignednbr(unsigned int n);
int my_putoct(unsigned int n);
int my_putstr(char *str);
void my_putchar(char c);

#endif
