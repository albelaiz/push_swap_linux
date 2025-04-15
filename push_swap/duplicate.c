/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:58:27 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/15 21:24:21 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int duplicet(t_list **a, int size)
{
    t_list *current = NULL;
    t_list *runner = NULL;
    
    if (!a || !*a || size < 1)
        return (0);
    
    current = *a;
    while (current)
    {
        runner = current->next; // Start runner at next node
        while (runner)
        {
            if (runner->content == current->content)
                return (1); // Duplicate found
            runner = runner->next;
        }
        current = current->next;
    }

    return (0); // No duplicates
}