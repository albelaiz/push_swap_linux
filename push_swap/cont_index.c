/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cont_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 21:28:02 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/15 00:39:55 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	cont_index(t_list **a)
{
    t_list	*tmp;
    t_list	*current;
    int		cont;

    if (!a || !*a)
        return ;
    current = *a;
    while (current)
    {
        tmp = *a;
        cont = 0;
        while (tmp)
        {
            if (current->content > tmp->content)
                cont++;
            tmp = tmp->next;
        }
        current->index = cont;
        current = current->next;
    }
}
