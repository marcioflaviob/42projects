#include "libftprintf.h"

void    ft_putchar(char c, int *counter)
{
    *counter += 1;
    write(1, &c, 1);
}