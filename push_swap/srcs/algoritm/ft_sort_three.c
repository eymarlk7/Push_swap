/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:04:03 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/13 12:31:14 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sort_three(t_stack **a)
{
    	if (!a || !(*a) || !(*a)->next || !(*a)->next->next)
    		return;
    	t_stack	*top;
    	
    	top = *a;
    	if (top == ft_find_min(*a))
    	{
    		ft_sa(a, 0);
    		ft_ra(a, 0);
    	}
    	else if (top == ft_find_max(*a))
    	{
    		ft_ra(a, 0);
    		if (!ft_stack_sorted(*a))
    			ft_sa(a, 0);
    	}
    	else if (top->next < top)
    		ft_sa(a, 0);
    	else
    		ft_rra(a, 0);
}

