/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 00:37:09 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/16 01:58:00 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
