/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 07:44:27 by erijania          #+#    #+#             */
/*   Updated: 2024/02/23 08:12:28 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		tmp;
	int		length;
	char	*ret;

	length = 1;
	tmp = n;
	while (tmp / 10)
	{
		length++;
		tmp /= 10;
	}
	ret = (char *)malloc((length + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ret[length--] = '\0';
	while (n / 10)
	{
		ret[length--] = (n % 10) + '0';
		n /= 10;
	}
	ret[length] = (n % 10) + '0';
	return (ret);
}
