/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:46:38 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/17 19:53:44 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_stack_len(t_stack *node_top)
{
	int			i;
	t_stack	*aux;

	aux = node_top;
	i = 0;
	while (aux)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}

void	ft_sort_three(t_stack **a)
{
	if (ft_smaller_value(*a) == (*a)->val)
	{
		ft_rra(a);
		ft_sa(a);
	}
	else if (ft_bigger_value(*a) == (*a)->val)
	{
		ft_ra(a);
		if (!ft_stack_sorted(*a))
			ft_sa(a);
	}
	else
	{
		if (ft_find_index(ft_bigger_value(*a), *a) == 1)
			ft_rra(a);
		else
			ft_sa(a);
	}
}

void	ft_sort_stack(t_stack **a, t_stack **b)
{
	int			i;
	t_stack	*tmp;

	while (*b)
	{
		tmp = *b;
		i = ft_small_op(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*a, *b, tmp->val))
				i = ft_apply_rarb(a, b, tmp->val);
			else if (i == ft_case_rarrb(*a, *b, tmp->val))
				i = ft_apply_rarrb(a, b, tmp->val);
			else if (i == ft_case_rrarrb(*a, *b, tmp->val))
				i = ft_apply_rrarrb(a, b, tmp->val);
			else if (i == ft_case_rrarb(*a, *b, tmp->val))
				i = ft_apply_rrarb(a, b, tmp->val);
			else
				tmp = tmp->next;
		}
	}
}

void	ft_last_change(t_stack **a)
{
	int	smaller;
	int	pos;
	int	r_a;

	r_a = 1;
	smaller = ft_smaller_value(*a);
	pos = ft_find_index(smaller, *a);
	if (!(ft_stack_len(*a) / 2 >= pos + 1 || ft_stack_len(*a) / 2 == pos))
		r_a = -1;
	while ((*a)->val != smaller && r_a == 1)
		ft_ra(a);
	while ((*a)->val != smaller && r_a == -1)
		ft_rra(a);
}
