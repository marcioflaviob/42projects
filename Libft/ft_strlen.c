

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	int size = ft_strlen("Hello!");
	printf("the size is %d", size);
	return (0);
}*/
