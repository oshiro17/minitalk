/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:45:38 by noshiro           #+#    #+#             */
/*   Updated: 2022/06/19 11:05:12 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all_element(char **s, size_t idx)
{
	while (0 <= idx)
	{
		free(s[idx]);
		s[idx--] = NULL;
	}
	free(s);
	return (NULL);
}

static size_t	element_cnt(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c)
		{
			cnt++;
			while (*s && *s != c)
				s++;
		}
		while (*s && *s == c)
			s++;
	}
	return (cnt);
}

static char	**element_cpy(char const *s, char **split, char c, size_t element)
{
	size_t	idx;
	size_t	len;

	idx = 0;
	while (*s && idx < element)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		while (*(s + len) && *(s + len) != c)
			len++;
		if (len)
		{
			split[idx] = ft_substr(s, 0, len);
			if (!(split[idx]))
				return (free_all_element(split, idx));
			idx++;
		}
		s += len;
	}
	split[idx] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	element;
	char	**split;

	if (!s)
		return (NULL);
	element = element_cnt(s, c);
	split = (char **)malloc((element + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (element_cpy(s, split, c, element));
}
