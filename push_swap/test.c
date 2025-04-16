/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 21:30:53 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/16 12:45:47 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortfour(t_list **a, t_list **b)
{
	t_list	*min;
	t_list	*tmp;
	int		i;

	min = ft_min_len(a);
	i = 0;
	tmp = *a;
	while (tmp != min)
	{
		i++;
		tmp = tmp->next;
	}
	if (i <= 2)
	{
		while (*a != min)
			ra(a);
	}
	else
	{
		while (*a != min)
			rra(a);
	}
	pb(a, b);
	smal_thre(a);
	pa(a, b);
}
