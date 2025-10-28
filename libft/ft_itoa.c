/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrahmou <ahrahmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:08:55 by ahrahmou          #+#    #+#             */
/*   Updated: 2025/10/28 11:09:19 by ahrahmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	long	nb;
	int		i;

	i = 1;
	nb = n;
	if (nb < 0)
		nb = -nb;
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		sign;

	i = count_digits(n);
	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	s = (char *)malloc(sizeof(char) * (i + 1 + sign));
	if (!s)
		return (NULL);
	s[i + sign] = '\0';
	while (i--)
	{
		s[i + sign] = n % 10 + '0';
		n = n / 10;
	}
	if (sign)
		s[0] = '-';
	return (s);
}
