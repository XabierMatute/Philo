/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   times.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:36:55 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/10 18:53:08 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	is_death(int starving_time)
{
	static int	dietime = 0;

	if (dietime == 0)
		dietime = starving_time;
	return (starving_time > dietime);
}

int	ms_to_eat(int t)
{
	static int	time = 0;

	if (time == 0)
		time = t;
	return (time);
}

int	ms_to_sleep(int t)
{
	static int	time = 0;

	if (time == 0)
		time = t;
	return (time);
}
