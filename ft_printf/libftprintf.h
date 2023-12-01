#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

void        ft_putchar(char c);
void        ft_putnbr(int n);
void        ft_putstr(char *s);
void	ft_putnbr_base(int nbr, int type);

#endif