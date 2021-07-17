/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <gbeco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:48:47 by gbeco             #+#    #+#             */
/*   Updated: 2021/07/17 08:19:12 by gbeco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	ft_atoi(char *s)
{
	int	nbr;
	int	i;

	nbr = 0;
	i = 0;

	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	while(s[i] >= '0' && s[i] <= '9')
	{
		nbr = nbr * 10 + (s[i] - 48);
		i++;
	}
	if (s[i] && (s[i] < 9 || s[i] > 13) && s[i] != ' ')
	{
		ft_putstr_fd("Error\nArguments must be digital\n", 2);
		return (-1);
	}
	return (nbr);
}

int	parsing(char **av, t_vars *vars)
{
	vars->nbr = ft_atoi(av[1]);
	vars->time_die = ft_atoi(av[2]);
	vars->time_eat = ft_atoi(av[3]);
	vars->time_to_sleep = ft_atoi(av[4]);
	if (av[5] != NULL)
		vars->nbr_eat = ft_atoi(av[5]);
	return (0);
}