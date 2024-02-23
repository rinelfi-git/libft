/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:55:47 by erijania          #+#    #+#             */
/*   Updated: 2024/02/23 11:29:50 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*heap;

	if (lst == NULL || del == NULL)
		return ;
	heap = *lst;
	if (heap && heap->next)
		ft_lstclear(&heap->next, del);
	ft_lstdelone(heap, del);
	*lst = NULL;
}
