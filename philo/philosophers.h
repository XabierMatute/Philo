/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:06:58 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/09 12:53:37 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdio.h>

int		philosophers(int arg[5]);

/* ------------------- CHECKINPUT ---------------------*/
int		printcorrectinput(void);
int		invalidinput(int argc, char const *argv[]);
int		isnumeric2(int n, char const *s2[]);
int		isinrange2(int n, char const *s2[]);

/* ------------------- PARSE ---------------------*/
int		*parse(int argc, char const *argv[]);

/* ------------------- UTILS ---------------------*/
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *str1, const char *str2);
int		ft_atoi(const char *str);

/* ------------------- ERRORS ---------------------*/
int		argc_error(int argc);
int		numeric_error(char const *s);
int		range_error(char const *s);

#endif