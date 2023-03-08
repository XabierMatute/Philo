/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:53:00 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/08 18:56:10 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	range_error(char const *s)
{
	printf("❌Error: Argumento fuera de rango\n");
	printf("         (Has introducido \"%s\")\n", s);
	printf("Introduce solo numeros en el rango de los integers\n");
	return (0);
}
