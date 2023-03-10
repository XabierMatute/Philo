/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inittimes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:37:45 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/10 18:59:18 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	inittimes(int arg[5])
{
	is_death(arg[time_to_die]);
	ms_to_eat(arg[time_to_eat]);
	ms_to_sleep(arg[time_to_sleep]);
	return (0);
}
