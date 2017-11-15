#include "my.h"

int	my_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (my_putstr("-2147483648"));
	else if (n < 0) {
		my_putchar('-');
		i++;
		n = -n;
	}
	if (n > 9) {
		i += my_putnbr(n / 10);
		i += my_putnbr(n % 10);
	} else {
		i++;
		my_putchar('0' + n);
	}
	return (i);
}
