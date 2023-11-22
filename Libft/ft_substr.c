/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:10:34 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/22 12:10:36 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char    *ft_substr (char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  real_len;
    char    *str;

    i = 0;
    real_len = (len > ft_strlen(s) ? ft_strlen(s) : len);
    if (start > (ft_strlen(s) - 1))
        return (NULL);
    str = (char *) malloc((real_len + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    while (i < real_len)
    {
        str[i] = (s + start)[i];
        i++;
    }
    str[i] = 0;
    return (str);
}

/*
int main()
{
    char *str = "Hello Wonderful World!";
    printf("%s", ft_substr(str, 60, 9));
    return 0;
}*/