/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:50:57 by erijania          #+#    #+#             */
/*   Updated: 2024/02/22 19:57:18 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strcpy(char *dest, char *src)
{
	int	src_i;

	src_i = -1;
	while (src[++src_i])
		dest[src_i] = src[src_i];
	dest[src_i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*ret;
	int		str_len;

	str_len = ft_strlen(s) + 1;
	ret = malloc(sizeof(char) * str_len);
	if (ret)
		return (ft_strcpy(ret, (char *) s));
	return (NULL);
}
