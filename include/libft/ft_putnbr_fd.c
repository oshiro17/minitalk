/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:11:34 by noshiro           #+#    #+#             */
/*   Updated: 2022/06/17 19:11:37 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	l_n;

	l_n = (long)n;
	if (l_n < 0)
	{
		ft_putchar_fd('-', fd);
		l_n *= -1;
	}
	if (9 < l_n)
		ft_putnbr_fd(l_n / 10, fd);
	ft_putchar_fd("0123456789"[l_n % 10], fd);
}
