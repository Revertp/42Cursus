/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:42:16 by areverte          #+#    #+#             */
/*   Updated: 2022/10/05 21:33:12 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*cop;
	t_list	*start;
	cop = lst;
	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	start = new;
	while(lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			del(new);
			free(new);
			return(NULL);
		}
		new= lst->next;
	}
	return(start);
}
//
