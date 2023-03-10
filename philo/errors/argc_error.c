/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:09:11 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/08 18:33:15 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	argc_error(int argc)
{
	printf("❌Error: Numero incorrecto de argumentos\n");
	printf("         (Has introducido %i)\n", argc - 1);
	printcorrectinput();
	return (argc);
}
