/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:09:52 by albelaiz          #+#    #+#             */
/*   Updated: 2025/04/11 18:16:50 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
    int val;
    int			content;
	struct s_list	*next;
    long number;
    
} t_list;

void ft_error();
void ft_ft(char *av);
int ft_strcmp(char *s1,char *s2);
int	ft_isdigit(int c);
t_list	*args(char *str , t_list **a);
int	ft_isalpha(int c);
int duplicet(int nb, int size);
void valid_number(char *str);
long ft_atoi(const char *str);
int skip_spece(int i , char *str);
size_t	ft_strlen(const char *str);
void	ft_putstr_fd(char *str, int fd);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(int con);
t_list	*ft_lstlast(t_list *lst);
#endif