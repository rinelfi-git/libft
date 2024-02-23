/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:13:58 by erijania          #+#    #+#             */
/*   Updated: 2024/02/23 22:54:44 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

static size_t	ft_min(size_t s1, size_t s2)
{
	if (s1 < s2)
		return (s1);
	return (s2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	len = ft_min(ft_strlen(s), len);
	ret = (char *)malloc(((size_t)(len + 1)) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		ret[0] = '\0';
	else
		ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
