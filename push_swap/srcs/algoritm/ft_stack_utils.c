/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <pcapalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:57:52 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/18 13:57:55 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_bigger_value(t_stack *node_top)
{
	int		bigger;
	t_stack	*aux;

	aux = node_top;
	bigger = node_top->val;
	while (aux)
	{
		if (aux->val > bigger)
			bigger = aux->val;
		aux = aux->next;
	}
	return (bigger);
}

int	ft_smaller_value(t_stack *node_top)
{
	int		smaller;
	t_stack	*aux;

	aux = node_top;
	smaller = node_top->val;
	while (aux)
	{
		if (aux->val < smaller)
			smaller = aux->val;
		aux = aux->next;
	}
	return (smaller);
}

int	ft_find_index_to_put(int number, t_stack *a)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (number < a->val && number > lst_last(a)->val)
		i = 0;
	else if (number > ft_bigger_value(a) || number < ft_smaller_value(a))
		i = ft_find_index(ft_smaller_value(a), a);
	else
	{
		tmp = a->next;
		while (a->val > number || tmp->val < number)
		{
			a = a->next;
			tmp = a->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_index(int val, t_stack *node_top)
{
	int		pos;
	t_stack	*aux;

	aux = node_top;
	pos = -1;
	while (aux)
	{
		pos++;
		if (aux->val == val)
			break ;
		aux = aux->next;
	}
	return (pos);
}
