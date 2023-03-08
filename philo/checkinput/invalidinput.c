/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalidinput.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:56:08 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/08 18:38:48 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	printcorrectinput(void)
{
	printf("Espero los argumentos:\n");
	printf("-number_of_philosophers\n");
	printf("-time_to_die\n");
	printf("-time_to_eat\n");
	printf("-time_to_sleep\n");
	printf("-[number_of_times_each_philosopher_must_eat]\n");
	return (1);
}

int	invalidinput(int argc, char const *argv[])
{
	if (argc < 5 || argc > 6)
		return (argc_error(argc));
	if (!isnumeric2(argc, argv))
		return (1);
	if (!isinrange2(argc, argv))
		return (1);
	return (0);
}
