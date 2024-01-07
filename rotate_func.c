/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:02:04 by iskartal          #+#    #+#             */
/*   Updated: 2023/12/15 17:58:37 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *data)
{
	int	temp;
	int	i;

	i = 0;
	temp = data->stacka[0];
	while (i <= data->alen)
	{
		data->stacka[i] = data->stacka[i + 1];
		i++;
	}
	data->stacka[data->alen - 1] = temp;
	write(1, "ra\n", 3);
}

void	rb(t_data *data)
{
	int	temp;
	int	i;

	i = 0;
	temp = data->stackb[0];
	while (i <= data->blen)
	{
		data->stackb[i] = data->stackb[i + 1];
		i++;
	}
	data->stackb[data->blen - 1] = temp;
	write(1, "rb\n", 3);
}

void	rra(t_data *data)
{
	int	temp;
	int	i;

	i = data->alen;
	temp = data->stacka[data->alen - 1];
	while (i > 0)
	{
		data->stacka[i] = data->stacka[i - 1];
		i--;
	}
	data->stacka[0] = temp;
	write(1, "rra\n", 4);
}

void	rrb(t_data *data)
{
	int	temp;
	int	i;

	i = data->blen;
	temp = data->stackb[data->blen - 1];
	while (i > 0)
	{
		data->stackb[i] = data->stackb[i - 1];
		i--;
	}
	data->stackb[0] = temp;
	write(1, "rrb\n", 4);
}
