


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

/*
int	main(void)
{
	int i = ft_str_is_alpha("arr|ba");
	int j = ft_str_is_alpha("arroba");

	if (i == 0)
		printf("perfecto\n");
	if (j == 1)
		printf("perfect");
	return (0);
}*/
