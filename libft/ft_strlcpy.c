/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:40:50 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/23 16:48:10 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (size > 0)
	{
		size--;
		while (src[len] != '\0' && size--)
			*dest++ = src[len++];
		*dest = '\0';
	}
	while (src[len] != '\0')
		++len;
	return (len);
}
