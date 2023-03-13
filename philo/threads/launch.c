/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:29:08 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/13 15:04:14 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static int	ariadne(t_philosopher *philosopher, int arg[5])
{
	void	**targ;

	targ = malloc(sizeof(void *) * 2);
	targ[0] = (void *)philosopher;
	targ[1] = (void *)arg;
	return (pthread_create(&(philosopher->thread), NULL, rutine_start, targ));
	ft_msleep(1);
	free (targ);
}

int	launch(t_philosopher **philosophers, int arg[5])
{
	int	i;

	i = 0;
	while (i < arg[number_of_philosophers])
	{
		if (ariadne(philosophers[i], arg))
			return (1);
		i++;
	}
	return (0);
}
