/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 09:02:13 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/10/07 23:45:14 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ch;
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			ch = (char *)(s + i);
			return (ch);
		}
		i++;
	}
	if (c == 0)
	{
		ch = (char *)(s + i);
		return (ch);
	}
	return (NULL);
}
