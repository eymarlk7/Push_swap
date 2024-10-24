/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcapalan <pcapalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:15:55 by pcapalan          #+#    #+#             */
/*   Updated: 2024/10/20 12:59:35 by pcapalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	process_input(const char **str, int *sign)
{
	while (**str == ' ' || **str == '\t' || **str == '\n' || **str == '\f'
		|| **str == '\v' || **str == '\r')
		(*str)++;
	if (**str == '-')
	{
		*sign = -1;
		(*str)++;
	}
	else if (**str == '+')
		(*str)++;
}

static long int	convert_to_number(const char *str, int sign)
{
	long int	i;

	i = 0;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (ATOI_INDICATOR_ERROR);
		i = i * 10 + (*str - '0');
		if ((sign * i) > 2147483647 || (sign * i) < -2147483648)
			return (ATOI_INDICATOR_ERROR);
		str++;
	}
	return (sign * i);
}

long int	ft_atoi2(const char *str)
{
	long int	nbr;
	int			sign;

	sign = 1;
	process_input(&str, &sign);
	if ((*str == '-' || *str == '+') && !*(str + 1))
		return (ATOI_INDICATOR_ERROR);
	nbr = convert_to_number(str, sign);
	return (nbr);
}
