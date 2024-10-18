/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:12:12 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/17 19:00:31 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = ft_process(argc, argv, 1, 0);
	b = NULL;
	if (argc == 1)
		return (0);
	if (!a || ft_check_dup(&a))
		ft_error(a);
	if (!ft_stack_sorted(a))
	{
		if (ft_stack_len(a) == 2)
			ft_sa(&a);
		while (ft_stack_len(a) > 3)
			ft_pb(&b, &a);
		if (ft_stack_len(a) == 3 && !ft_stack_sorted(a))
			ft_sort_three(&a);
		ft_sort_stack(&a, &b);
		ft_last_change(&a);
	}
	ft_free_stack(a);
	ft_free_stack(b);
	return (0);
}
