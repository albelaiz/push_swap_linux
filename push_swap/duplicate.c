/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:58:27 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/11 18:15:26 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int duplicet(int nb, int size)
{
    long tmp;
    int i = 0;
    int j;
    while (i < size)
    {
        tmp = nb;
        j = 0;
        while (j < i)
        {
              printf("ana hna\n");
            if (nb == tmp)
				return(ft_error(),0);
            j++;
        }
        i++;
    }
    return (1);
}