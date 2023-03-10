/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philomaker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 07:54:02 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/10 12:36:38 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static t_philosopher	createphilosopher(int id)
{
	t_philosopher	philosopher;

	philosopher.id = id;
	philosopher.spaghetti_time = 0;
	if (pthread_mutex_init(&(philosopher.fork), NULL))
		return (mtxerror());
	return (philosopher);
}

t_philosopher	*philomaker(int nop)
{
	t_philosopher	*philosophers;
	int				i;

	philosophers = malloc(nop * sizeof(t_philosopher));
	if (!philosophers)
		return (0);
	i = 0;
	while (i < nop)
	{
		philosophers[i] = createphilosopher(i + 1);
		if (philosophers[i].id == 0)
			return (free(philosophers), NULL);
		i++;
	}
	return (philosophers);
}
