/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrandao <mbrandao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:05:23 by mbrandao          #+#    #+#             */
/*   Updated: 2023/11/30 17:04:23 by mbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  del_dealer(void *new_content, void (*del)(void *), t_list **new_list)
{
    if (!new_content)
    {
        if (del)
            del((*new_list)->content);
        ft_lstclear(new_list, del);
        return (1);
    }
    else
        return (0);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new_node;
    void *new_content;

    if (!lst || !f)
        return (NULL);
    new_list = NULL;
    while (lst)
    {
        new_content = f(lst->content);
        if (del_dealer(new_content, del, &new_list))
            return (NULL);
        new_node = ft_lstnew(new_content);
        if (!new_node)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return (new_list);
}