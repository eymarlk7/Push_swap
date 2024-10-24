/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_receive_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <pcapalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:11:53 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/20 12:56:57 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	checker_arg(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] == '-' || arg[i] == '+')
		{
			i++;
			if (!(arg[i] >= '0' && arg[i] <= '9'))
				return (-1);
		}
		else if (!(arg[i] >= '0' && arg[i] <= '9'))
			return (-1);
		i++;
	}
	return (0);
}

int	check_range(char *argv)
{
	int		i;
	long	nbr;

	i = -1;
	nbr = ft_atoi2(argv);
	while (argv[++i])
	{
		if (nbr == ATOI_INDICATOR_ERROR)
			return (-1);
	}
	return (0);
}

static t_stack	*ft_subprocess(char **av)
{
	t_stack	*a;
	char	**split;
	int		i;

	a = NULL;
	split = ft_split(av[1], ' ');
	i = -1;
	while (split[++i])
	{
		if (checker_arg(split[i]) == -1 || check_range(split[i]) == -1)
			ft_general_error(a, split);
		add_stack_back(&a, ft_atoi2(split[i]));
	}
	ft_free_str(split);
	return (a);
}

t_stack	*ft_process(int ac, char **av, int i, int j)
{
	t_stack	*a;
	char	**split;

	a = NULL;
	if (ac == 2)
		a = ft_subprocess(av);
	else if (ac > 2)
	{
		while (i < ac)
		{
			split = ft_split(av[i], ' ');
			if (!split[0])
				ft_general_error(a, split);
			j = -1;
			while (split[++j])
			{
				if (checker_arg(split[j]) == -1 || check_range(split[j]) == -1)
					ft_general_error(a, split);
				add_stack_back(&a, ft_atoi2(split[j]));
			}
			ft_free_str(split);
			i++;
		}
	}
	return (a);
}
