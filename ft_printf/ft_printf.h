#ifndef FT_PRINTF_H
# define FT_PRINTF_H

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
void	    ft_putnbr_base(unsigned int n, int *counter, int type);
void	    ft_putnbr_p(uintptr_t n, int *counter);
void        *ft_calloc(size_t count, size_t size);

#endif