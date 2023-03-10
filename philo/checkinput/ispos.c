/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ispos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:02:59 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/09 13:14:17 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	is4pos(int arg[5])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!(arg[i] > 0))
			return (pos_error(arg[i]));
		i++;
	}
	return (1);
}
