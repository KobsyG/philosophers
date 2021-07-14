/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeco <gbeco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:42:46 by gbeco             #+#    #+#             */
/*   Updated: 2021/07/14 14:04:45 by gbeco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include <unistd.h>

typedef struct s_vars
{
	int	nbr;
	int	time_die;
	int	time_eat;
	int	time_to_sleep;
	int	nbr_eat;
}t_vars;

//srcs
void	ft_putstr_fd(char *s, int fd);
int		parsing(char **av, t_vars *vars);


#endif