/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:55:49 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/10/08 00:49:55 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isinset(char const ch, char const *set)
{
	int	i;
	int	len;

	len = ft_strlen(set);
	i = 0;
	while (i < len)
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

static int	countlen(char const *s1, char const *set)
{
	int	len;
	int	i;
	int	fcount;
	int	lcount;

	i = 0;
	fcount = 0;
	lcount = 0;
	len = (int)ft_strlen(s1);
	if (len == 0)
		return (0);
	while (isinset(s1[i], set) && s1[i++])
	{
		fcount++;
	}
	i = len - 1;
	while (isinset(s1[i], (char *)set) && s1[i])
	{
		lcount++;
		i--;
	}
	if ((fcount + lcount) > len)
		return (0);
	len -= (fcount + lcount);
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		newlen;
	char	*new;
	int		i;
	int		j;

	j = 0;
	i = 0;
	newlen = countlen(s1, set);
	new = malloc(newlen + 1);
	if (!new)
		return (NULL);
	if (!newlen)
	{
		new[0] = '\0';
		return (new);
	}
	while (isinset(s1[i], set))
		i++;
	while (j < newlen)
		new[j++] = s1[i++];
	new[j] = '\0';
	return (new);
}
