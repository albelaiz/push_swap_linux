/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yup <yup@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:58:52 by albelaiz          #+#    #+#             */
/*   Updated: 2025/03/28 02:15:24 by yup              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	skip_spece(int i, char *str)
{
	while (str[i] == ' ')
		i++;
	return (i);
}

int	skip_number(int i, char *str)
{
	if (str[i] == '-' || str[i] == '+')
	{
		if (!ft_isdigit(str[i + 1]))
		    ft_error();
	}
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}

int	valid_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i = skip_spece(i, str);
		if (ft_isalpha(str[i]))
		    ft_error();
		if (str[i] == '-' || str[i] == '+')
		{
			i++;
			if (str[i] == '-' || str[i] == '+')
				ft_error();
			if (!ft_isdigit(str[i]))
				ft_error();
			if (ft_isalpha(str[i]))
			    ft_error();
		}
		i = skip_number(i, str);
	}
	return(i);
}

long	*args(char *str)
{
	char	**tab;
	long	*numb;

	int(i), (cont);
	i = 0;
	cont = 0;
	if (!valid_number(str))
		return (ft_error(), NULL);
	tab = ft_split(str, ' ');
	if (!tab)
		exit(1);
	while (tab[cont])
		cont++;
	numb = malloc(sizeof(long) * (cont + 1));
	if (!numb)
		return (free(tab),ft_error(), NULL);
	while (i < cont)
	{
		numb[i] = ft_atoi(tab[i]);
		if (numb[i] > 2147483647 || numb[i] < -2147483648)
			return (free(numb), free(tab),ft_error(), NULL);
		i++;
	}
	return (free(tab), numb);
}
