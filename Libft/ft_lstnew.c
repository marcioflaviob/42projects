/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:05:27 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/22 12:05:29 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node;

    node = (t_list *) malloc(sizeof(t_list));
    if (node == NULL)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}