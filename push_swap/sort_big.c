/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 22:24:46 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/16 00:24:55 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_position(t_list **a)
{
	t_list	*tmp;
	int		i;
	int		size;

	tmp = *a;
	size = ft_lstsize(*a);
	i = 0;
	while (tmp)
	{
		if (i <= size / 2)
			tmp->position = 0;
		else
			tmp->position = 1;
		tmp = tmp->next;
		i++;
	}
}
void	push_back(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = ft_max_len(b);
	set_position(b);
	if (tmp->position == 0)
	{
		while (*b != tmp)
			rb(b);
	}
	else
	{
		while (*b != tmp)
			rrb(b);
	}
	pa(a, b);
}

void	sort_big(t_list **a, t_list **b, int len)
{
	int	min;
	int	max;

	min = 0;
	max = len * 0.05 + 10;
	while (*a)
	{
		if ((*a)->index >= min && (*a)->index <= max)
		{
			pb(a, b);
			min++;
			max++;
		}
		else if ((*a)->index < min)
		{
			pb(a, b);
			rb(b);
			min++;
			max++;
		}
		else if ((*a)->index > max)
			ra(a);
	}
	while (*b)
		push_back(a, b);
}
