/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:12:20 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/12 14:46:43 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_find_max(t_stack *stack)
{
	long	max;
	t_stack	*max_node;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->val > max)
		{
			max = stack->val;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

t_stack	*ft_find_min(t_stack *stack)
{
	long	min;
	t_stack	*min_node;

	if (!stack)
		return (NULL);
	min = LONG_MAX;
	while (stack)
	{
		if (stack->val < min)
		{
			min = stack->val;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

int	ft_stack_len(t_stack *stack)
{
	int	i;
	
	if (!stack)
		return (0);
	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}
int ft_index(t_stack *stack, int nbr)
{
    int index;

    index = 0;
    while (stack)
    {
        if (stack->val == nbr)
            return (index);
        stack = stack->next;
        index++;
    }
    return (-1);
}
