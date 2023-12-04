
#include "libftprintf.h"

void ft_putunsnbr(unsigned int nb, int *counter)
{
	if (nb > 9)
	{
		ft_putnbr((nb / 10), counter);
		ft_putnbr((nb % 10), counter);
	}
	else
		ft_putchar((nb + 48), counter);
}