

#include <string.h>
#include <stdio.h>
/*
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src1a[] = "abcde";
	char dest1a[] = "1234567";
	char src1b[] = "abcde";
	char dest1b[] = "1234567";
	char src2a[] = "abcd";
	char dest2a[] = "123";
	char src2b[] = "abcd";
	char dest2b[] = "123";
	char src3a[] = "";
	char dest3a[] = "";
	char src3b[] = "";
	char dest3b[] = "";
	char src4a[] = "12345";
	char dest4a[] = "abc";
	char src4b[] = "12345";
	char dest4b[] = "abc";
	
	printf("%s\n%s\n%s\n%s\n",
			ft_strlcpy(dest1a, src1a, 0) == strlcpy(dest1a, src1a, 0) ? "Pass" : "Fail",
			ft_strlcpy(dest2a, src2a, 3) == strlcpy(dest2b, src2b, 3) ? "Pass" : "Fail",
			ft_strlcpy(dest3a, src3a, 0) == strlcpy(dest3b, src3b, 0) ? "Pass" : "Fail",
			ft_strlcpy(dest4a, src4a, 2) == strlcpy(dest4b, src4b, 2) ? "Pass" : "Fail");
	int a = ft_strlcpy(dest1a, src1a, 0);
	int b = strlcpy(dest1a, src1a, 0);
	printf("%d, %d", a, b);
}
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	src_size;

	i = 0;
	src_size = ft_strlen(src);
	if (dest == 0)
		return (0);
	while (i < (n - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != 0)
		i++;
	return (i);
}
