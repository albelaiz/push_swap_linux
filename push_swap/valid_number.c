/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:58:52 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/11 18:20:33 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	valid_number(char *str)
{
	int	i;

	i = 0;
	if (!(str[0] == '-' || str[0] ==  '+' || ft_isdigit(str[0])))
		ft_error();
	i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_error();
		i++;
	}
}

t_list	*args(char *str , t_list **a)
{
	char	**tab;
	long nb;

	int (i), (cont), (j);
	i = 0;
	j = 0;
	cont = 0;
	tab = ft_split(str, ' ');
	if (!tab || !tab[0])
		ft_error();
	while (tab[j])
		(valid_number(tab[j]),j++);
	while (i < j)
	{
		nb = ft_atoi(tab[i]);
		if (nb < -2147483648 || nb > 2147483647)
    	    return (ft_error(), NULL);
		ft_lstadd_back(a , ft_lstnew(nb));
		i++;
	}
	return a;
}
