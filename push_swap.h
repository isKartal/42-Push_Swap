/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:59:58 by iskartal          #+#    #+#             */
/*   Updated: 2023/12/15 17:57:14 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_data
{
	long	*stacka;
	long	*stackb;
	int		alen;
	int		blen;
	char	*str;
	int		*sorted_list;
	int		max_bit;
	int		minindex;
	char	**nbrfc;
	long	*nbr;
}	t_data;

void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
long	ft_atoi(char *a, t_data *data);
int		ft_control(char *str);
void	ft_error(t_data *data);
char	**ft_split(char *s, char c, int *len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *c);
void	ft_bzero(void *s, size_t n);
char	*ft_strjoin(char *s1, char *s2);
int		ft_isdigit(char a);
void	insertion_sort(t_data *data);
void	radix_sort(t_data *data);
void	get_index(t_data *data);
void	init_stack(t_data *data);
int		is_empty(char **str);
void	findmin(t_data *data);
void	myshortsort(t_data *data);
int		samenumbercontrol(t_data *data);
void	sortmechanism(int argc, t_data *data);
void	str_complete(t_data *data, char **str);
void	othercase(t_data *data, int a);
int		max_bits(t_data *data);
int		issorted(t_data *data);

#endif
