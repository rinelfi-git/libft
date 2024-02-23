/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:01:03 by erijania          #+#    #+#             */
/*   Updated: 2024/02/23 19:49:26 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_min(int n1, int n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *) big);
	while (*big && len >= little_len)
	{
		if (ft_strncmp(big, little, ft_min(len, little_len)) == 0)
			return ((char *) big);
		big++;
		len--;
	}
	return (NULL);
}
