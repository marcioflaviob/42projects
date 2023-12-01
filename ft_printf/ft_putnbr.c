#include "libftprintf.h"

void ft_putnbr(int n)
{
	unsigned int nb;

	if (n < 0)
	{
		ft_putchar('-');
		nb = n * -1;
	}
	else
		nb = n;
	if (nb > 9)
	{
		ft_putnbr((nb / 10));
		ft_putnbr((nb % 10));
	}
	else
		ft_putchar(nb + 48);
}