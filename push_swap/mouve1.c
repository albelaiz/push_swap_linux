/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 00:05:12 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/16 01:57:18 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*tmp;
	t_list	*lst;

	if (!a || !(*a) || !(*a)->next)
		return ;
	tmp = *a;
	lst = ft_lstlast(*a);
	while (tmp->next->next)
		tmp = tmp->next;
	lst->next = *a;
	*a = lst;
	tmp->next = NULL;
	write(1, "rra\n", 4);
}
void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = *a;
	*a = tmp->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "pb\n", 3);
}

void	pa(t_list **b, t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	*a = tmp->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "pa\n", 3);
}

void	ra(t_list **a)
{
	t_list	*tmp;
	t_list	*last;

	if (!*a || a == NULL || (*a)->next == NULL)
		return ;
	tmp = *a;
	last = ft_lstlast(*a);
	last->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}
void	rb(t_list **b)
{
	t_list	*tmp;
	t_list	*last;

	if (!b || !(*b) || !(*b)->next)
		return ;
	tmp = *b;
	last = ft_lstlast(*b);
	last->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	write(1, "rb\n", 3);
}
