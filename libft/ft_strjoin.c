/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrahmou <ahrahmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:00:44 by ahrahmou          #+#    #+#             */
/*   Updated: 2025/10/25 10:26:27 by ahrahmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (ft_substr(s2, 0, ft_strlen(s2)));
	if (!s2)
		return (ft_substr(s1, 0, ft_strlen(s1)));
	len = ft_strlen(s1) + ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[0] = '\0';
	ft_strlcat(s, s1, len + 1);
	ft_strlcat(s, s2, len + 1);
	return (s);
}
