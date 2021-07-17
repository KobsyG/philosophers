/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <gbeco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:29:16 by gbeco             #+#    #+#             */
/*   Updated: 2021/07/17 14:03:19 by gbeco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"
#include "srcs/srcs.h"

void	*test(t_vars *vars)
{
	
	write(1, "test--------------\n", 19);
}

int	main(int ac, char **av)
{
	t_vars		vars;
	pthread_t	*threads;

	if (ac < 5)
	{
		ft_putstr_fd("Error\nArgument missing\n", 2);
		return (-1);
	}
	if (ac > 6)
	{
		ft_putstr_fd("Error\nToo many arguments\n", 2);
		return (-1);
	}
	if (parsing(av, &vars) != 0)
		return (-1);
	threads = malloc(sizeof(pthread_t) * vars.nbr);
	printf("pthread_create = %d\n", pthread_create(&threads[0], NULL, (void *)test, &vars));
	usleep(20);
	write(1, "test1\n", 6);
}