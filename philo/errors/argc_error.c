/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:09:11 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/08 14:45:31 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	argc_error(int argc)
{
	printf("❌Error: numero incorrecto de argumentos\n");
	printf("  Has introducido %i\n", argc - 1);
	printf("  El imput debe ser de la forma:\n");
	printf("   ./philosopher number_of_philosophers time_to_die");
	printf(" time_to_eat time_to_sleep");
	printf(" [number_of_times_each_philosopher_must_eat\n");
	return (argc);
}
