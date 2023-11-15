/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:09:19 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/11/14 15:59:32 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"
#include <unistd.h>
#include <signal.h>

void	send_bits(int pid, char a)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if ((a >> bit) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit--;
		usleep(151);
	}
}

int	main(int ac, char **av)
{
	int	pid;
	int	i;

	if (ac != 3)
	{
		ft_putstr("\x1b[31m[ERROR]\x1b[0m: Enter 2 argument\n");
		return (0);
	}
	i = 0;
	pid = ft_atoi(av[1]);
	while (av[2][i])
	{
		send_bits(pid, av[2][i]);
		i++;
	}
	send_bits(pid, '\n');
	return (0);
}
