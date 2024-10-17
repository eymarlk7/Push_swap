/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applies_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:27:36 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/17 19:52:55 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_apply_rarb(t_stack **a, t_stack **b, int nbr)
{
	while ((*b)->val != nbr && ft_find_index_to_put(nbr, *a) > 0)
		ft_rr(a, b);
	while ((*b)->val != nbr)
		ft_rb(b);
	while (ft_find_index_to_put(nbr, *a) > 0)
		ft_ra(a);
	ft_pa(a, b);
	return (-1);
}

int	ft_apply_rrarrb(t_stack **a, t_stack **b, int nbr)
{
	while ((*b)->val != nbr && ft_find_index_to_put(nbr, *a) > 0)
		ft_rrr(a, b);
	while ((*b)->val != nbr)
		ft_rrb(b);
	while (ft_find_index_to_put(nbr, *a) > 0)
		ft_rra(a);
	ft_pa(a, b);
	return (-1);
}

int	ft_apply_rrarb(t_stack **a, t_stack **b, int nbr)
{
	while (ft_find_index_to_put(nbr, *a) > 0)
		ft_rra(a);
	while ((*b)->val != nbr)
		ft_rb(b);
	ft_pa(a, b);
	return (-1);
}

int	ft_apply_rarrb(t_stack **a, t_stack **b, int nbr)
{
	while (ft_find_index_to_put(nbr, *a) > 0)
		ft_ra(a);
	while ((*b)->val != nbr)
		ft_rrb(b);
	ft_pa(a, b);
	return (-1);
}
