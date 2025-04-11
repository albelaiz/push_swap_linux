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

int duplicet(int nb, int size)
{
    long tmp;
    int i = 0;
    int j;
    while (i < size)
    {
        tmp = nb;
        j = 0;
        //  printf("nb = %d ; i = %d\n",nb , i);
        while (j < i)
        {
              printf("ana hna\n");
            if (nb == tmp)
				return(ft_error(),0);
			else if (nb == 2147483647)
				return(ft_error(),0);
			else if (nb == -2147483648)
				return(ft_error(),0);
            j++;
        }
        i++;
    }
    return (1);
}