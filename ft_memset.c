/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:12:45 by erijania          #+#    #+#             */
/*   Updated: 2024/02/21 09:04:35 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, int n)
{
	unsigned char	*tmp;

	tmp = s;
	while (*tmp && n > 0)
	{
		*tmp = c;
		tmp++;
		n--;
	}
	return (s);
}
