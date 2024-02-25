/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:24:39 by erijania          #+#    #+#             */
/*   Updated: 2024/02/25 18:47:22 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + i));
	while (((long)i) >= 0)
	{
		if (((unsigned char)s[i]) == ((unsigned char)c))
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
