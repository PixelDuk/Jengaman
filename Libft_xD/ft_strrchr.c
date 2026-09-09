/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duk <duk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 22:19:15 by duk               #+#    #+#             */
/*   Updated: 2026/09/09 01:12:01 by duk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	size_t			i;

	i = ft_strlen(s) + 1;
	uc = (unsigned char)c;
	while (i > 0)
	{
		i--;
		if (s[i] == uc)
			return ((char *)&s[i]);
	}
	return (NULL);
}
