/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:11:17 by pcapalan          #+#    #+#             */
/*   Updated: 2024/09/25 15:13:42 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*create_stack_node(int val)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->val = val;
	node->next = NULL;
	return (node);
}

t_stack	*lst_last(t_stack *stack)
{
    	if (!stack)
        	return NULL;
	while (stack->next)
		stack = stack->next;
	return (stack);
}


void	add_stack_back(t_stack **stack, int val)
{
	t_stack	*lst;
	t_stack	*new;

	new = create_stack_node(val);
	if (!new)
		return ;
	if (*stack == NULL)
		*stack = new;
	else
	{	
		lst = lst_last(*stack);
		lst->next = new;
	}
}

void	ft_display_stack(t_stack *stack)
{
	while (stack != NULL)
	{
		ft_printf("%d\n", stack->val);
		stack = stack->next;
	}
}

