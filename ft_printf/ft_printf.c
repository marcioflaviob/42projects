
#include "libftprintf.h"

void    ft_putchar(char c, int *counter)
{
    *counter += 1;
    write(1, &c, 1);
}

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

void ft_putstr(char *s, int *counter)
{
    int i;

    i = 0;
    while (s[i])
        ft_putchar(s[i++], counter);
}

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

/*
static int char_check(char c)
{
    int i;
    int counter;
    char    set[8] = "cspdiuxX";

    i = 0;
    counter = 0;
    //set = "cspdiuxX";
    if (c == 0)
        return (0);
    while (set[i])
    {
        if(set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

static int args_counter(const char *str)
{
    int i;
    int counter;

    i = 0;
    counter = 0;
    while (str[i])
    {
        if (str[i] == '%' && char_check(str[i + 1]))
            counter++;
        i++;
    }
    return (counter);
}
*/

static int flag_dealer(va_list args, char c, int *counter)
{
    if (c == 'c')
        ft_putchar(va_arg(args, int), counter);
    else if (c == 's')
        ft_putstr(va_arg(args, char *), counter);
    else if (c == 'p')
    {
        ft_putstr("0x10", counter);
        ft_putnbr_base(va_arg(args, int), counter, 1);
    }
    else if (c == 'i' || c == 'd')
        ft_putnbr(va_arg(args, int), counter);
    else if (c == 'u')
        ft_putunsnbr(va_arg(args, unsigned int), counter);
    else if (c == 'x')
        ft_putnbr_base(va_arg(args, int), counter, 1);
    else if (c == 'X')
        ft_putnbr_base(va_arg(args, int), counter, 0);
    else if (c == '%')
        ft_putchar('%', counter);
    else
        return (0);
    return (1);
}

int ft_printf(const char *str, ...)
{
    int i;
    int counter;
    int temp;
    va_list args;

    i = 0;
    counter = 0;
    va_start(args, str);
    while (str[i])
    {
        while (str[i] != '%' && str[i])
            ft_putchar(str[i++], &counter);
        if (str[i] == '%')
            temp = flag_dealer(args, str[++i], &counter);
        if (str[i] && temp)
            i++;
    }
    va_end(args);
    return (counter);
}

int main()
{
    char *prompt = "a char: %c\nan int: %i\na hexa nu%mber: %x\na hexa capital: %X\na string: %s\na percentage: %%\nthe p: %p\nunsigned: %u";
    char *str = "test";
    unsigned int us = 2147483649;
    //int i = (printf("Hello %s %d", "123", 123));
    int i = printf(prompt, '$', 5242189, 42, 42, str, str, us);
    //rintf(prompt, '$', 5242189, 42, 42, str);
    printf("\n\n");
    int a = ft_printf(prompt, '$', 5242189, 42, 42, str, prompt, us);
    printf("\n\n");
    printf("og = %i, mine = %i", i, a);
    return (0);
}