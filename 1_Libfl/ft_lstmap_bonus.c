/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:42:16 by areverte          #+#    #+#             */
/*   Updated: 2022/10/07 20:13:31 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	/*
	t_list	*newlist;
	t_list	*temp;
	t_list	*start;


	temp = lst;
	if (!lst || !f || !del)
		return (NULL);
	start =0;
	while(temp)
	{
		if (!(newlist = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&start, del);
			return (0);
		}
		ft_lstadd_back(&(start), newlist);
		temp= temp->next;
	}
	return(start);
	*/
	t_list *new_list;
	t_list *save;

	if (!lst || !f || !del)
		return (0);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (0);
	save = new_list;
	lst = lst->next;
	while (lst)
	{
		new_list->next = ft_lstnew(f(lst->content));
		if (!new_list->next)
		{
			ft_lstclear(&save, del);
			return (0);
		}
		new_list = new_list->next;
		lst = lst->next;
	}
	new_list->next = NULL;
	return (save);
}
