/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:55:50 by erijania          #+#    #+#             */
/*   Updated: 2024/02/22 20:16:20 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*src;
	char	*dest;

	src = "Akory rika zaza ty";
	dest = ft_strdup(ft_substr(src, 2, 3));
	printf("%s", dest);
	return (0);
}
