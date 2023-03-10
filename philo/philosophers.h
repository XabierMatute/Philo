/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:06:58 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/10 10:30:31 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>

int				philosophers(int arg[5]);
//ARG
enum {
	number_of_philosophers,
	time_to_die,
	time_to_eat,
	time_to_sleep,
	number_of_times_each_philosopher_must_eat,
};

typedef struct s_philosopher
{
	int		id;
}				t_philosopher;

/* ------------------- INIT ---------------------*/
t_philosopher	*philomaker(int nop);

/* ------------------- TIME ---------------------*/
uint64_t	ft_milisecond(int flag);
enum {
	INIT,
	GET,
};

/* ------------------- CHECKINPUT ---------------------*/
int				printcorrectinput(void);
int				invalidinput(int argc, char const *argv[]);
int				isnumeric2(int n, char const *s2[]);
int				isinrange2(int n, char const *s2[]);
int				is4pos(int arg[5]);

/* ------------------- PARSE ---------------------*/
int				*parse(int argc, char const *argv[]);

/* ------------------- UTILS ---------------------*/
size_t			ft_strlen(const char *s);
int				ft_strcmp(const char *str1, const char *str2);
int				ft_atoi(const char *str);

/* ------------------- ERRORS ---------------------*/
int				argc_error(int argc);
int				numeric_error(char const *s);
int				range_error(char const *s);
int				pos_error(int i);
int				merror(void);

/* ------------------- DEBUG ---------------------*///BORRAME
void			printarg(int	arg[5]);
void			printphilo(t_philosopher	philosopher);
void			printphilos(t_philosopher	*philosophers, int nop);

#endif