/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:10:30 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/30 17:14:26 by mbrandao         ###   ########.fr       */
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

static int  count_chars(const char *s1, const char *set)
{
    int i;
    int counter;

    i = 0;
    counter = 0;
    while (s1[i])
    {
        if (char_check(s1[i], set))
            counter++;
        i++;
    }
    return (counter);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int trimmed_len;
    char *result;

    i = 0;
    j = 0;
    if (!s1)
        return (null_handler());
    if (!set)
        set = "";
    trimmed_len = ft_strlen(s1) - count_chars(s1, set);
    if (trimmed_len <= 0)
        return (null_handler());
    result = (char *) malloc(trimmed_len + 1 * sizeof(char));
    if (result == NULL)
        return (NULL);
    while (s1[i])
    {
        if (!char_check(s1[i], set))
            result[j++] = s1[i];
        i++;
    }
    result[j] = '\0';
    return (result);
}
/*
int main()
{
    char *str = "Hello World!";
    printf("%s", ft_strtrim(str, "l "));
}*/