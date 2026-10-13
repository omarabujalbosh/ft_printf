/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 21:47:59 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/25 11:09:02 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			bytes;
	size_t			i;

	i = 0;
	if (size == 0 || nmemb == 0)
	{
		ptr = malloc(size * nmemb);
		return (ptr);
	}
	if (SIZE_MAX / size < nmemb)
		return (NULL);
	bytes = nmemb * size;
	ptr = malloc(bytes);
	if (!ptr)
		return (NULL);
	while (i < bytes)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
