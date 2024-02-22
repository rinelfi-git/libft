/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:44:18 by erijania          #+#    #+#             */
/*   Updated: 2024/02/22 18:01:17 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*p_dest;
	const char	*p_src;
	int			i;

	if (src >= dest)
		ft_memcpy(dest, src, n);
	else
	{
		p_dest = (char *) dest;
		p_src = (const char *) src;
		i = n - 1;
		while (p_dest + i && p_src + i && p_src[i] && i >= 0)
		{
			p_dest[i] = p_src[i];
			i--;
		}
	}
	return (dest);
}
