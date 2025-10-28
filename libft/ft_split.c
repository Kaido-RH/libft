/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrahmou <ahrahmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:43:56 by ahrahmou          #+#    #+#             */
/*   Updated: 2025/10/28 14:00:51 by ahrahmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != ' ')
			i++;
		words = words + 1;
	}
	return (words);
}

/*char	**ft_split(char const *s, char c)
{
	char 
*/
int main(){
	char s[] = "ahmed rahmouni";
	int i = count_words(s);
	printf("%d",i);
}