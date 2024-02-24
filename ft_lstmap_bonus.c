/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:41:35 by erijania          #+#    #+#             */
/*   Updated: 2024/02/24 16:31:29 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	delete_content(void *c)
{
	free(c);
	c = NULL;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
	{
		ft_lstclear(&lst, &delete_content);
		return (NULL);
	}
	if (lst->next)
		new_list->next = ft_lstmap(lst->next, f, del);
	if (del)
		del(lst);
	return (new_list);
}
