/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:20:25 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/09 12:40:13 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static unsigned int	ft_atou(const char *str)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = (str[i] - '0');
	while ((str[++i] >= '0') && (str[i] <= '9'))
		n = 10 * n + (str[i] - '0');
	return (n);
}

int	ft_atoi(const char *str)
{
	if (!ft_strcmp("-2147483648", str))
		return (-2147483648);
	if (str[0] == '-')
		return ((-1) * ft_atou(str + 1));
	if (str[0] == '+')
		return ((+1) * ft_atou(str + 1));
	return (ft_atou(str));
}
