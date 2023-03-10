/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_milisecond.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 08:37:19 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/10 18:37:40 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

uint64_t	ft_milisecond(void)
{
	static struct timeval	rts = {0, 0};
	struct timeval			cst;

	if (rts.tv_sec == 0)
		if (gettimeofday(&rts, NULL))
			return (-1);
	if (gettimeofday(&cst, NULL))
		return (-1);
	return ((cst.tv_sec - rts.tv_sec) * 1000
		+ (cst.tv_usec - rts.tv_usec) / 1000);
}
