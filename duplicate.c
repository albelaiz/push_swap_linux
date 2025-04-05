/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:58:27 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/04 15:00:06 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int duplicat(t_list *list)
{
    t_list *i;
    t_list *e;

    i = list;
	// printf("ana hna\n");
    while (i)
    {
        e = i->next;
        while (e)
        {
            if (i->content == e->content)
                return(1);
            e = e->next;
        }
        i = i->next;
    }
    return(0);
}