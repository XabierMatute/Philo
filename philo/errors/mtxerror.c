/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtxerror.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 08:26:00 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/10 12:32:35 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

t_philosopher	mtxerror(void)
{
	t_philosopher	parmenides;

	parmenides.id = 0;
	printf("⚠️Error al realizar el mutex\n");
	return (parmenides);
}
