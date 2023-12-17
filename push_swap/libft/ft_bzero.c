/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:03:53 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/30 16:29:23 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *str;
    size_t i;

    str = s;
    i = 0;
    while(i < n)
    {
        str[i++] = 0;
    }
}