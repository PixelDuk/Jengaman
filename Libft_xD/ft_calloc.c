/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duk <duk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 23:53:46 by duk               #+#    #+#             */
/*   Updated: 2026/08/29 00:24:49 by duk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	mult;

	mult = nmemb * size;
	p = malloc(mult);
	if (p == 0)
		return (NULL);
	ft_memset(p, 0, mult);
	return (p);
}
