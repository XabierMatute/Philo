/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spaghetti.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:22:40 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/13 14:47:34 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	spaghettileft(t_philosopher	**philosophers, int arg[5])
{
	int i;

	i = 0;
	while (i < arg[number_of_philosophers] && !(philosophers[i]->spaghetti_count))
		i++;
	if (i == arg[number_of_philosophers])
		return (0);
	return (1);
}