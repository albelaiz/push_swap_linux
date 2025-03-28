/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yup <yup@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:42:57 by albelaiz          #+#    #+#             */
/*   Updated: 2025/03/27 14:26:14 by yup              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long ft_atoi(const char *str)
{
	int			i;
	int			g;
	long long	r;

	i = 0;
	g = 1;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			g *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - 48);
		if (r > LLONG_MAX && g == 1)
			return (-1);
		if (r > LLONG_MAX && g == -1)
			return (0);
		i++;
	}
	return (r * g);
}
