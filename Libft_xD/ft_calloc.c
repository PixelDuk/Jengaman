/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duk <duk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 23:53:46 by duk               #+#    #+#             */
/*   Updated: 2026/09/09 01:26:11 by duk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, (nmemb * size));
	return (p);
}
