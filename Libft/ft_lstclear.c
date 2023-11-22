/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:05:04 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/22 12:05:07 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *actual = *lst;
    t_list *next;

    while (actual != NULL)
    {
        next = actual->next;
        del(actual->content);
        free(actual);
        actual = next;
    }
    *lst = NULL;
}