/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:11:19 by erijania          #+#    #+#             */
/*   Updated: 2024/02/22 22:14:10 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	size;
	int		i;

	size = count_words(s, c);
	ret = (char **)ft_calloc(size + 1, sizeof(char **));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		size = 0;
		while (*s && *s == c)
			s++;
		while (s[size] && s[size] != c)
			size++;
		if (size > 0)
			ret[i++] = ft_substr(s, 0, size);
		s += size;
	}
	ret[i] = NULL;
	return (ret);
}
