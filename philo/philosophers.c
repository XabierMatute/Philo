/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:25:41 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/10 18:59:25 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	philosophers(int arg[5])
{
	t_philosopher	*philosopher;

	if (!is4pos(arg))
		return (1);
	philosopher = philomaker(arg[number_of_philosophers],
			arg[number_of_times_each_philosopher_must_eat]);
	inittimes(arg);
	if (!philosopher)
		return (merror());
	printphilos(philosopher, arg[number_of_philosophers]);
	freelosophers(philosopher, arg[number_of_philosophers]);
	return (0);
}
