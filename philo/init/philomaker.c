/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philomaker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 07:54:02 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/13 13:20:35 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static t_philosopher	*createphilosopher(int id, int c)
{
	t_philosopher	*philosopher;

	philosopher = malloc(sizeof(t_philosopher));
	philosopher->id = id;
	philosopher->spaghetti_time = 0;
	philosopher->spaghetti_count = c;
	if (pthread_mutex_init(&(philosopher->fork), NULL))
		return (mtxerror());
	return (philosopher);
}

t_philosopher	**philomaker(int nop, int c)
{
	t_philosopher	**philosophers;
	int				i;

	philosophers = malloc((nop) * sizeof(t_philosopher *));
	if (!philosophers)
		return (0);
	i = 0;
	while (i < nop)
	{
		philosophers[i] = createphilosopher(i + 1, c);
		if (!philosophers[i])
			return (free(philosophers), NULL);//mete un liberate
		i++;
	}
	return (philosophers);
}
