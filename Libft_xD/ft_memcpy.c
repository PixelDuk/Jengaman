/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duk <duk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 18:20:15 by dgankhuy          #+#    #+#             */
/*   Updated: 2026/09/09 01:58:06 by duk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	const unsigned char	*psrc;
	size_t			i;

	pdest = (unsigned char *)dest;
	psrc = (const unsigned char *)src;
	i = 0;
	while (n > i)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}
