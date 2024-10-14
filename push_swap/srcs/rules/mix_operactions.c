#include "../../includes/push_swap.h"

// ss : sa and sb at the same time.
void    ft_ss(t_stack **a, t_stack **b, bool print)
{
    if (!*a || !(*a)->next || !*b || !(*b)->next)
        return ;
    ft_swap(a);
    ft_swap(b);
    if (!print)
    	ft_putstr_fd("ss\n", 1);
}

// rr : ra and rb at the same time.
void    ft_rr(t_stack **a, t_stack **b, bool print)
{
    if (!*a || !(*a)->next || !*b || !(*b)->next)
        return ;
    ft_rotate(a);
    ft_rotate(b);
    if (!print)
    	ft_putstr_fd("rr\n", 1);
}

// rrr : rra and rrb at the same time.
void    ft_rrr(t_stack **a, t_stack **b, bool print)
{
    if (!*a || !(*a)->next || !*b || !(*b)->next)
        return ;
    ft_rotate_rev(a);
    ft_rotate_rev(b);
    if (!print)
    	ft_putstr_fd("rrr\n", 1);
}
