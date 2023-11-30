/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:05:36 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/30 17:05:32 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
    size_t  i;
    const unsigned char *us = s;
    unsigned char uc = (unsigned char)c;

    i = 0;
    while (i < n)
    {
        if (us[i] == uc)
        {
            return (void *)(us + i);
        }
        i++;
    }
    return NULL;
}