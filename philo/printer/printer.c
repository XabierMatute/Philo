/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:21:31 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/13 15:56:46 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

static char	*ft_strdup( const char *str1)
{
	char	*s;
	size_t	i;

	i = 0;
	s = malloc(sizeof(char) * (ft_strlen(str1) + 1));
	if (!s)
		return (0);
	while (str1[i])
	{
		s[i] = str1[i];
		i++;
	}
	s[i] = 0;
	return (s);
}

int	printer(int id, int flag)
{
	static pthread_mutex_t	courier = PTHREAD_MUTEX_INITIALIZER;
	char					*message;

	if (id == 0)
		return (1);
	if (flag == INIT)
		return (pthread_mutex_init(&(courier), NULL));
	if (flag == END)
		return (pthread_mutex_destroy(&(courier)));
	if (flag == FORK)
		message = ft_strdup("has taken a fork");
	if (flag == EAT)
		message = ft_strdup("is eating");
	if (flag == SLEEP)
		message = ft_strdup("is sleeping");
	if (flag == THINK)
		message = ft_strdup("is thinking");
	if (flag == DIE)
		message = ft_strdup("died");
	pthread_mutex_lock(&courier);
	printf("%llu %i %s\n", ft_milisecond(), id, message);
	if (flag != DIE)
		pthread_mutex_unlock(&courier);
	free (message);
	return (0);
}
