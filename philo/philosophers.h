/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:06:58 by xmatute-          #+#    #+#             */
/*   Updated: 2023/03/13 12:50:25 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>

//ARG
enum {
	number_of_philosophers,
	time_to_die,
	time_to_eat,
	time_to_sleep,
	number_of_times_each_philosopher_must_eat,
};

/* ------------------- CHECKINPUT ---------------------*/
int				printcorrectinput(void);
int				invalidinput(int argc, char const *argv[]);
int				isnumeric2(int n, char const *s2[]);
int				isinrange2(int n, char const *s2[]);
int				is4pos(int arg[5]);

/* ------------------- PARSE ---------------------*/
int				*parse(int argc, char const *argv[]);

/* ------------------- PHILOSOPHY ---------------------*/
int				philosophers(int arg[5]);

# define I_AM 1

typedef struct s_philosopher
{
	int				id;
	uint64_t		spaghetti_time;
	int				spaghetti_count;
	pthread_t		thread;
	pthread_mutex_t	fork;
}				t_philosopher;

/* ------------------- INIT ---------------------*/
t_philosopher	**philomaker(int nop, int c);
int				inittimes(int arg[5]);

/* ------------------- TIME ---------------------*/
int				ft_msleep(int time);
uint64_t		ft_milisecond(void);
int				ms_to_eat(int t);
int				ms_to_sleep(int t);

/* ------------------- TREADS ---------------------*/
int				launch(t_philosopher **philosophers, int arg[5]);
void			*rutine_start(void *p);
int				ft_eat(t_philosopher *philosopher, int arg[5]);
int				ft_sleep(t_philosopher *philosopher, int arg[5]);
int				ft_think(t_philosopher *philosopher);
int				take_own_fork(t_philosopher *philosopher);
int				take_next_fork(t_philosopher *philosopher, int nop);
int				release_own_fork(t_philosopher *philosopher);
int				release_next_fork(t_philosopher *philosopher, int nop);

/* ------------------- PRINTER ---------------------*/
int				printer(int id, int flag);
enum {
	INIT,
	FORK,
	EAT,
	SLEEP,
	THINK,
	DIE,
	END,
};
/* ------------------- CHECKS ---------------------*/
int				is_death(int starving_time);
int				death(t_philosopher	**philosophers, int arg[5]);
int				spaghettileft(t_philosopher	**philosophers, int arg[5]);

/* ------------------- UTILS ---------------------*/
size_t			ft_strlen(const char *s);
int				ft_strcmp(const char *str1, const char *str2);
int				ft_atoi(const char *str);

/* ------------------- END ---------------------*/
int				freelosophers(t_philosopher	**philosophers, int nop);

/* ------------------- ERRORS ---------------------*/
int				argc_error(int argc);
int				numeric_error(char const *s);
int				range_error(char const *s);
int				pos_error(int i);
int				merror(void);
t_philosopher	*mtxerror(void);

/* ------------------- DEBUG ---------------------*///BORRAME
void			printarg(int arg[5]);
void			printphilo(t_philosopher	*philosopher);

void	printphilos(t_philosopher	**philosophers, int nop);

#endif