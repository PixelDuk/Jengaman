/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duk <duk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 17:11:08 by marvin            #+#    #+#             */
/*   Updated: 2026/09/08 13:41:21 by duk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*nextone;

	if (lst == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		nextone = current->next;
		ft_lstdelone(current, del);
		current = nextone;
	}
	*lst = NULL;
}
