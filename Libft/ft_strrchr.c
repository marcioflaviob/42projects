/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:10:25 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/22 12:10:26 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
    unsigned char ch;
    int i;
    int last;

    ch = c;
    i = 0;
    last = -1;
    while (s[i])
    {
        if (s[i] == ch)
            last = i;
        i++;
    }
    if (c == 0)
        return ((char *) (s + i));
    return ((char *) (last == -1 ? 0 : (s + last)));
}