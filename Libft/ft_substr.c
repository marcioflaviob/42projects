/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:10:34 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/30 17:14:53 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*null_handler()
{
    char    *str;
    
	str = malloc(1);
	str[0] = '\0';
	return (str);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  s_len;
    size_t  real_len;
    char    *str;

    i = 0;
    s_len = ft_strlen(s);
    if (start > (s_len - 1))
        return (null_handler());
    real_len = (len > (s_len - start) ? (s_len - start) : len);
    str = (char *) malloc((real_len + 1) * sizeof(char));
    if (str == NULL)
    {   
        free(str);
        return (null_handler());
    }
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
    printf("%s", ft_substr(str, 6, 9));
    return (0);
}
*/
