/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:06:07 by areverte          #+#    #+#             */
/*   Updated: 2022/09/21 17:28:10 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/*
int main () {
   char str[50];

   ft_strlcpy(str,"This is string.h library function", 20);
   puts(str);

   ft_memset(str,'$',7);
   puts(str);

   return(0);
}
*/
