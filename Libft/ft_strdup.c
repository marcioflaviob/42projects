

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *) malloc (ft_strlen(s1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (s1[i] != 0)
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
