/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:00:54 by iskartal          #+#    #+#             */
/*   Updated: 2023/12/15 17:57:55 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insertion_sort(t_data *data)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	while (++i < (data->alen))
		data->sorted_list[i] = data->stacka[i];
	i = 0;
	while (i < data->alen)
	{
		j = 0;
		while (j < data->alen - 1)
		{
			if (data->sorted_list[j] > data->sorted_list[j + 1])
			{
				tmp = data->sorted_list[j];
				data->sorted_list[j] = data->sorted_list[j + 1];
				data->sorted_list[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	get_index(data);
}

int	max_bits(t_data *data)
{
	int	i;
	int	mx;

	i = 0;
	data->sorted_list = malloc(sizeof(int) * data->alen);
	if (!data->sorted_list)
		return (0);
	insertion_sort(data);
	mx = data->alen - 1;
	while (mx != 0)
	{
		mx /= 2;
		i++;
	}
	return (i);
}

void	radix_sort(t_data *data)
{
	int	mx;
	int	i;
	int	j;

	i = 0;
	j = 0;
	mx = max_bits(data);
	while (j < mx)
	{
		i = data->alen;
		while (i > 0)
		{
			if (((data->stacka[0] >> j) & 1) == 0)
				pb(data);
			else
				ra(data);
			i--;
		}
		while (data->blen > 0)
			pa(data);
		j++;
	}
}

void	get_index(t_data *data)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < data->alen)
	{
		j = 0;
		while (j < data->alen)
		{
			if (data->stacka[i] == data->sorted_list[j])
			{
				data->stacka[i] = j;
				i++;
				break ;
			}
			j++;
		}
	}
}
