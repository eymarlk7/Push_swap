#include "../../includes/push_swap.h"


void    ft_rotate_rev(t_stack **stack)
{
    t_stack *lst = NULL;
    t_stack *tmp;
    
    if (!*stack || !(*stack)->next)
        return ;
    tmp = *stack;
    while (tmp->next != NULL)
    {
        lst = tmp;
        tmp = tmp->next;
    }
    if (lst != NULL)
        lst->next = NULL;   
    tmp->next = *stack;
    *stack = tmp;
}

// rra (reverse rotate a): Shift down all elements of stack a by 1.
// The last element becomes the first one.
void    ft_rra(t_stack **a, bool print)
{
    ft_rotate_rev(a);
    if (!print)
    	ft_putstr_fd("rra\n", 1);
}


// rrb (reverse rotate b): Shift down all elements of stack b by 1.
// The last element becomes the first one.
void    ft_rrb(t_stack **b, bool print)
{
    ft_rotate_rev(b);
    if (!print)
    	ft_putstr_fd("rra\n", 1);
}
