/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:24:39 by erijania          #+#    #+#             */
/*   Updated: 2024/02/23 22:08:46 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*match;

	match = NULL;
	while (*s)
	{
		if (((unsigned char)*s) == ((unsigned char)c))
			match = (char *)s;
		s++;
	}
	if (((unsigned char)*s) == ((unsigned char)c))
		match = (char *)s;
	return (match);
}
