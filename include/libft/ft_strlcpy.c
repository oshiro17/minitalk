/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:10:12 by noshiro           #+#    #+#             */
/*   Updated: 2022/06/19 14:56:39 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;

	idx = 0;
	while (src[idx] && idx + 1 < dstsize)
	{
		dst[idx] = src[idx];
		idx++;
	}
	if (dstsize)
		dst[idx] = '\0';
	return (ft_strlen(src));
}

// copies up to dstsize - 1 characters from the string src to dst,
// NUL-terminating the result if dstsize is not 0.
//dstがNULLの時本家はsegmentation fault
//srcがNULLの時本家はabort

// #include<stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char dst [] = "12345";
// 	char src[] = "coucou";
// 	printf("%d",ft_strlcpy(dst,NULL,8));
// 	printf("%s",dst);
// 	return(0);
// }