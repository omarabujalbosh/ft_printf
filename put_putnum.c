/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_putnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <oabu-jal@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:43:08 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/10/16 16:43:10 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft/libft.h"
#include "ft_printf.h"

static int	len(int n, int isnega)
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
	if (isnega)
		count++;
	return (count);
}

int	put_num(int n)
{
	int	flag;

	flag = 0;
	if (n < 0)
		flag = 1;
	ft_putnbr_fd(n, 1);
	return (len(n, flag));
}
