/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_lower_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar </var/spool/mail/omar>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 00:16:22 by omar              #+#    #+#             */
/*   Updated: 2026/10/13 14:00:33 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_hexa(unsigned long long  n, char *s)
{
	char	mod;
	int	c;

	c = 0;
	if (n >= 16)
		c += put_hexa(n / 16, s);
	mod = s[(n % 16)];
	c += write(1, &mod, 1);
	return (c);
}
