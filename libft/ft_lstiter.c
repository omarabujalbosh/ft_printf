/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:36:19 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/09/30 15:26:37 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*currnt;

	if (!lst || !f)
		return ;
	currnt = lst;
	while (currnt)
	{
		f(currnt->content);
		currnt = currnt->next;
	}
}
