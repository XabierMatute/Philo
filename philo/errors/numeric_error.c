/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numeric_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:09:11 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/08 18:33:41 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	numeric_error(char const *s)
{
	printf("❌Error: Argumento no numerico\n");
	printf("         (Has introducido \"%s\")\n", s);
	printcorrectinput();
	return (0);
}
