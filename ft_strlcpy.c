/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:06:38 by erijania          #+#    #+#             */
/*   Updated: 2024/02/22 18:08:14 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	src_i;

	src_i = -1;
	while (src[++src_i] && src_i < size - 1)
		dst[src_i] = src[src_i];
	while (src_i < size)
		dst[src_i++] = '\0';
	return (src_i);
}
