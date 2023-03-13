/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freelosophers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:39:05 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/13 15:09:23 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static int	asclepius(t_philosopher	*philosopher)
{
	philosopher->id = 0;
	philosopher->spaghetti_time = 0;
	philosopher->spaghetti_count = 0;
	pthread_mutex_unlock(&(philosopher->fork));
	pthread_mutex_destroy(&(philosopher->fork));
	return (free(philosopher), 0);
}

int	freelosophers(t_philosopher	**philosophers, int nop)
{
	int				i;

	if (!philosophers)
		return (1);
	i = 0;
	while (i < nop)
	{
		if (asclepius(philosophers[i]))
			printf("❗️Error al liberar\n");
		i++;
	}
	free(philosophers);
	return (0);
}
