/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:29:08 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/11 21:26:11 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static int	ariadne(t_philosopher philosopher, int arg[5])
{
	t_targ	targ;

	printf("\ncreamos hilo con:\n");
	printarg(arg);
	printphilo(philosopher);
	targ.arg = (int *)arg;
	targ.philosopher = &philosopher;
	return (pthread_create(&philosopher.thread, NULL, rutine_start, &targ));
}

int	launch(t_philosopher *philosophers, int arg[5])
{
	int	i;

	printf("\nlauncheamos\n");
	i = 0;
	while (i < arg[number_of_philosophers])
	{
		if (ariadne(philosophers[i], arg))
			return (1);
		i++;
	}
	return (0);
}
