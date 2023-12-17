/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:05:27 by mbrandao          #+#    #+#             */
/*   Updated: 2023/12/17 02:56:21 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node;

    node = (t_list *) malloc(sizeof(t_list));
    if (node == NULL)
        return (NULL);
    node->content = malloc(sizeof(int));
    if (!node->content)
    {
        free(node);
        return (NULL);
    }
    node->content = content;
    node->next = NULL;
    return (node);
}