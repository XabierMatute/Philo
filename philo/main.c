/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:05:22 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/08 14:44:16 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	case4(char const *argv[])
{
	return (0);
}

int	case5(char const *argv[])
{
	return (0);
}

int	main(int argc, char const *argv[])
{
	if (argc == 5)
		return (case4(argv));
	else if (argc == 6)
		return (case5(argv));
	else
		return (argc_error(argc));
	return (0);
}
