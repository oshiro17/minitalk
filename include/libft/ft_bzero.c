/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:39:59 by noshiro           #+#    #+#             */
/*   Updated: 2022/06/19 14:57:55 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(char *)(s++) = '\0';
}

// #include <libc.h>
// int	main(void)
// {
// 	char	*s = NULL;
// 	size_t	n = 3;
// 	bzero(s,n);
// }
//sがnullの時はsegfaultするのが本家の挙動