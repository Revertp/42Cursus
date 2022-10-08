/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:42:16 by areverte          #+#    #+#             */
/*   Updated: 2022/10/08 19:04:14 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*temp;
	t_list	*start;

	temp = lst;
	if (!lst || !f || !del)
		return (NULL);
	newlist = ft_lstnew(f(temp->content));
	if (!newlist)
		return (0);
	start = newlist;
	temp = temp->next;
	while (temp)
	{
		newlist->next = ft_lstnew(f(temp->content));
		if (!(newlist->next))
		{
			ft_lstclear(&start, del);
			return (0);
		}
		newlist = newlist->next;
		temp = temp->next;
	}
	newlist->next = NULL;
	return (start);
}
