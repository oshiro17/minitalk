/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pantti <pantti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:11:43 by noshiro           #+#    #+#             */
/*   Updated: 2022/06/17 00:29:54 by pantti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str_dst;
	char	*str_src;

	if (!dst && !src)
		return (NULL);
	str_dst = (char *)dst;
	str_src = (char *)src;
	while (n-- > 0)
	{
		*str_dst = *str_src;
		str_dst++;
		str_src++;
	}
	return (dst);
}

//この関数はmemmoveと違ってアドレスが重なってたら未定義
// #include <stdio.h>
// int main(void)
// {
// 	char buf[] = "ABCDDEFG";
// 	char duf[] = "ABCDDEFG";

// 	memcpy(buf,"skjhdfshfkjlssjdnbfl",0);
// 	ft_memcpy(duf,"skjhdfshfkjlssjdnbfl",0);
// 	printf("original→%s\n",buf);
// 	printf("nonoka→%s\n",duf);
// 	return 0;
// }