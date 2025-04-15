/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 00:08:10 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/15 00:17:02 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_list **b)
{
	t_list	*tmp;
	t_list	*lst;

	if (!b || !(*b) || !(*b)->next)
		return ;
	tmp = *b;
	lst = ft_lstlast(*b);
	lst->next = *b;
	*b = lst;
	tmp->next = NULL;
	write(1, "rrb\n", 4);
}
void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}

void	sa(t_list **a, int i)
{
	t_list	*s1;
	t_list	*s2;
	t_list	*tmp;

	if (!*a || a == NULL || (*a)->next == NULL)
		return ;
	s1 = *a;
	s2 = s1->next;
	tmp = s2->next;
	s2->next = s1;
	s1->next = tmp;
	*a = s2;
	if (!i)
		write(1, "sa\n", 3);
	else
		write(1, "sb\n", 3);
}
