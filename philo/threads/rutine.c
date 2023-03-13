/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rutine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:54:56 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/13 10:54:23 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static int	rutine(t_philosopher philosopher, int arg[5])
{
	printphilo(philosopher);
	printarg(arg);
	// if (philosopher.id != 1)
	// 	return (1);


	// usleep(philosopher.id);
	// while (philosopher.spaghetti_count)
	// {
	// 	if (ft_eat(philosopher, arg))
	// 		return (1);
	// 	if (ft_sleep(philosopher, arg))
	// 		return (2);
	// 	if (ft_think(philosopher))
	// 		return (3);
	// }
	return (0);
}

void	*rutine_start(void *p)
{
	t_targ	targ;

	printf("\nrutina\n");
	targ = *((t_targ *)p);
	rutine(*targ.philosopher, targ.arg);
	return (p);
}
