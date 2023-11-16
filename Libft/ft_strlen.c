

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	int size = ft_strlen("Hello!");
	printf("the size is %d", size);
	return (0);
}*/
