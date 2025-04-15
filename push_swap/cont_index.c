/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cont_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 21:28:02 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/16 00:30:06 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// void	cont_index(t_list **a)
// {
//     t_list	*tmp;
//     t_list	*current;
//     int		cont;

//     if (!a || !*a)
//         return ;
//     current = *a;
//     while (current)
//     {
//         tmp = *a;
//         cont = 0;
//         while (tmp)
//         {
//             if (current->content > tmp->content)
//                 cont++;
//             tmp = tmp->next;
//         }
//         current->index = cont;
//         current = current->next;
//     }
// }


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
			if (tmp -> content > cuurent -> content)
				counter++;
			cuurent = cuurent -> next;
		}
		tmp -> index = counter;
		tmp = tmp -> next;
		i++;
	}
}
