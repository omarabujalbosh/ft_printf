/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 09:25:48 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/10/08 01:06:34 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	  *ch;
	size_t		i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			ch = (char *)(s + i);
			return (ch);
		}
		i--;
	}
	if ((unsigned char)s[0] == (unsigned char)c)
		return ((char *)s + i);
	return (NULL);
}
