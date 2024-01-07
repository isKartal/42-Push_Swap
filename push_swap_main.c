/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:58:33 by iskartal          #+#    #+#             */
/*   Updated: 2023/12/15 17:59:10 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (ac <= 1 || !data)
		return (0);
	str_complete(data, av);
	init_stack(data);
	data->stackb = malloc(sizeof(long) * data->alen);
	if (!data->stackb)
		return (0);
	if (ft_control(data->str) || is_empty(av) || samenumbercontrol(data))
		ft_error(data);
	if (issorted(data))
		sortmechanism(ac, data);
	return (0);
}
