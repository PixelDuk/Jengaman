/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgankhuy <dgankhuy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:31:15 by duk               #+#    #+#             */
/*   Updated: 2026/09/08 16:47:56 by dgankhuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;
	size_t			i;

	i = 0;
	uc = (unsigned char)c;
	while (s[i] != '\0' && s[i] != uc)
		i++;
	if (s[i] == uc)
		return ((char *)&s[i]);
	else
		return (NULL);
}
