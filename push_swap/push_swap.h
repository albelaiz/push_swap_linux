/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:09:52 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/16 01:20:04 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				val;
	int				content;
	struct s_list	*next;
	long			number;
	int				index;
	int				position;

}					t_list;

void				ft_error(void);
void				ra(t_list **a);
void				rb(t_list **b);
void				smal_faive(t_list **a, t_list **b);
void				rrb(t_list **b);
void				rra(t_list **a);
void				ft_ft(char *av);
t_list				*ft_min_len(t_list **a);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
t_list				*ft_lstnew(int con);
void				smal_sort(t_list **a);
void				sa(t_list **a, int i);
void				cont_index(t_list **a);
void				valid_number(char *str);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
long				ft_atoi(const char *str);
size_t				ft_strlen(const char *str);
void				pb(t_list **a, t_list **b);
void				pa(t_list **b, t_list **a);
t_list				*ft_max_len(t_list **a);
void				smal_thre(t_list **a);
void				print_stack(const char *name, t_list *stack);
void				rrr(t_list **a, t_list **b);
void				args(char *str, t_list **a);
int					skip_spece(int i, char *str);
int					ft_strcmp(char *s1, char *s2);
int					duplicet(t_list **a, int num);
void				ft_putstr_fd(char *str, int fd);
char				**ft_split(char const *s, char c);
void				ft_lstadd_back(t_list **lst, t_list *new);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
void				sort_big(t_list **a, t_list **b, int len);
int					is_sorted(t_list **a);
void				free_list(t_list **list);
void				sortfour(t_list **a, t_list **b);

#endif