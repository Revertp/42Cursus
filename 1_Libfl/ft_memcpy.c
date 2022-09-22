/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:12:46 by areverte          #+#    #+#             */
/*   Updated: 2022/09/22 11:42:43 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (dst == src)
		return (0);
	while (n--)
		*d++ = *s++;
	return (dst);
}

/*
int	main(void)
{
	char dest[20] = " ";
	char src[20] = "Hola que tal";
	ft_memcpy(dest, src, 8);
}
*/
