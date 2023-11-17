

#include <stdlib.h>
#include "libft.h"

static t_list *ft_lstlast(t_list *lst)
{
    while (lst->next != NULL)
        lst->next;
    return lst;
}

static void ft_lstadd_back(t_list *lst, t_list *new)
{
    t_list  *last_node;

    if (lst == NULL)
    {
        lst = new;
        return;
    }
    last_node = ft_lstlast(lst);
    last_node->next = new;
}

static void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    del(lst->content);
    free(lst);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *save_next;
    void *new_content;

    new_list = (t_list *) malloc(sizeof(t_list));
    new_content = lst;
    if (new_list == NULL)
        return (NULL);
    while (lst != NULL)
    {
        new_content = f(lst->content);
        if (new_content == NULL)
        {
            save_next = lst->next;
            ft_lstdelone(lst, del);
            lst = save_next;
        }
        else
        {
            lst->content = new_content;
            ft_lstadd_back(new_list, lst);
        }
        lst = lst->next;
    }
    return (new_list);
}