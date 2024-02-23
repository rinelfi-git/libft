/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:55:50 by erijania          #+#    #+#             */
/*   Updated: 2024/02/23 10:25:19 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	t_list	*heap;
	t_list	**list;

	heap = ft_lstnew("Rijaniaina");
	list = &heap;
	ft_lstadd_front(list, ft_lstnew("Elie"));
	ft_lstadd_front(list, ft_lstnew("Fidèle"));
	printf("size : %d", ft_lstsize(*list));
	return (0);
}
