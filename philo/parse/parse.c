/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:14:36 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/09 12:41:34 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	*parse(int argc, char const *argv[])
{
	static int	input[5];
	int			i;

	i = 0;
	while (i < 4)
	{
		input[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	if (argc == 6)
		input[4] = ft_atoi(argv[5]);
	else
		input[4] = -13;
	return (input);
}
