/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:09:19 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/11/13 16:48:21 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <unistd.h>
#include <signal.h>

#include <stdio.h>
void	send_bits(int pid, char a)
{
	int bit;

	bit = 7;
	while(bit >= 0)
	{
		printf("%d", ((a >> bit) & 1));
		if ((a >> bit) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit--;
		usleep(151);
	}
	printf("\n");
}

int main(int ac, char **av)
{
	int pid;
	int i;

	if (ac != 3)
	{
		write (1, "2 enter argument", 17);
		return (0);
	}
	i = 0;
	pid = ft_atoi(av[1]);
	while(av[2][i])
	{
		send_bits(pid, av[2][i]);
		i++;
	}
	send_bits(pid, '\n');
}
