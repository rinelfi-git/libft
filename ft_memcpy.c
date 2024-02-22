/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:12:03 by erijania          #+#    #+#             */
/*   Updated: 2024/02/22 18:03:52 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s_dest;
	char	*s_src;
	int		i;

	s_dest = (char *) dest;
	s_src = (char *) src;
	i = 0;
	while (s_src[i] && s_dest + i && n > 0)
	{
		s_dest[i] = s_src[i];
		i++;
		n--;
	}
	return (dest);
}
