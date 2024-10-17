/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:51:29 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/17 19:04:05 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_check_dup(t_stack **cur)
{
	t_stack	*a;
	t_stack	*tmp;

	a = *cur;
	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->val == tmp->val)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}
