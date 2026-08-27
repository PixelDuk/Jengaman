/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duk <duk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 00:25:02 by duk               #+#    #+#             */
/*   Updated: 2026/08/28 01:14:17 by duk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n )
{
	size_t	i;
	size_t	j;
	size_t	s2len;

	i = 0;
	j = 0;
	s2len = ft_strlen(s2)
	if (s2len == 0)
		return ()
	while (i < n && s1[i] != s2[j])
		i++;
		while (s1[i] == s2[j] && s2[j] != '\0')
		


}