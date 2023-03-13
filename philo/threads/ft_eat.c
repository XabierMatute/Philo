/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:07:25 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/13 14:49:55 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static int	on_egin(t_philosopher *philosopher, int tte)
{
	printer(philosopher->id, EAT);
	if (philosopher->spaghetti_count)
		philosopher->spaghetti_count--;
	philosopher->spaghetti_time = ft_milisecond();
	return (ft_msleep(tte));
}

int	ft_eat(t_philosopher *philosopher, int arg[5])
{	
	// printf("vamos a comer\n");
	if (philosopher->id % 2)
	{
		take_own_fork(philosopher);
		// printf("pillado\n");
		take_next_fork(philosopher, arg[number_of_philosophers]);
		// printf("pillados\n");
	}
	else
	{
		take_next_fork(philosopher, arg[number_of_philosophers]);
		// printf("pillado\n");

		take_own_fork(philosopher);
		// printf("pillados\n");
	}
	on_egin(philosopher, arg[time_to_eat]);
	// printf("soltamos tenedores..\n");
	release_own_fork(philosopher);
	release_next_fork(philosopher, arg[number_of_philosophers]);
	// printf("ya no vamos a comer\n");

	return (0);
}
