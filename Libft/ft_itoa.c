/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:04:32 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/30 16:32:45 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_digits(unsigned int n)
{
    int counter;

    counter = 1;
    while (n > 9)
    {
        n /= 10;
        counter++;
    }
    return (counter);
}

char    *ft_itoa(int n)
{
    unsigned int    num;
    int size;
    int i;
    char *result;

    num = (n < 0 ? (n * -1) : n);
    size = count_digits(num);
    i = size - (n >= 0);
    result = (char *) malloc((size + (n < 0) + 1) * sizeof(char));
    if (result == NULL)
        return (NULL);
    result[0] = (n < 0 ? '-' : '0');
    while (i >= (n < 0))
    {
        result[i--] = ((num % 10) + 48);
        num /= 10;
    }
    result[(n > 0 ? size : (size + 1))] = 0;
    return (result);
}
/*
int main()
{
    //printf("%d", count_digits(0));
    printf("%s", ft_itoa(0));
}*/