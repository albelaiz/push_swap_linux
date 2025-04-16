/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cont_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 21:28:02 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/16 01:59:06 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cont_index(t_list **head)
{
	t_list	*tmp;
	t_list	*cuurent;
	int		counter;
	int		i;
	int		size;

	i = 0;
	tmp = *head;
	size = ft_lstsize(*head);
	while (i < size)
	{
		counter = 0;
		cuurent = *head;
		while (cuurent)
		{
			if (tmp->content > cuurent->content)
				counter++;
			cuurent = cuurent->next;
		}
		tmp->index = counter;
		tmp = tmp->next;
		i++;
	}
}
