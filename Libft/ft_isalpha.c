


#include <stdio.h>

int	ft_isalpha(int a)
{
	if ((a < 65) || (a > 90))
	{
		if ((a < 97) || (a > 122))
			return (0);
	}
	else
		return (1);
}

