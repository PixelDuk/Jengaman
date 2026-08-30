/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duk <duk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 11:45:03 by duk               #+#    #+#             */
/*   Updated: 2026/08/30 13:42:52 by duk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sublen;
	char	*sub;
	size_t	i;

	if (start >= ft_strlen(s))
		sublen = 0;
	else if (len > ft_strlen(&s[start]))
		sublen = ft_strlen(&s[start]);
	else
		sublen = len;
	sub = malloc((sublen + 1) * sizeof(char));
	if (sub == 0)
		return (NULL);
	i = 0;
	while (i < sublen)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
