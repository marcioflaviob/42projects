
#include "libftprintf.h"
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

static void flag_dealer(va_list args, char c)
{
    if (c == 'c')
        ft_putchar(va_arg(args, int));
    else if (c == 's')
        ft_putstr(va_arg(args, char *));
    else if (c == 'i')
        ft_putnbr(va_arg(args, int));
    else if (c == 'x')
        ft_putnbr_base(va_arg(args, int), 1);
    else if (c == 'X')
        ft_putnbr_base(va_arg(args, int), 0);
    else if (c == '%')
        ft_putchar('%');
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
    va_end(args);
    return (0);
}

int main()
{
    char *str = "test";
    //printf("aha %s a", str);
    ft_printf("a char: %c\nan int: %i\na hexa number: %x\na string: %s", '$', 5242189, 42, "testing");
    return (0);
}