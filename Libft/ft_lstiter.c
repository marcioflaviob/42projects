/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:05:13 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/22 12:05:15 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst != NULL)
    {
        f(lst->content);
        lst = lst->next;
    }
}