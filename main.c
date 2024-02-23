/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:55:50 by erijania          #+#    #+#             */
/*   Updated: 2024/02/23 18:50:52 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <unistd.h>

int	main(void)
{
	char	*s;
	char	d[15];

	s = "This is the source";
	printf("%s\n", s);
	ft_strlcpy(d, "", 15);
	write(1, d, 15);
	return (0);
}
