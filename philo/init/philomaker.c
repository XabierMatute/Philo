/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philomaker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 07:54:02 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/10 08:04:22 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static t_philosopher	createphilosopher(int id)
{
	t_philosopher	philosopher;

	philosopher.id = id;
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
		i++;
	}
	return (philosophers);
}
