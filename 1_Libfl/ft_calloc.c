/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 21:50:55 by areverte          #+#    #+#             */
/*   Updated: 2022/09/21 22:01:15 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*arr;
	size_t	i;

	i = 0;
	if (count == 0 || size == 0)
		return (malloc(0));
	arr = malloc(size * count);
	if (!arr)
		return (NULL);
	while (i < size * count)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
