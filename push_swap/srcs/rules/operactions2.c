#include "../../includes/push_swap.h"

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.
void    ft_swap(t_stack **stack)
{
    t_stack *tmp;

   if (!*stack || !(*stack)->next)
        return;
    tmp = *stack;
    *stack = (*stack)->next;
    tmp->next = (*stack)->next;
    (*stack)->next = tmp;
}

void    ft_sa(t_stack **a, bool print)
{
    ft_swap(a);
    if (!print)
    	ft_putstr_fd("sa\n", 1);
}

// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.
void    ft_sb(t_stack **b, bool print)
{
    ft_swap(b);
    if (!print)
    	ft_putstr_fd("sb\n", 1);
}
