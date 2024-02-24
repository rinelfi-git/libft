/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_lstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:41:35 by erijania          #+#    #+#             */
/*   Updated: 2024/02/23 23:09:58 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (new_list == NULL)
	{
		ft_lstclear(&lst, &free);
		return (NULL);
	}
	if (lst->next)
		new_list->next = ft_lstmap(lst->next, f, del);
	if (del)
		del(lst);
	return (new_list);
}
