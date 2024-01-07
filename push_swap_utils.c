/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:59:11 by iskartal          #+#    #+#             */
/*   Updated: 2023/12/15 17:58:54 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	str_complete(t_data *data, char **av)
{
	int	i;

	i = 2;
	data->str = ft_strdup(av[1]);
	if (av[i])
		data->str = ft_strjoin(data->str, " ");
	while (av[i])
	{
		data->str = ft_strjoin(data->str, av[i]);
		if (av[i + 1] != NULL)
			data->str = ft_strjoin(data->str, " ");
		i++;
	}
}

int	is_empty(char **str)
{
	int	i;
	int	j;
	int	check;

	j = 0;
	i = 1;
	while (str[i])
	{
		j = 0;
		check = 1;
		if (!(str[i][j]))
			return (1);
		while (str[i][j])
		{
			if (str[i][j] != ' ')
				check = 0;
			j++;
		}
		if (check == 1)
			return (1);
		i++;
	}
	return (0);
}

void	init_stack(t_data *data)
{
	int	i;
	int	len;

	i = 0;
	data->nbrfc = ft_split(data->str, ' ', &len);
	data->alen = len;
	data->stacka = malloc(sizeof(long) * data->alen);
	if (!data->stacka)
		return ;
	data->blen = 0;
	i = 0;
	while (data->nbrfc[i])
	{
		data->stacka[i] = ft_atoi(data->nbrfc[i], data);
		i++;
	}
}
