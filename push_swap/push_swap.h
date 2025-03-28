/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yup <yup@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:09:52 by albelaiz          #+#    #+#             */
/*   Updated: 2025/03/28 01:49:24 by yup              ###   ########.fr       */
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
    void			*content;
	struct s_list	*next;
    
} t_list;

void ft_error();
void ft_ft(char *av);
int ft_strcmp(char *s1,char *s2);
long *args(char *str);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int duplecte(char **str);
int valid_number(char *str);
long ft_atoi(const char *str);
int skip_spece(int i , char *str);
size_t	ft_strlen(const char *str);
void	ft_putstr_fd(char *str, int fd);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
#endif