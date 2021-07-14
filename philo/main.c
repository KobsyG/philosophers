/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <gbeco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:29:16 by gbeco             #+#    #+#             */
/*   Updated: 2021/07/14 14:13:36 by gbeco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"
#include "srcs/srcs.h"

int	main(int ac, char **av)
{
	t_vars	vars;
	
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
	if (!parsing(av, &vars))
		return (-1);
}