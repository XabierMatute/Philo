/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:25:41 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/09 13:14:38 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	philosophers(int arg[5])
{
	int	i;

	if (!is4pos(arg))
		return (1);
	i = 0;
	while (i < 5)
	{
		printf("%i: %i\n", i, arg[i]);
		i++;
	}
	return (0);
}
