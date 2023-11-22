

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