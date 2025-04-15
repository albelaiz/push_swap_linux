/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 00:19:07 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/15 02:44:34 by albelaiz         ###   ########.fr       */
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
void smal_thre(t_list **a)
{
	t_list *tmp;
	tmp = ft_max_len(a);
	if (tmp == *a)
		ra(a);
	else if (tmp->content == (*a)->next->content)
		rra(a);
	if ((*a)->content > (*a)->next->content)
		sa(a,0);
}
