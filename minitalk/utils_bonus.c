/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanyilm <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:08:28 by kkanyilm          #+#    #+#             */
/*   Updated: 2023/11/14 11:47:28 by kkanyilm         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res);
}

void	ft_putlogo(int pid)
{
	ft_putstr("            \x1b[38;5;208m',\x1b[0m\n");
	ft_putstr("            \x1b[38;5;208m.-`-,\\__\x1b[0m\n");
	ft_putstr("             \x1b[38;5;208m.\"`   `,\x1b[0m\n");
	ft_putstr("            \x1b[38;5;208m.'_.  ._  `;\x1b[0m\n");
	ft_putstr("        \x1b[38;5;208m__ / `      `  `.\\ .--.\x1b[0m\n");
	ft_putstr("       \x1b[38;5;208m/--,| \x1b[33m0)\x1b[38;5;208m   ");
	ft_putstr("\x1b[33m0)\x1b[38;5;208m     )`_.-,)\x1b[0m\n");
	ft_putstr("      \x1b[38;5;208m|    ;.-----.__ _-');   /\x1b[0m\n");
	ft_putstr("       \x1b[38;5;208m'--./         `.`/  `\"`\x1b[0m\n");
	ft_putstr("         \x1b[38;5;208m:   '`      |.      \x1b[0m\n");
	ft_putstr("          \x1b[38;5;208m| \\     /  // \x1b[0m PID: \e[1;93m");
	ft_putnbr(pid);
	ft_putstr("\e[0m\n           \x1b[38;5;208m\\ '---'  /'    \x1b[0m\n");
	ft_putstr("            \x1b[38;5;208m`------' \\  \x1b[0m\n");
	ft_putstr("             \x1b[38;5;208m_/       `--...\x1b[0m\n");
}
