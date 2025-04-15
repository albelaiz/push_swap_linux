/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 00:19:07 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/15 21:41:19 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void smal_sort(t_list **a)
{
	t_list *tmp;
	t_list *tmp1;
	
	tmp = *a;
	tmp1 = tmp->next;

		if (tmp->content > tmp1->content)
			sa(a,0);
}

// static void helper5(t_list **a, t_list **b,int len)
// {
// 	t_list	*tmp;
// 	t_list	*tmp1;
// 	t_list	*min;
// 	int		i;

// 	min = ft_min_len(a);
// 	tmp = *a;
// 	tmp1 = *a;
// 	i = 0;
// 	while (tmp1 != min)
// 	{
// 		i++;
// 		tmp1 = tmp1->next;
// 	}
// 	if (i <= len / 2)
// 	{
// 		while (*a != min)
// 			ra(a);
// 	}
// 	else
// 	{
// 		while (*a != min)
// 			rra(a);
// 	}
// 	pb(a,b);
// }

void smal_thre(t_list **a)
{
	t_list *tmp;

	if (!a || !*a || !(*a)->next)
		return;

	tmp = ft_max_len(a);

	if (tmp == *a)
		ra(a);
	else if (tmp == (*a)->next)
		rra(a);

	if ((*a)->content > (*a)->next->content)
		sa(a,0);
}

void smal_faive(t_list **a, t_list **b)
{
	t_list	*min;
	int		i;

	min = ft_min_len(a);
	i = 0;
	printf("tet\n");
	while (*a != min)
	{
		i++;
		if (i <= 2)
			ra(a);
		else
			rra(a);
	}
	pb(a, b);
	printf("tet\n");
	sortfour(a, b);
	pa(a, b);
}

