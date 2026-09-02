/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duk <duk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 11:52:00 by duk               #+#    #+#             */
/*   Updated: 2026/09/02 14:01:51 by duk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (word);
}

static char	*ft_word_mall(const char *s, char c)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	str = malloc((i + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	while (s[j] != '\0' && s[j] != c)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	int		i;
	int		j;

	i = 0;
	j = 0;
	list = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (list == NULL || s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			list[j] = ft_word_mall(&s[i], c);
			while (s[i] != '\0' && s[i] != c)
			{
				i++;
			}
			j++;
		}
		else
			i++;
	}
	list[j] = NULL;
	return (list);
}
