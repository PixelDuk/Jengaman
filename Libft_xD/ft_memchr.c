/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duk <duk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:27:18 by duk               #+#    #+#             */
/*   Updated: 2026/08/27 16:39:55 by duk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	value;
	size_t			i;

	src = (unsigned char *)s;
	value = (unsigned char)c;
	i = 0;
	while (i < n && src[i] != value)
		i++;
	if (n == i)
		return (0);
	return ((void *)&src[i]);
}
