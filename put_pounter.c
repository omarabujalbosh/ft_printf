/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pounter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar </var/spool/mail/omar>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:05:18 by omar              #+#    #+#             */
/*   Updated: 2026/10/13 14:05:29 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_pounter(void *s)
{
	unsigned long long num;
	int	count;

	if (!s)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count = 0;
	num = (unsigned long long)s;
	count += write(1, "0x", 2);
	count += put_hexa(num, "0123456789abcdef");
	return (count);
}
