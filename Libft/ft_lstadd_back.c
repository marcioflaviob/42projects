

#include <stdio.h>
#include "libft.h"

static t_list *ft_lstlast(t_list *lst)
{
    while (lst->next != NULL)
        lst->next;
    return lst;
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last_node;

    last_node = ft_lstlast(*lst);
    last_node->next = new;
}