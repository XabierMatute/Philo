/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:25:41 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/13 16:01:12 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	philosophers(int arg[5])
{
	t_philosopher	**philosophers;

	if (!is4pos(arg))
		return (1);
	philosophers = philomaker(arg[number_of_philosophers],
			arg[number_of_times_each_philosopher_must_eat]);
	printer(0, INIT);
	if (!philosophers)
		return (merror());
	if (launch(philosophers, arg))
		return (1);
	while (!death(philosophers, arg) && spaghettileft(philosophers, arg))
		;
	freelosophers(philosophers, arg[number_of_philosophers]);
	printer(0, END);
	return (0);
}
