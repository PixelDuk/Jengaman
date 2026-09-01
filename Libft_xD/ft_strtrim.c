/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duk <duk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 14:52:52 by duk               #+#    #+#             */
/*   Updated: 2026/09/01 11:50:50 by duk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	start_pos(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (ft_strchr(set, s1[i]) != NULL && s1[i] != '\0')
		i++;
	return (i);
}

static size_t	end_pos(char const *s1, char const *set, size_t i)
{
	size_t	j;

	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[j]) != NULL && j > i)
		j--;
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;
	size_t	j;
	size_t	n;

	i = start_pos(s1, set);
	j = end_pos(s1, set, i);
	n = 0;
	if (s1[i] == '\0')
	{
		s2 = malloc(1 * sizeof(char));
		s2[n] = '\0';
		return (s2);
	}
	s2 = malloc((j - i + 2) * sizeof(char));
	if (s2 == 0)
		return (NULL);
	while ((j - i + 1) > n)
	{
		s2[n] = s1[i + n];
		n++;
	}
	s2[n] = '\0';
	return (s2);
}
