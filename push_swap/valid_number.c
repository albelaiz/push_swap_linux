/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:58:52 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/16 01:24:02 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	valid_number(char *str)
{
	int	i;

	i = 0;
	if (!(str[0] == '-' || str[0] == '+' || ft_isdigit(str[0])))
		ft_error();
	i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_error();
		i++;
	}
}
int	ft_valid_line(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		j++;
		i++;
	}
	return (j);
}
void	args(char *str, t_list **a)
{
	char	**tab;
	long	nb;
	int		i;

	i = 0;
	tab = ft_split(str, ' ');
	if (!tab || !tab[0])
		ft_error();
	while (tab[i])
	{
		valid_number(tab[i]);
		nb = ft_atoi(tab[i]);
		if (nb > INT_MAX || nb < INT_MIN || ft_valid_line(tab[i]) > 11)
			ft_error();
            // 
		if (duplicet(a, nb))
			ft_error();
		ft_lstadd_back(a, ft_lstnew(nb));
		i++;
	}
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
}
