/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases_ab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:35:58 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/17 19:46:31 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	min_operations_for_push(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = ft_case_rrarrb(a, b, b->val);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->val))
			i = ft_case_rarb(a, b, tmp->val);
		if (i > ft_case_rrarrb(a, b, tmp->val))
			i = ft_case_rrarrb(a, b, tmp->val);
		if (i > ft_case_rarrb(a, b, tmp->val))
			i = ft_case_rarrb(a, b, tmp->val);
		if (i > ft_case_rrarb(a, b, tmp->val))
			i = ft_case_rrarb(a, b, tmp->val);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_case_rarb(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = ft_find_index_to_put(nbr, a);
	if (i < ft_find_index(nbr, b))
		i = ft_find_index(nbr, b);
	return (i);
}

int	ft_case_rrarrb(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (ft_find_index_to_put(nbr, a))
		i = ft_stack_len(a) - ft_find_index_to_put(nbr, a);
	if ((i < (ft_stack_len(b) - ft_find_index(nbr, b))) && ft_find_index(nbr,
			b))
		i = ft_stack_len(b) - ft_find_index(nbr, b);
	return (i);
}

int	ft_case_rarrb(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (ft_find_index(nbr, b))
		i = ft_stack_len(b) - ft_find_index(nbr, b);
	i = ft_find_index_to_put(nbr, a) + i;
	return (i);
}

int	ft_case_rrarb(t_stack *a, t_stack *b, int nbr)
{
	int	i;

	i = 0;
	if (ft_find_index_to_put(nbr, a))
		i = ft_stack_len(a) - ft_find_index_to_put(nbr, a);
	i = ft_find_index(nbr, b) + i;
	return (i);
}
