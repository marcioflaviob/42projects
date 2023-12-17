/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:09:54 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/30 17:33:18 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	char *result;

	i = 0;
	j = 0;
	result = (char *) malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		result[i++] = s2[j++];
	result[i] = 0;
	return (result);
}
/*
int main()
{
	char *s1 = "Hello ";
	char *s2 = "World";

	printf("%s", ft_strjoin(s1, s2));
}
*/