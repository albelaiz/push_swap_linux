/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 21:30:53 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/15 21:34:34 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortfour(t_list **a, t_list **b)
{
	t_list	*min;
	int		i;

	min = ft_min_len(a);
	i = 0;
	while (*a != min)
	{
		i++;
		if (i <= 2)
			ra(a);
		else
			rra(a);
	}
	pb(a, b);
	smal_thre(a);
	pa(a, b);
}
// void	sortfive(t_list **a, t_list **b)
// {
// 	t_list	*min;
// 	int		i;

// 	min = ft_min_len(a);
// 	i = 0;
// 	while (*a != min)
// 	{
// 		i++;
// 		if (i <= 2)
// 			ra(a);
// 		else
// 			rra(a);
// 	}
// 	pb(a, b);
// 	smal_faive(a, b, 4);
// 	pa(a, b);
// }