/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:05:22 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/10 13:26:29 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	main(int argc, char const *argv[])
{
	if (invalidinput(argc, argv))
		return (1);
	if (philosophers(parse(argc, argv)))
		return (1);
	return (0);
}
