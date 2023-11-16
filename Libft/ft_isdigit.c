

#include <stdio.h>

int	ft_isdigit(int a)
{
	if ((a < 48) || (a > 57))
		return (0);
	else
		return (1);
}

