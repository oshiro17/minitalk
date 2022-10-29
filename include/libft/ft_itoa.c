/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:27:51 by noshiro           #+#    #+#             */
/*   Updated: 2022/10/24 07:38:28 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_digits(int n)
{
	size_t	digits_num;

	digits_num = 1;
	n = n / 10;
	while (n)
	{
		n = n / 10;
		digits_num++;
	}
	return (digits_num);
}

char	*ft_itoa(int n)
{
	char		*str_num;
	long int	nb;
	size_t		digits_num;

	nb = n;
	digits_num = 0;
	if (n < 0)
	{
		nb = nb * -1;
		digits_num++;
	}
	digits_num = digits_num + count_digits(n);
	str_num = (char *)ft_calloc(sizeof(char), (digits_num + 1));
	if (!str_num)
		return (NULL);
	while (digits_num--)
	{
		*(str_num + digits_num) = nb % 10 + '0';
		nb = nb / 10;
	}
	if (n < 0)
		*(str_num) = '-';
	return (str_num);
}

//#include <stdio.h>
// int main(void)
// {
// 	printf("%s\n", ft_itoa(123156));
// 	return (0);
// }