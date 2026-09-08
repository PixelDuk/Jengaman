/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duk <duk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 19:04:01 by marvin            #+#    #+#             */
/*   Updated: 2026/09/08 13:41:08 by duk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*node;
	void	*tmp;

	newlist = NULL;
	if (lst == NULL)
		return (NULL);
	if (f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		tmp = f(lst->content);
		node = ft_lstnew(tmp);
		if (node == NULL)
		{
			ft_lstclear(&newlist, del);
			del(tmp);
			return (NULL);
		}
		ft_lstadd_back(&newlist, node);
		lst = lst->next;
	}
	return (newlist);
}
