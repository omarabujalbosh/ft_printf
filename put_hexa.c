/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <oabu-jal@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:43:51 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/10/16 16:43:54 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_hexa(unsigned int n, char *s)
{
	char	mod;
	int		c;

	c = 0;
	if (n >= 16)
		c += put_hexa(n / 16, s);
	mod = s[(n % 16)];
	c += write(1, &mod, 1);
	return (c);
}
