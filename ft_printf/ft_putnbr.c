#include "libftprintf.h"


void ft_putnbr(int n, int *counter)
{
	unsigned int nb;

	if (n < 0)
	{
		ft_putchar('-', counter);
		nb = n * -1;
	}
	else
		nb = n;
	if (nb > 9)
	{
		ft_putnbr((nb / 10), counter);
		ft_putnbr((nb % 10), counter);
	}
	else
		ft_putchar((nb + 48), counter);
}