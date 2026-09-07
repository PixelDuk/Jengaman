/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 19:04:01 by marvin            #+#    #+#             */
/*   Updated: 2026/09/07 19:04:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;


	if (lst == NULL)
		return (NULL);
	ft_lstiter(lst, *f);
	newlist = ft_lstnew(f(lst->content));
	while (lst->next != NULL)
	{
		newlist->content = lst->content;
		lst = lst->next;
	}
	return (newlist);
}