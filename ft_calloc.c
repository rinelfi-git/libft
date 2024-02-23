/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:40:46 by erijania          #+#    #+#             */
/*   Updated: 2024/02/23 20:00:48 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ret;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	ret = malloc(total);
	if (!ret)
		return (NULL);
	ft_memset(ret, 0, total);
	return (ret);
}
