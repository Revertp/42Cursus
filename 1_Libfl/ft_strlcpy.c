/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:38:55 by areverte          #+#    #+#             */
/*   Updated: 2022/10/08 19:30:53 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	int		k;

	i = 0;
	k = ft_strlen(src);
	if (size > 0)
	{
		while ((src[i]) && (i < size -1))
		{
		dest[i] = src[i];
		i++;
		}
		dest[i] = 0;
	}
	return (k);
}

/*


int	main(void)
{
	printf("%zu\n", ft_strlcat("Hola", "Alfredo", 3));
}
*/
