
#include "./libft/libft.h"

void    print_int(int *a, int *b, int size)
{
    while (size > 0)
    {
        printf("%d | %d\n", a[0], b[0]);
        a++;
        b++;
        size--;
    }
}

void    do_swap(t_list *stack)
{
    int size;
    int temp;

    size = ft_lstsize(stack);
    if (size <= 1)
        return;
    temp = stack->content;
    stack->content = stack->next->content;
    stack->next->content = temp;
}

void    print_nbr(int a)
{
    if (a == NULL)
        ft_putchar_fd('X', 1);
    else
        ft_putnbr_fd(a, 1);
}

/*
void    do_push(t_list *donor, t_list *receiver)
{
    t_list *temp;
    //print_nbr(donor->content);

    temp = donor;
    //print_nbr(temp->content);
    ft_lstdelone(donor, delete_node);
    //print_nbr(temp->next->content);
    donor = donor->next;
    //print_nbr(donor->content);
    //print_nbr(receiver->content);
    ft_lstadd_front(&receiver, temp);
    //print_nbr(receiver->content);
}
*/

t_list *init_b(t_list *b, int size)
{
    b = ft_lstnew(NULL);
    while (size > 0)
    {
        ft_lstadd_back(&b, ft_lstnew(NULL));
        size--;
    }
    return (b);
}


void    print_stacks(t_list *a, t_list *b)
{
    int size;

    size = ft_lstsize(a);
    while(size > 0)
    {
        print_nbr(a->content);
        ft_putchar_fd(' ', 1);
        print_nbr(b->content);
        ft_putchar_fd('\n', 1);
        a++;
        b++;
        size--;
    }
}

int main()
{
    
    int array[] = {8, 3, 4, 5, 1, 7, 6};
    int size = 7;
    int i = 0;
    t_list  *stack_a;
    t_list  *stack_b;

    stack_b = NULL;
    stack_b = init_b(stack_b, size);

    stack_a = ft_lstnew(array[i++]);
    while(i < size)
    {
        ft_lstadd_back(&stack_a, ft_lstnew(array[i++]));
    }

    //do_push(&stack_a, &stack_b);

    //print_nbr(stack_a->content);

    print_stacks(stack_a, stack_b);

    return (0);
}