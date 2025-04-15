/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:09:48 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/15 02:45:02 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack)
{
	t_list	*current;

	current = stack;
	printf("Stack: ");
	while (current != NULL)
	{
		printf("%d ", current->content);
		current = current->next;
	}
	printf("\n");
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	t_list	**a;

	i = 1;
	if (ac < 2)
		return (0);
	a = malloc(sizeof(t_list *));
	while (av[i])
	{
		args(av[i], a);
		i++;
	}
	j = ft_lstsize(*a);
	if (j == 2)
		smal_sort(a);
	else if (j == 3)
		smal_thre(a);
	else if (j == 5)
	// cont_index(a);
		print_stack(*a);
}

