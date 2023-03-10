/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:25:41 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/10 08:21:58 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	philosophers(int arg[5])
{
	t_philosopher	*philosopher;

	if (!is4pos(arg))
		return (1);
	philosopher = philomaker(arg[number_of_philosophers]);
	printphilos(philosopher, arg[number_of_philosophers]);
	return (0);
}
