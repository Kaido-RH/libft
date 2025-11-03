/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrahmou <ahrahmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:43:56 by ahrahmou          #+#    #+#             */
/*   Updated: 2025/10/30 11:57:58 by ahrahmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

void	*free_split(char **arr, int i)
{
	int	j;

	j = 0;
	if (!arr)
		return (NULL);
	while (j < i)
	{
		free(arr[j]);
		j++;
	}
	free(arr);
	return (NULL);
}

char	*fill_split(char const *s, char c)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	i = 0;
	arr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			arr[i] = fill_split(s, c);
			if (!arr[i])
				return (free_split(arr, i));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
