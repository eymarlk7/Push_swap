#include "../../includes/push_swap.h"

// ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.

void ft_rotate(t_stack **stack)
{
    t_stack *tmp;
    t_stack *lst;

    if (!*stack || !(*stack)->next)
        return;
    
    tmp = *stack; // Salva o primeiro elemento
    *stack = (*stack)->next; // Move o ponteiro do topo da pilha para o próximo elemento
    
    lst = lst_last(*stack); // Obtém o último elemento da pilha
    lst->next = tmp; // Conecta o último elemento ao antigo topo da pilha
    tmp->next = NULL; // Define o antigo topo como o último elemento
}


void    ft_ra(t_stack **a, bool print)
{
    ft_rotate(a);
    if (!print)
    	ft_putstr_fd("ra\n", 1);
}

// rb (rotate b): Shift up all elements of stack a by 1.
// The first element becomes the last one.
void    ft_rb(t_stack **b, bool print)
{
    ft_rotate(b);
    if (!print)
    	ft_putstr_fd("rb\n", 1);
}
