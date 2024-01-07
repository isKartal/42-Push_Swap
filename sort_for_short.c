/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_short.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:01:58 by iskartal          #+#    #+#             */
/*   Updated: 2023/12/15 17:57:36 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortmechanism(int argc, t_data *data)
{
	if (argc < 7)
		myshortsort(data);
	else
		radix_sort(data);
}

void	findmin(t_data *data)
{
	int	i;

	i = 1;
	data->minindex = 0;
	while (i < data->alen)
	{
		if (data->stacka[data->minindex] > data->stacka[i])
			data->minindex = i;
		i++;
	}
}

int	issorted(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < data->alen)
	{
		while (j < data->alen)
		{
			if (data->stacka[i] > data->stacka[j] && i < j)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

void	myshortsort(t_data *data)
{
	int	tmp;

	while (data->alen != 1 && issorted(data))
	{
		tmp = data->alen / 2;
		findmin(data);
		if (data->minindex == 0)
			pb(data);
		else if (data->minindex == 1)
		{
			if (data->stacka[0] > data->stacka[data->alen - 1])
				ra(data);
			else
				sa(data);
		}
		else
		{
			if (data->stacka[0] > data->stacka[1])
				sa(data);
			othercase(data, tmp);
		}
	}
	while (data->blen > 0)
		pa(data);
}

void	othercase(t_data *data, int a)
{
	if (data->minindex < a)
		ra(data);
	else if (data->minindex >= a)
		rra(data);
}
