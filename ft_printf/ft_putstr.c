#include "libftprintf.h"

void ft_putstr(char *s, int *counter)
{
    int i;

    i = 0;
    while (s[i])
        ft_putchar(s[i++], counter);
}