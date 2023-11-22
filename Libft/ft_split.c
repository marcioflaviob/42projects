

#include <stdlib.h>
#include <stdio.h>

static int	count_words(char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while ((str[i] != 0) && (str[i] == c))
			i++;
		if (str[i])
			words++;
		while ((str[i] != 0) && (str[i] != c))
			i++;
	}
	return (words);
}

static int	get_bigg(char *str, char c)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	j = 1;
	while (str[i])
	{
		if (str[i] == c || str[i + 1] == 0)
		{
			if (j > k)
				k = j;
			j = 0;
		}
		i++;
		j++;
	}
	return (k);
}

char	**ft_split(char *str, char c)
{
	int		i;
	int		j;
	int		x;
	char	**tab;

	tab = (char **) malloc((count_words(str, c) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	x = 0;
	while (i < count_words(str, c))
	{
		tab[i] = (char *) malloc(get_bigg(str, c) + 1 * sizeof(char));
		if (tab[i] == NULL)
			return (NULL);
		while ((str[j] == c) && (str[j] != 0))
			j++;
		while ((str[j] != c) && (str[j] != 0))
			tab[i][x++] = str[j++];
		tab[i][x] = '\0';
		x = 0;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

/*
int	main(int argc, char *argv[])
{
	(void) argc;
	int i = 0;
	char c = argv[2][0];
	char **tab;

	tab = ft_split(argv[1], c);
	while (tab[i])
	{
		printf("%s\n", tab[i++]);
	}
}*/
