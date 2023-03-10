/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freelosophers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:39:05 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/10 12:55:03 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static int	asclepius(t_philosopher	philosopher)
{
	philosopher.id = 0;
	philosopher.spaghetti_time = 0;
	if (pthread_mutex_destroy(&(philosopher.fork)))
		return (1);
	return (0);
}

int	freelosophers(t_philosopher	*philosophers, int nop)
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
