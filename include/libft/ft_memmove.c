/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:35:11 by noshiro           #+#    #+#             */
/*   Updated: 2022/06/16 15:47:15 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*s_dst;
	const unsigned char	*s_src;

	s_dst = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	i = 0;
	if (!s_dst && !s_src)
		return (NULL);
	if (s_src < s_dst)
		while (++i <= len)
			s_dst[len - i] = s_src[len - i];
	else
		while (len-- > 0)
			*(s_dst++) = *(s_src++);
	return (dst);
}

//dstのアドレスがsrcのアドレスよりも後ろの時は前　からコピー
//srcのアドレスがdstのアドレスよりも前　の時は後ろからコピー
// #include <stdio.h>
// int main(void)
// {
// 	char buf[] = "ABCDDEFG";
// 	char duf[] = "ABCDDEFG";

// 	memmove(buf,"skjhdfshfkjlssjdnbfl",0);
// 	ft_memmove(duf,"skjhdfshfkjlssjdnbfl",0);
// 	printf("original→%s\n",buf);
// 	printf("nonoka→%s\n",duf);
// 	return 0;
// }