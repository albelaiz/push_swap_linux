/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:58:27 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/15 23:20:35 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int duplicet(t_list **a, int num)
{
    t_list *tmp;

    if (!a || !*a)
        return (0);
    tmp = *a;
    while (tmp)
    {
        if (tmp->content == num)
            return (1);
        tmp = tmp->next;
    }
    return (0);
}