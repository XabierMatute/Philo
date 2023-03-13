/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_prints.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 08:07:02 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/11 20:29:31 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

void	printarg(int	arg[5])
{
	printf("number_of_philosophers:                     %i\n", arg[number_of_philosophers]);
	printf("time_to_die:                                %i\n", arg[time_to_die]);
	printf("time_to_eat:                                %i\n", arg[time_to_eat]);
	printf("time_to_sleep:                              %i\n", arg[time_to_sleep]);
	printf("number_of_times_each_philosopher_must_eat:  %i\n", arg[number_of_times_each_philosopher_must_eat]);
}

void	printphilo(t_philosopher	philosopher)
{
	if (is_death(ft_milisecond() - philosopher.spaghetti_time))
		printf("\n💀");
	else
		printf("\n🤔");
	printf("ID: %i\n", philosopher.id);
	printf("Spaghetti Time: %llu (%llu ms ago)\n", philosopher.spaghetti_time, ft_milisecond() - philosopher.spaghetti_time);
	printf("Spaghetti left: %i\n", philosopher.spaghetti_count);
	printf("Fork: %p\n", &(philosopher.fork));
}

void	printphilos(t_philosopher	*philosophers, int nop)
{
	int				i;

	i = 0;
	while (i < nop)
	{
		printphilo(philosophers[i]);
		i++;
	}
}
