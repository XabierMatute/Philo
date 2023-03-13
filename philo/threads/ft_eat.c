/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:07:25 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/13 16:04:01 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static int	on_egin(t_philosopher *philosopher, int tte)
{
	printer(philosopher->id, EAT);
	philosopher->spaghetti_time = ft_milisecond();
	return (ft_msleep(tte));
}

int	ft_eat(t_philosopher *philosopher, int arg[5])
{	
	if (philosopher->id % 2)
	{
		take_own_fork(philosopher);
		take_next_fork(philosopher, arg[number_of_philosophers]);
	}
	else
	{
		take_next_fork(philosopher, arg[number_of_philosophers]);
		take_own_fork(philosopher);
	}
	on_egin(philosopher, arg[time_to_eat]);
	if (philosopher->spaghetti_count)
		philosopher->spaghetti_count--;
	release_own_fork(philosopher);
	release_next_fork(philosopher, arg[number_of_philosophers]);
	return (0);
}
