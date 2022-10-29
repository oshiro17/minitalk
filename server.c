/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 08:04:15 by noshiro           #+#    #+#             */
/*   Updated: 2022/10/24 08:10:15 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "minitalk.h"

void	action(int sig)
{
	static int				i;
	static unsigned char	c;

	if (sig == SIGUSR1)
		c = c * 2 + 1;
	else
		c = c * 2 + 0;
	i++;
	if (i == 8)
	{
		write(1, &c, 1);
		i = 0;
		c = 0;
	}
}

int	main(void)
{
	ft_printf("PID:%d\n", getpid());
	signal(SIGUSR1, action);
	signal(SIGUSR2, action);
	while (1)
		pause();
	return (0);
}

// 00000001 = 1
// 00000010 = 2
// 00000100 = 4
// 00001000 = 8
// 00010000 = 16
// 00100000 = 32
// 01000000 = 64
// 10000000 = 128
