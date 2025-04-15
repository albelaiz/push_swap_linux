/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:09:48 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/16 00:47:27 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(const char *name, t_list *stack)
{
	printf("Stack  is %s\n", name);
	if (!stack)
	{
		printf("Stack %s is empty\n", name);
		return ;
	}
	printf("Stack %s: ", name);
	while (stack)
	{
		printf("%d ", stack->content);
		stack = stack->next;
	}
	printf("\n");
}

void	free_list(t_list **list)
{
	t_list	*tmp;

	while (*list)
	{
		tmp = *list;
		*list = (*list)->next;
		free(tmp);
	}
}
static void	sorting(t_list **a, t_list **b)
{
	int	j;

	j = ft_lstsize(*a);
	cont_index(a);
	if (j == 2)
		smal_sort(a);
	else if (j == 3)
		smal_thre(a);
	else if (j == 4)
		sortfour(a, b);
	else if (j == 5)
		smal_faive(a, b);
	else if (j > 5)
		sort_big(a, b, j);
}

int	main(int ac, char **av)
{
	int		i;
	t_list	**a;
	t_list	**b;

	a = malloc(sizeof(t_list *));
	b = malloc(sizeof(t_list *));
	i = 1;
	if (ac < 2)
		return (0);
	while (av[i])
	{
		args(av[i], a);
		i++;
	}
	if (is_sorted(a))
		sorting(a, b);
}
