/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:06:22 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/30 17:35:17 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char const c)
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

static int	get_bigg(char const *str, char const c)
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

char	**ft_split(char const *s, char const c)
{
	int		i;
	int		j;
	int		x;
	char	**tab;

	tab = (char **) malloc((count_words(s, c) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	x = 0;
	while (i < count_words(s, c))
	{
		tab[i] = (char *) malloc(get_bigg(s, c) + 1 * sizeof(char));
		if (tab[i] == NULL)
			return (NULL);
		while ((s[j] == c) && (s[j] != 0))
			j++;
		while ((s[j] != c) && (s[j] != 0))
			tab[i][x++] = s[j++];
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
