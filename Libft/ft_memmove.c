/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:05:51 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/22 12:05:52 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t len) {
    unsigned char *d = dst;
    const unsigned char *s = src;

    if (d < s) {
        while (len--) {
            *d++ = *s++;
        }
    } else if (d > s) {
        d += len;
        s += len;
        while (len--) {
            *(--d) = *(--s);
        }
    }
    return dst;
}