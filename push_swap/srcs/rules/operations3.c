/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:11:49 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/17 19:18:17 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rrb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	while (tmp && tmp->next)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	tmp->next = *b;
	*b = tmp;
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	tmp = *a;
	while (tmp && tmp->next)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	tmp->next = *a;
	*a = tmp;
	ft_rrr2(b);
	write(1, "rrr\n", 4);
}

void	ft_rrr2(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*prev;

	tmp = *b;
	while (tmp && tmp->next)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	tmp->next = *b;
	*b = tmp;
}
