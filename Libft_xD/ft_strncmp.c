/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgankhuy <dgankhuy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:43:37 by duk               #+#    #+#             */
/*   Updated: 2026/09/08 16:45:27 by dgankhuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i] && i < n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
