/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:05:22 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/09 12:26:05 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	main(int argc, char const *argv[])
{
	if (invalidinput(argc, argv))
		return (1);
	if (philosopher(parse(argc, argv)))
		return (1);
	return (0);
}
