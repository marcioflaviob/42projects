

#include <unistd.h>
#include <stdio.h>

static void ft_print(int n, int fd)
{
	char c;

	c = n + 48;
    write (fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	unsigned int nb;

	if (n < 0)
	{
		write (fd, "-", 1);
		nb = n * -1;
	}
	else
		nb = n;
	if (nb > 9)
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putnbr_fd((nb % 10), fd);
	}
	else
		ft_print(nb, fd);
}
/*
int main (void)
{
	int fd = 1;

  	ft_putnbr_fd(42, fd);
	printf("\n");
	ft_putnbr_fd(-42, fd);
	printf("\n");
	ft_putnbr_fd(-2147483648, fd);
	printf("\n");
	ft_putnbr_fd(2147483647, fd);
	printf("\n");
}*/
