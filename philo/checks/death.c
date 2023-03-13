/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   death.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:15:05 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/13 16:00:34 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	starvation_time(int spaghetti_time)
{
	return (ft_milisecond() - spaghetti_time);
}

int	death(t_philosopher	**philosophers, int arg[5])
{
	int	i;

	i = 0;
	while (i < arg[number_of_philosophers])
	{
		if (starvation_time(philosophers[i]->spaghetti_time) > arg[time_to_die])
		{
			printer(philosophers[i]->id, DIE);
			return (1);
		}
		i++;
	}
	return (0);
}
