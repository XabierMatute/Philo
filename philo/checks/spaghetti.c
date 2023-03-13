/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spaghetti.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:22:40 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/12 13:37:52 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	spaghettileft(t_philosopher	*philosophers, int arg[5])
{
	int i;

	i = 0;
	while (i <= arg[number_of_philosophers])
	{
		if (philosophers[i].spaghetti_count != 0)
		{
			return(1);
		}
		i++;
	}
	return (0);
}