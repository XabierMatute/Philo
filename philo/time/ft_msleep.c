/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_msleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:19:34 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/10 11:49:35 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static int	ft_wakeat(uint64_t waketime)
{
	while (ft_milisecond(GET) < waketime)
		usleep(100);
	return (waketime);
}

int	ft_msleep(int time)
{
	return (ft_wakeat(time + ft_milisecond(GET)));
}
