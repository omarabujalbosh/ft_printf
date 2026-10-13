/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_unsgined_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar </var/spool/mail/omar>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 00:03:23 by omar              #+#    #+#             */
/*   Updated: 2026/10/13 00:15:41 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len(unsigned int n)
{
	int	count;

	count = 0;
	while (n)
	{
		n /= 10;
		count ++;
	}
	return (count);
}

int	 put_unsigned_int(unsigned int n)
{
	if (n >= 10)
		put_unsgined_int(n / 10);
	mod = (n % 10) + '0';
	write(fd, &mod, 1);
	return (len(n));
}
