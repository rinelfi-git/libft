/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:09:41 by erijania          #+#    #+#             */
/*   Updated: 2024/02/22 20:03:28 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	strlen;

	i = 0;
	strlen = ft_strlen(dst);
	if (size <= (size_t)strlen)
		return (size + ft_strlen(src));
	while (src[i] && (size_t)(i + strlen) < (size - 1))
	{
		dst[i + strlen] = src[i];
		i++;
	}
	dst[i + strlen] = '\0';
	return (strlen + ft_strlen(src));
}
