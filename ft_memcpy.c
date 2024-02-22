/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:12:03 by erijania          #+#    #+#             */
/*   Updated: 2024/02/22 16:40:46 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s_dest;
	unsigned char	*s_src;
	int				i;
	size_t			size;

	s_dest = (unsigned char *) dest;
	s_src = (unsigned char *) src;
	i = 0;
	size = sizeof(char);
	while (s_src[i] && s_dest + i && n > 0)
	{
		s_dest[i] = s_src[i];
		i++;
		n -= size;
	}
	if (n > 0)
		s_dest[i] = '\0';
	return (dest);
}
