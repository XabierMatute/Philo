/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:07:16 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/09 13:13:24 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	pos_error(int i)
{
	printf("❌Error: Introduce solo valores positivos por favor\n");
	printf("         (Has introducido \"%i\")\n", i);
	return (0);
}
