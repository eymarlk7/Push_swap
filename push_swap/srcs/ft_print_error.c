/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:18:57 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/11 14:23:10 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(t_stack *stack)
{
	write(2, "Error\n", 6);
	ft_free_stack(stack);
	exit(EXIT_FAILURE);
}

void	ft_split_error(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	write(1, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	ft_general_error(t_stack *stack, char **split)
{
	ft_free_str(split);
	ft_free_stack(stack);
	write(1, "Error\n", 6);
	exit(EXIT_FAILURE);
}
