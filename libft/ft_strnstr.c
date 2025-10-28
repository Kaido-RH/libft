/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrahmou <ahrahmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:48:54 by ahrahmou          #+#    #+#             */
/*   Updated: 2025/10/22 22:56:46 by ahrahmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s2[i])
		return ((char *)&s1[i]);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] && (i + j < n))
		{
			j++;
		}
		if (!s2[j])
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
