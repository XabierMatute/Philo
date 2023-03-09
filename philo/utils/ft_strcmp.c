/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:23:48 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/09 11:24:44 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	size_t	i;

	i = 0;
	while (((unsigned char)str1[i] || (unsigned char)str2[i]))
	{
		if (str1[i] != str2[i])
			return (((unsigned char)str1[i] - (unsigned char)str2[i]));
		i++;
	}
	return (0);
}
