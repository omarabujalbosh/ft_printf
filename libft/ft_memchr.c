/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:24:38 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/10/03 13:16:12 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*ch;

	ch = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (ch[index] == (unsigned char)c)
			return (ch + index);
		index++;
	}
	return (NULL);
}
