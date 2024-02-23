/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:55:50 by erijania          #+#    #+#             */
/*   Updated: 2024/02/23 09:16:21 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	lower(unsigned int i, char *c)
{
	*c = ft_tolower(*c);
}

int	main(void)
{
	char	c[] = "Iza no anaran'ingahy RAIKA ITO";
	ft_striteri(c, &lower);
	printf("string : %s\n", c);
	return (0);
}
