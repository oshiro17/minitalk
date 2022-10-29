/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:13:28 by noshiro           #+#    #+#             */
/*   Updated: 2022/06/19 14:55:31 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	const unsigned char	*s_s1;
	const unsigned char	*s_s2;

	s_s1 = (const unsigned char *)s1;
	s_s2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*s_s1 == *s_s2)
		{
			if (!*s_s1 && !*s_s2)
				break ;
			s_s1++;
			s_s2++;
		}
		else
			return (*s_s1 - *s_s2);
	}
	return (0);
}
