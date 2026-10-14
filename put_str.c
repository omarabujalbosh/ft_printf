/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar </var/spool/mail/omar>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 23:53:56 by omar              #+#    #+#             */
/*   Updated: 2026/10/12 23:53:56 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	put_str(char *str)
{
	if (!str)
	{
		write(1 , "(null)", 6);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return ((int)ft_strlen(str));
}
