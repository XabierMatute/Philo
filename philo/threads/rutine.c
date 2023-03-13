/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rutine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:54:56 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/13 15:14:42 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static int	rutine(t_philosopher *philosopher, int arg[5])
{
	while (philosopher->id)
	{
		if (ft_eat(philosopher, arg))
			return (1);
		if (ft_sleep(philosopher, arg))
			return (2);
		if (ft_think(philosopher))
			return (3);
	}
	return (0);
}

void	*rutine_start(void *p)
{
	void	**targ;

	targ = ((void **)p);
	rutine(targ[0], targ[1]);
	return (p);
}
