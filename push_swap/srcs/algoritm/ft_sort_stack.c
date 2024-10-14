#include "../../includes/push_swap.h"

int get_target(t_stack *stack, int nbr) 
{
    int target_node;  
    long long best_index = LONG_MAX; 

    target_node = 0;
    while (stack) 
    {
        if (stack->val > nbr && stack->val < best_index) {
            best_index = stack->val; 
            target_node = stack->val;    
        }
        stack = stack->next; 
    }
    return (target_node); 
}

int get_up_cost(t_stack *a, t_stack *b, int target_node, int nbr)
{
    int push_cost;

    push_cost = ft_index(b, nbr);
    if (ft_index(a, target_node) > push_cost)
        push_cost = ft_index(a, target_node);
    return (push_cost);
}
int get_down_cost(t_stack *a, t_stack *b, int target_node, int nbr)
{
    int index_node;
    int push_cost;

    index_node = ft_index(b, nbr);
    push_cost = ft_stack_len(b) - index_node;
    if (ft_stack_len(a) - ft_index(a, target_node) > push_cost)
        push_cost = ft_stack_len(a) - ft_index(a, target_node);
    return (push_cost);
}
int get_cost_place(t_stack *a, t_stack *b, int target_node, int nbr)
{
    int cost_node;
    int cost_target;

    if (ft_index(b, nbr) <= ft_stack_len(b)/2)
        cost_node = ft_index(b, nbr);
    else
        cost_node = ft_stack_len(b) - ft_index(b, nbr);
    if (ft_index(a, target_node) <= ft_stack_len(a)/2)
        cost_target = ft_index(a, target_node);
    else
        cost_target = ft_stack_len(a)-ft_index(a, target_node);
    return (cost_node + cost_target);
} 
int push_cost(t_stack *a, t_stack *b, int target_node, int nbr)
{
    int down_cost;
    int cost_place;
    int smallest_cost;

    smallest_cost = get_up_cost(a, b, target_node, nbr);
    down_cost = get_down_cost(a, b, target_node, nbr);
    cost_place = get_cost_place(a, b, target_node, nbr);
    if (down_cost < smallest_cost)
        smallest_cost = down_cost;
    if (cost_place < smallest_cost)
        smallest_cost = cost_place;
    return (smallest_cost);
}

int smallest_cost(t_stack *a, t_stack *b, int target_node)
{
    int cost;
    int current_cost;

    cost = push_cost(a, b, target_node, b->val);
    while (b)
    {
        current_cost = push_cost(a, b, target_node, b->val);
        if (current_cost < cost)
            cost = current_cost;
        b = b->next;
    }
    return (cost);
}
