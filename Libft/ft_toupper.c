

#include <unistd.h>

int	ft_toupper(int a)
{
	if ((a >= 97) && (a <= 122))
		a = a - 32;
	return (a);
}
