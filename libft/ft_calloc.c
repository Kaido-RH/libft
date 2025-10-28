/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrahmou <ahrahmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:55:20 by ahrahmou          #+#    #+#             */
/*   Updated: 2025/10/25 10:26:43 by ahrahmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t c, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(c * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, c * size);
	return (ptr);
}
