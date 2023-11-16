

#include <unistd.h>

char	ft_tolower(int a)
{
	if ((a >= 65) && (a <= 90))
		a = a + 32;
	return (a);
}
