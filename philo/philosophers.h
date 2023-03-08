/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:06:58 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/08 18:53:48 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdio.h>

/* ------------------- checkinput ---------------------*/
int	printcorrectinput(void);
int	invalidinput(int argc, char const *argv[]);
int	isnumeric2(int n, char const *s2[]);
int	isinrange2(int n, char const *s2[]);

/* ------------------- ERRORS ---------------------*/
int	argc_error(int argc);
int	numeric_error(char const *s);
int	range_error(char const *s);

#endif