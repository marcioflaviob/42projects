
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

static void    ft_putchar(char c)
{
    write(1, &c, 1);
}

static void ft_putstr(char *s)
{
    int i;

    i = 0;
    while (s[i])
        ft_putchar(s[i++]);
}

static void ft_putnbr(int n)
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

void flag_dealer(va_list args, char c)
{
    if (c == 'c')
        ft_putchar(va_arg(args, int));
    else if (c == 'i')
        ft_putnbr(va_arg(args, int));
    else if (c == 's')
        ft_putstr(va_arg(args, char *));
}

int ft_printf(const char *str, ...)
{
    int i;
    va_list args;
    //int counter;

    i = 0;
    //counter = args_counter(str);
    va_start(args, str);
    while (str[i])
    {
        while (str[i] != '%' && str[i])
            ft_putchar(str[i++]);
        if (str[i] == '%')
            flag_dealer(args, str[++i]);
        if (str[i])
            i++;
    }

    return (0);
}

int main()
{
    char *str = "test";
    //printf("aha %s a", str);
    ft_printf("aha %c a", '$');
    return (0);
}