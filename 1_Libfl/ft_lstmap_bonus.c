/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:42:16 by areverte          #+#    #+#             */
/*   Updated: 2022/10/08 19:48:33 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	void	*temp;
	t_list	*start;

	if (!lst || !f)
		return (NULL);
	start = NULL;
	while (lst)
	{
		temp = f(lst->content);
		newlist = ft_lstnew(temp);
		if (!(newlist))
		{
			del(temp);
			ft_lstclear(&start, del);
			return (0);
		}
		ft_lstadd_back(&start, newlist);
		lst = lst->next;
	}
	return (start);
}
