/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:17:58 by erijania          #+#    #+#             */
/*   Updated: 2024/02/23 21:55:14 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (((unsigned char)*s) == ((unsigned char)c))
			return ((char *) s);
		s++;
	}
	if (((unsigned char)c) == '\0' && ((unsigned char)*s) == ((unsigned char)c))
		return ((char *) s);
	return (NULL);
}
