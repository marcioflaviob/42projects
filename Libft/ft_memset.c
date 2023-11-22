/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:05:57 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/22 12:05:59 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
#include <stdio.h>

//void *memset(void *b, int c, size_t len);
//void *ft_memset(char *ptr, int value, int num)

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *str;
    size_t i;

    str = b;
    i = 0;
    while (i < len)
    {
        str[i] = c;
        i++;
    }
    return (str);
}
/*
int main()
{
    char str[5];
    ft_memset(str, 75, sizeof(str));
    
    for (int i = 0; str[i]; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}*/