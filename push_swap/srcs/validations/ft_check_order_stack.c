/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_order_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:03:27 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/10 17:03:40 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_stack_sorted(t_stack *stack_a)
{
	int	tmp;

	tmp = stack_a->val;
	while (stack_a)
	{
		if (tmp > stack_a->val)
			return (0);
		tmp = stack_a->val;
		stack_a = stack_a->next;
	}
	return (1);
}
