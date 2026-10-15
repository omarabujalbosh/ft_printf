/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar </var/spool/mail/omar>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 23:03:38 by omar              #+#    #+#             */
/*   Updated: 2026/10/13 17:48:41 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int	print_arg(char ch_arg, va_list arg)
{
	int	count;

	count = 0;
	if (ch_arg == 'c')
		count = put_char(va_arg(arg, int));
	else if (ch_arg == 's')
		count = put_str(va_arg(arg, char *));
	else if (ch_arg == 'p')
		count = put_pounter(va_arg(arg, void *));
	else if (ch_arg == 'd' || ch_arg == 'i')
		count = put_num(va_arg(arg, int));
	else if (ch_arg == 'u')
		count = put_unsigned_int(va_arg(arg, unsigned int));
	else if (ch_arg == 'x')
		count = put_hexa(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (ch_arg == 'X')
		count = put_hexa(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (ch_arg == '%')
		count = put_mod();
	else
		count = write(1, "%", 1) + write(1, &ch_arg, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		count;

	if (!format)
		return (-1);
	i = 0;
	count = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += print_arg(format[i], arg);
			i++;
		}
		if (!format[i])
			break ;
		if (format[i] != '%')
			count += write(1, &format[i++], 1);
	}
	va_end(arg);
	return (count);
}
