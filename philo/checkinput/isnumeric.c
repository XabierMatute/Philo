/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isnumeric.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:09:40 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/09 12:39:36 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static int	ft_isdigit(int arg)
{
	return (arg >= '0' && arg <= '9');
}

static int	isnumeric(char const s[])
{
	size_t	i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (!ft_isdigit(s[i]))
		return (numeric_error(s));
	while (ft_isdigit(s[i]))
		i++;
	if (s[i])
		return (numeric_error(s));
	return (1);
}

int	isnumeric2(int n, char const *s2[])
{
	while (n-- > 1)
	{
		if (!isnumeric(s2[n]))
			return (0);
	}
	return (1);
}
