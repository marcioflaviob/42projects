

#include <stdlib.h>
#include <stdio.h>

static size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static int char_check(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (c == set[i++])
            return (1);
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    char *result;

    i = 0;
    j = 0;
    result = (char *) malloc((ft_strlen(s1) + 1) * sizeof(char));
    if (result == NULL)
        return (NULL);
    while (s1[i])
    {
        if (!char_check(s1[i], set))
            result[j++] = s1[i++];
        else
            i++;
    }
    result[j] = NULL;
    return (result);
}
/*
int main()
{
    char *str = "Hello World!";
    printf("%s", ft_strtrim(str, "l "));
}*/