/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 07:44:27 by erijania          #+#    #+#             */
/*   Updated: 2024/02/23 08:47:40 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	n_sign(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

static int	n_length(int n)
{
	int	ret;

	ret = 1;
	if (n < 0)
		ret++;
	n = n * n_sign(n);
	while (n / 10)
	{
		ret++;
		n /= 10;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	int		length;
	int		sign;
	char	*ret;

	sign = n_sign(n);
	length = n_length(n);
	n = n * sign;
	ret = (char *)malloc((length + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ret[length--] = '\0';
	while (n / 10)
	{
		ret[length--] = (n % 10) + '0';
		n /= 10;
	}
	ret[length--] = (n % 10) + '0';
	if (sign < 0)
		ret[length] = '-';
	return (ret);
}
