/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:58:52 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/13 13:56:16 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <errno.h>
#include <string.h>
#include "../philosophers.h"

int	take_own_fork(t_philosopher *philosopher)
{
	pthread_mutex_lock(&(philosopher->fork));
	printer(philosopher->id, FORK);
	return (0);
}

int	take_next_fork(t_philosopher *philosopher, int nop)
{
	t_philosopher	*next;

	if (philosopher->id == nop)
		next = philosopher - nop + 1;
	else
		next = philosopher + 1;
	pthread_mutex_lock(&next->fork);
	printer(philosopher->id, FORK);
	return (0);
}

int	release_own_fork(t_philosopher *philosopher)
{
	return (pthread_mutex_unlock(&(philosopher->fork)));
}

int	release_next_fork(t_philosopher *philosopher, int nop)
{
	t_philosopher	*next;

	if (philosopher->id == nop)
		next = philosopher - nop + 1;
	else
		next = philosopher + 1;
	pthread_mutex_unlock(&(next->fork));
	return (0);
}
