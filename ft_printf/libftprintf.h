#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

int         ft_printf(const char *, ...);
void        ft_putchar(char c, int *counter);
void        ft_putnbr(int n, int *counter);
void        ft_putunsnbr(unsigned int nb, int *counter);
void        ft_putstr(char *s, int *counter);
void	ft_putnbr_base(int nbr, int *counter, int type);

#endif