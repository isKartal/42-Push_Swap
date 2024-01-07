/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:01:29 by iskartal          #+#    #+#             */
/*   Updated: 2023/12/15 17:58:06 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *data)
{
	int	swap;

	swap = data->stacka[0];
	data->stacka[0] = data->stacka[1];
	data->stacka[1] = swap;
	write(1, "sa\n", 3);
}

void	sb(t_data *data)
{
	int	swap;

	swap = data->stackb[0];
	data->stackb[0] = data->stackb[1];
	data->stackb[1] = swap;
	write(1, "sb\n", 3);
}

void	ss(t_data *data)
{
	int	swap;

	swap = data->stackb[0];
	data->stackb[0] = data->stackb[1];
	data->stackb[1] = swap;
	swap = data->stacka[0];
	data->stacka[0] = data->stacka[1];
	data->stacka[1] = swap;
	write(1, "ss\n", 3);
}
