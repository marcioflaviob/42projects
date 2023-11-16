

#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

size_t	ft_strlcat(char * restrict dst, char * restrict src, size_t dstsize)
{
	int	dest_len;
	int	src_len;
	int	space_left;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	space_left = dstsize - (dest_len - 1);
	dst = ft_strncat(dst, src, space_left);
	dst[dstsize - 1] = '\0';
	return (dest_len + src_len);
}
