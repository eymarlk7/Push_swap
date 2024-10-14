/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:15:55 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/11 14:15:59 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include <limits.h>

int	ft_atoi2(const char *str, char **split)
{
	int				sgn;
	long long int	result;

	result = 0;
	sgn = 1;
	while (*str == ' ' || *str == '\t' || (*str >= 10 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sgn = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		result = result * 10 + (*str - 48);
		str++;
	}
	if ((sgn * result) > 2147483647 || (sgn * result) < -2147483648)
		ft_split_error(split);
	return (sgn * result);
}

