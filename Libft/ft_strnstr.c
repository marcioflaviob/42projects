/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:10:20 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/22 12:10:22 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		temp_index;
	size_t		j;

	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		temp_index = i;
		while ((needle[j] != '\0') && (needle[j] == haystack[i + j]) && (temp_index < len))
		{
			temp_index++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *) (haystack + i));
		else
		{
			j = 0;
			i++;
		}
	}
	if (needle[j] == '\0')
		return ((char *) (haystack + i));
	return (0);
}
/*
int	main()
{
	char *str = "aaabcabcd";
	char *needle = "aabc";
	printf("%s", ft_strnstr(str, needle, -1));
}*/