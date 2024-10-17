/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:11:45 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/17 19:22:09 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_ra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*lst;

	tmp = *a;
	lst = *a;
	while (lst && lst->next)
		lst = lst->next;
	lst->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*lst;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	lst = *b;
	while (lst && lst->next)
		lst = lst->next;
	lst->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	write(1, "rb\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*lst;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	tmp = *a;
	lst = *a;
	while (lst->next)
		lst = lst->next;
	lst->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	tmp = *b;
	lst = *b;
	while (lst && lst->next)
		lst = lst->next;
	lst->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	write(1, "rr\n", 3);
}

void	ft_rra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (!*a || !(*a)->next)
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
	write(1, "rra\n", 4);
}
