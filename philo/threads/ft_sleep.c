/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sleep.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:16:54 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/11 19:52:21 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	ft_sleep(t_philosopher philosopher, int arg[5])
{	
	printer(philosopher.id, SLEEP);
	ft_msleep(arg[time_to_sleep]);
	return (0);
}
