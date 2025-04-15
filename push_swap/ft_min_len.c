/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:08:02 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/15 16:08:27 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_min_len(t_list **a)
{
	t_list *tmp1;
	t_list *tmp;
	int max;

	tmp = *a;
	tmp1 = tmp;
	max = tmp->content;
	while (tmp)
	{
		if (max > tmp->content)
		{
			max = tmp->content;
			tmp1 = tmp;
		}
		tmp = tmp->next;
	}
	return(tmp1);
}