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
	long int num;
	int	count;

	count = 0;
	num = (long int)s;
	count += write(1, "0x", 2);
	count += put_hexa(num);
	return (count);
}
