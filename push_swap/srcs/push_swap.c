/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:12:12 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/13 12:29:25 by pcapalan         ###   ########.fr       */
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
		ft_printf("STACK A: \n");
		ft_display_stack(a);
		while (ft_stack_len(a) > 3)
			ft_pb(&b, &a, 0);
		ft_printf("STACK B: \n");
		ft_display_stack(b);
		ft_printf("STACK A: \n");
		ft_display_stack(a);
		if (!ft_stack_sorted(a))
			ft_sort_three(&a);
		ft_display_stack(a);
	}
	ft_free_stack(a);
	ft_free_stack(b);
	return (0);
}
