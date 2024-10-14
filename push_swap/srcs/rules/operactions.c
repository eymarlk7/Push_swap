#include "../../includes/push_swap.h"

static void    ft_push(t_stack **dest, t_stack **src)
{
    t_stack *push_node;

    if (!*src)
        return ;
    else
    {
        push_node = *src;
        *src = (*src)->next;
        push_node->next = *dest;
        *dest = push_node;
    }
}

// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
void    ft_pa(t_stack **a, t_stack **b, bool print)
{
    ft_push(a, b);
    if (!print)
    	ft_printf("pa\n");
}

// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if b is empty.
void    ft_pb(t_stack **b, t_stack **a, bool print)
{
    ft_push(b, a);
    if (!print)
    	ft_printf("pb\n");
}

