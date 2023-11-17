

#include <stdio.h>
#include <string.h>

//     char *strnstr(const char *haystack, const char *needle, size_t len)

char	*ft_strstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		while (needle[j] != '\0' && needle[j] == haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		else
		{
			j = 0;
			i++;
		}
	}
	if (needle[j] == '\0')
		return (haystack + i);
	return (0);
}
