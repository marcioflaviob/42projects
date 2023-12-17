
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

void    do_swap(int *stack)
{
    int temp;

    temp = stack[0];
    stack[0] = stack[1];
    stack[1] = temp;
}

void    do_pa(int *a, int *b)
{
    if (b[0] == NULL)
        return;
    else
    {

    }
}

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

void    print_nbr(int a)
{
    if (a == NULL)
        ft_putchar_fd('X', 1);
    else
        ft_putnbr_fd(a, 1);
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

    stack_b = init_b(stack_b, size);

    stack_a = ft_lstnew(array[i++]);
    while(i < size)
    {
        ft_lstadd_back(&stack_a, ft_lstnew(array[i++]));
    }
    //ft_lstiter(stack_a, print_nbr);
    print_stacks(stack_a, stack_b);

    //printf("%d", stack_a[0]->content);
    //printf("%d", stack_a[0]->next->content);
    //do_sa(stack_a);
    //print_int(stack_a, stack_b, 7);
    return (0);
}