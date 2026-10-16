/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_unsgined_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <oabu-jal@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:42:35 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/10/16 16:42:42 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len(unsigned int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n)
	{
		n /= 10;
		count ++;
	}
	return (count);
}

int	put_unsigned_int(unsigned int n)
{
	char	mod;

	if (n >= 10)
		put_unsigned_int(n / 10);
	mod = (n % 10) + '0';
	write(1, &mod, 1);
	return (len(n));
}
