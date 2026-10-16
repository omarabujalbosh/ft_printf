/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pounter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <oabu-jal@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:43:24 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/10/16 17:47:45 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	put_hexa_st(unsigned long long n, char *s)
{
	char	mod;
	int		c;

	c = 0;
	if (n >= 16)
		c += put_hexa_st(n / 16, s);
	mod = s[(n % 16)];
	c += write(1, &mod, 1);
	return (c);
}

int	put_pounter(void *s)
{
	unsigned long long	num;
	int					count;

	if (!s)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count = 0;
	num = (unsigned long long)s;
	count += write(1, "0x", 2);
	count += put_hexa_st(num, "0123456789abcdef");
	return (count);
}
