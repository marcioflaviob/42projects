

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *) malloc (ft_strlen(src) * sizeof(char));
	while (src[i] != 0)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
