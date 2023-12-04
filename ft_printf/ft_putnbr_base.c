
#include "libftprintf.h"

void	ft_putnbr_base(int nbr, int *counter, int type)
{
	char *base;
	unsigned int	base_size;
	unsigned int	n;

	base = (type ? "0123456789abcdef" : "0123456789ABCDEF");
	base_size = 16;
	if (nbr < 0)
	{
		ft_putchar('-', counter);
		n = nbr * -1;
	}
	else
		n = nbr;
	if (n > base_size)
	{
		ft_putnbr_base((n / base_size), counter, type);
		ft_putnbr_base((n % base_size), counter, type);
	}
	else
		ft_putchar(base[n], counter);
}
/*
int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(2147483647, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}*/
