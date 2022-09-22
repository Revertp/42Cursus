/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:45:37 by areverte          #+#    #+#             */
/*   Updated: 2022/09/22 12:03:00 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	i = 0;
	ptrdest = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (ptrdest < ptrsrc)
		ft_memcpy(dst, src, len);
	else
	{
		while (i < len)
		{
			ptrdest[len - 1 - i] = ptrsrc[len - 1 - i];
			i++;
		}
	}
	return (ptrdest);
}

/*
int main ()
{
   char dest[15] = "oldstring";
   const char src[]  = "a mi me parece igual no se";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 5);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
*/
