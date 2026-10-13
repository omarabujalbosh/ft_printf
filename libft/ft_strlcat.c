/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 14:48:34 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/10/04 10:40:05 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;
	size_t	sum;

	i = 0;
	sum = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	if (size <= dlen)
		return (size + slen);
	sum = slen + dlen;
	while (src[i] != '\0' && dlen < size - 1)
	{
		dest[dlen] = src[i];
		i++;
		dlen++;
	}
	dest[dlen] = '\0';
	return (sum);
}
/*
int	main()
{
	char str[5] = "omar";
	char dest[6] = "osama";
	printf("%zu", ft_strlcat(dest,str,6));
}
*/
