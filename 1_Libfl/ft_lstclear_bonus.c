/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:57:17 by areverte          #+#    #+#             */
/*   Updated: 2022/10/04 19:10:11 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*aux;

	aux = *lst;
	while(aux)
	{
		temp= aux->next;
		ft_lstdelone(aux, del);
		aux = temp;
	}
	*lst = 0;
}
