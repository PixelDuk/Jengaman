/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duk <duk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 17:39:02 by duk               #+#    #+#             */
/*   Updated: 2026/09/04 16:16:28 by duk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_count_digits(long n)
{
	long	count;

	count = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_transfer_digits(char *str, int i, long nb, int digits)
{
	int	count;

	count = 0;
	while (count < digits)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
		count++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		digits;
	int		sign;
	int		i;

	nb = n;
	sign = 0;
	if (nb < 0)
	{
		sign = 1;
		nb = -nb;
	}
	digits = ft_count_digits(nb);
	str = malloc((digits + sign + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = digits + sign - 1;
	ft_transfer_digits(str, i, nb, digits);
	if (sign == 1)
		str[0] = '-';
	str[digits + sign] = '\0';
	return (str);
}
