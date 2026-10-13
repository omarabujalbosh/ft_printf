/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-jal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:43:05 by oabu-jal          #+#    #+#             */
/*   Updated: 2026/10/05 12:26:42 by oabu-jal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new[2];

	new[1] = NULL;
	if (!f || !lst || !del)
		return (NULL);
	while (lst)
	{
		new[0] = malloc(sizeof(t_list));
		if (!new[0])
		{
			ft_lstclear(&new[1], del);
			return (NULL);
		}
		new[0]->content = f(lst->content);
		if (!new[0]->content)
		{
			ft_lstclear(&new[1], del);
			free(new[0]);
			return (NULL);
		}
		new[0]->next = NULL;
		ft_lstadd_back(&new[1], new[0]);
		lst = lst->next;
	}
	return (new[1]);
}
