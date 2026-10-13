/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 18:55:52 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/10/04 08:26:25 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n, int isnega)
{
	int	count;

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

static int	isnegativ(int	*n)
{
	if (*n < 0)
	{
		*n *= -1;
		return (1);
	}
	else
		return (0);
}

static char	*specialcase(void)
{
	int		i;
	char	*num;
	char	*s ;

	s = "-2147483648";
	i = 0;
	num = malloc(12);
	if (!num)
		return (NULL);
	while (i < 12)
	{
		num[i] = s[i];
		i++;
	}
	return (num);
}

static char	*zerocase(void)
{
	char	*num;

	{
		num = malloc(2);
		if (!num)
			return (NULL);
		num[0] = '0';
		num[1] = '\0';
	}
	return (num);
}

char	*ft_itoa(int n)
{
	int		isnega;
	char	*num;
	int		size;

	if (n == 0)
		return (zerocase());
	if (n == INT_MIN)
		return (specialcase());
	isnega = isnegativ(&n);
	size = len(n, isnega);
	num = malloc(size + 1);
	if (!num)
		return (NULL);
	num[size--] = '\0';
	while (size >= 0 && n)
	{
		num[size] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	if (isnega)
		num[0] = '-';
	return (num);
}
/*
int	main(void)
{
	int		tests[] = {
		0,
		1,
		-1,
		9,
		-9,
		10,
		-10,
		123456789,
		-123456789,
		2147483647,
		-2147483648
	};
	int		i;
	char	*num;

	i = 0;
	while (i < 11)
	{
		num = ft_itoa(tests[i]);
		if (!num)
		{
			printf("ft_itoa(%d) -> NULL\n", tests[i]);
			return (1);
		}
		printf("ft_itoa(%d) -> \"%s\"\n", tests[i], num);
		free(num);
		i++;
	}
	return (0);
}
*/
