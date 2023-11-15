/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:22:28 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/11/14 15:59:40 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"
#include <unistd.h>
#include <signal.h>

void	ft_handler(int signal)
{
	static int	bit = 128;
	static int	chr = 0;

	if (signal == SIGUSR1)
		chr += bit;
	bit /= 2;
	if (bit == 0)
	{
		ft_putchar(chr);
		bit = 128;
		chr = 0;
	}
}

int	main(void)
{
	ft_putlogo(getpid());
	ft_putchar('\n');
	signal(SIGUSR1, ft_handler);
	signal(SIGUSR2, ft_handler);
	while (42)
		pause();
}
