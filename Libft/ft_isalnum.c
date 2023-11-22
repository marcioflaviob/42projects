

#include <stdio.h>

static int	ft_isalpha(int a)
{
	if ((a < 65) || (a > 90))
	{
		if ((a < 97) || (a > 122))
			return (0);
	}
	return (1);
}

static int	ft_isdigit(int a)
{
	if ((a < 48) || (a > 57))
		return (0);
	else
		return (1);
}

int	ft_isalnum(int c)
{
	if (!(ft_isalpha(c)) && !(ft_isdigit(c)))
		return (0);
	else
		return (1);
}

int	main()
{
	char c = 'a';
	printf("%d", ft_isalnum(c));
}