/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:24:39 by erijania          #+#    #+#             */
/*   Updated: 2024/02/22 20:04:50 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*match;

	match = NULL;
	while (*s)
	{
		if (*s == c)
			match = (char *)s;
		s++;
	}
	if (*s == c)
		match = (char *)s;
	return (match);
}
