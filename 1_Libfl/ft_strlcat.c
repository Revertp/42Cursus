/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:37:58 by areverte          #+#    #+#             */
/*   Updated: 2022/10/08 19:28:49 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (size <= i)
		return (j + size);
	k = 0;
	while ((src[k]) && (i + 1 < size))
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(&src[k]) + i);
}

/*
int	main(void)
{
	printf("%zu\n", ft_strlcat("Hola", "Alfredo", 3));
}
*/
