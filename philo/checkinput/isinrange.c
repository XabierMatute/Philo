/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isinrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:38:59 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/09 11:23:58 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static int	isinrange(char const s[])
{
	if (!ft_strcmp("-2147483648", s))
		return (1);
	if (*s == '-' || *s == '+')
		s++;
	if (ft_strlen(s) < 10)
		return (1);
	if (ft_strlen(s) > 10)
		return (range_error(s));
	if (ft_strcmp("2147483647", s) < 0)
		return (range_error(s));
	return (1);
}

int	isinrange2(int n, char const *s2[])
{
	while (n-- > 1)
	{
		if (!isinrange(s2[n]))
			return (0);
	}
	return (1);
}
